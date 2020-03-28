#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main_functionproject(void) {

	// 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
	//맞히면 통과, 틀리면 실패

	srand(time(NULL));
	int count = 0; //맞힌 문제수
	for (int i = 1; i <= 5; i++) {
		//x * y =?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d ? ", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {

			printf("shutdown program\n");
			exit(0);
		}
		else if (answer == num1 * num2) {

			//success
			success();
			count++;
		}
		else {
			//fail
			fail();
		}
	}

	printf("\n\n you solved %d password in 5\n", count);


	return 0;
}


int getRandomNumber(int level) {
	
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n\n############### %d's password #######\n", level);
	printf("\n\n%d x %d = ? \n\n", num1, num2);
	printf("#####################################\n");
	printf("\nInput password ( exit : -1) >> ");
}

void success() {
	printf("\n >> Good! correct! \n");
}

void fail() {
	printf("\n >> fail, incorrect \n");
}