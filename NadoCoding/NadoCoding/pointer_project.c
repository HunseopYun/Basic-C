#include <stdio.h>
#include <time.h>

//물고기가 6마리 있음
// 이들은 어창에 살고 있는데, 사막에 있음
// 사막이 너무 더워서, 너무 건조해서 물이 아주 빨리 증발을함
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요.
// 물고기는 시간이 지날수록 점점 커져서 나중에 물고기를 먹음


int level;
int arrayFish[6];
int* cursor;


void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();
int main_pointer_project(void) {

	long startTime = 0; // 게임 시작 시간 보통 시간은 롱형으로 사용함
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; //직전 경과 시간 (최근에 물을 준시간 간격)

	int num; //몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish; // cursor[0].. cursor[1]...

	startTime = clock(); //현재 시간을 millisecond (1000분의 1초)　단위로 반환
	while (1) { //1을 주면 무한반복
		printfFishes();
		printf("몇 번 어항에물을주시겠어요?");
		scanf_s("%d,", &num);

		//입력값 체크
		if (num < 1 || num>6) {
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		//위의 시간은 밀리세컨이기때문에 초로 환산하기 위해서 나눠준다.
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);//롱형이기 때문에 %ld로 해줌


		//직전 물 준 식(마지막으로 물준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);


		//어항의 물을 감소(증발)
		decreaseWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다
		//1. 어항의 물이 0이면? 물을 줄 수 없다.
		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미죽었습니다. 물을 줄 수 없습니다.\n", num);
		}

		//2.어항의 물이 0이 아닌 경우? 물을 준다 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물읠 줍니다.\n\n", num);
			cursor[num - 1] += 1; //cursor[num - 1] = cursor[num-1]+1
		}

		//레벌업을 할 건지 확인(레벨업은 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1) { // 0보다 크기 때문에 레벌업 수행로직
			
			//레벌업
			level++; //level : 1 -> level : 2 -> level :3 ...
			printf("***** 레벨업!! 기존 %d 레벨에서 %d 레벨로 업그레이드 ****\n\n");

			//최종레벨 -> 5
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}



		}

		//모든 물고기가 죽었는지 확인함
		if (checkFishAlive() == 0) {
			//물고기 도무 죽음
			printf("모든 물고기가 죽었습니다. \n");
			exit(0);
		}
		else {
			//최소 한마리는 이상은 살아있음
			printf("물고기가 아직 살아 잇어요\n");
		}
		prevElapsedTime = totalElapsedTime;
		//10초 -> 15초(5초 : prevElapsedTime) -> 25초(19초...?)
		//결국 가지고 값을 임시로 저장하기 위해서



	}






	return 0;
}



void initData() {
	level = 1; // 게임 레벨 (1-5)
	for (int i = 0; i < 6; i++) {

		arrayFish[i] = 100; //어항의 물 높이 (0 - 100)


	}
}

void printfFishes() {
	printf("%3d번 %3d번　%3d번　%3d번　%3d번　%3d번\n", 1, 2, 3, 4, 5, 6);
	//%3d란?! -> 3칸의 공간을 배정받고 그 공간에 출력하다는 의미
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]); //" %4d "처럼 앞뒤로 공백을 주는 이유?!
		//"%3d번 %3d번 이것이 %3으로 3칸 한글 "번"이 2칸 그리고 뒤에 " " 공백 1칸으로 총 6칸이기에
		//칸수를 맞추기 위해서 앞뒤로 공백을 줌

	}
	printf("\n\n");
}


void decreaseWater(long elapsedTime) {

	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); //3을 난이도 조정을 위한값
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
	}
	}
}


int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1; // 참 true
		}
	}
	return 0;
}