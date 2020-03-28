#include <stdio.h>
#include <time.h>
int main_arrayproject(void) {


	srand(time(NULL));
	printf("\n\n\ === Father is BOLD Game ====  \n\n");
	int answer; //사용자 입력값
	int treatment = rand() % 4; //발모제 선택(0 - 3)

	int cntShowBottle = 0; // 이번 게임에 보여줄 병갯수
	int preCntShowBottle = 0; //앞에 게임에 보여준 병 갯수
	//서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개 -> 다음엔 3개....)


	//3번의 기회 (3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0,0,0,0 }; //4개의 병
		do {
			cntShowBottle = rand() % 2 + 2; //보여주는 병의 갯수(0 - 1, +2 -> 2,3)
		} while (cntShowBottle == preCntShowBottle);
		preCntShowBottle = cntShowBottle;

		int isIncluded = 0; //보여줄 병 중에 발모제가 포함되어있는지 여부(1이면 포함, 0이면불포함) 
		printf(" >  %d attempt  : ", i);

		//보여줄 병 종류를 선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; // 0- 3

			//아직 선택되지 않은 병이면, 선택처리
			if (bottle[randBottle] == 0) {
				bottle[randBottle] = 1;
				if (randBottle == treatment) {
					isIncluded = 1;
				}
			}

			//이미 선택된 병이면, 중복이므로 다시 선택
			else {
				j--;
			}

		}
		
		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ", k + 1);
			}
		}

		printf("put on the head");

		if (isIncluded == 1) {
			printf(" >>seccess !! \n\n");
		}
		else {
			printf(" >> fail !! \n\n");
		}
		printf("\n  if you want to keep, press any button  ");
		getchar(); //사용자가 키를 입력하기 전까지 대기하는 용도
	}
	printf("\n\n Which one is the treatment?");
	scanf_s("%d", &answer);
	if (answer == treatment+1) {
		printf("\n >> correct  \n");
	}
	else {
		printf("\n >> fail , correct answer is %d",treatment+1 );

	}

	return 0;
}