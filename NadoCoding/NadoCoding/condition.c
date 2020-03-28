#include <stdio.h>
#include <time.h>


int main_condition(void) {

	////버스를 탄다고 가정, 학생/일반인으로 구분(일반인 :20세)
	//int age = 15;
	////if(조건){....} else {....}
	//if (age >= 20)
	//	printf("Adult\n");
	//else
	//	printf("Student\n");

	//초등학생 8-13 / 중학생 14 - 16 / 고등학생 17-19으로 나누면?
	// if / else if/ else


	//int age = 100;
	//if (age >= 8 && age <= 13) {//&& 앤드 연산자
	//	printf("elementary\n");

	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("middle\n");
	//}
	//else if (age >= 15 && age <= 19) {
	//	printf("high\n");
	//}
	//else {
	//	printf("you're not a student\n");
	//}



	//break, continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를합니다.
	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6) {
	//		printf("나머지 학생은 집에가세요\n");
	//		break; //조건문을 벗어나도록 함
	//	}
	//	printf("%d번 학생은 조별발표 준비를 하세요.\n", i);

	//}

	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.

	//for (int i = 1; i <= 30; i++) {
	//	if (i >= 6 && i <= 10) {
	//		if (i == 7) {
	//			printf("%d 번 학생은 결석입니다.\n", i);
	//			continue; //이것 다음에 나오는 문장은 무시하고 반복문 처음으로 돌아감
	//		}
	//		printf("%d 번 학생은 조별발표 준비를 하세요.\n", i);
	//	}
	//}

	// && || 연산자
	// && 앞뒤의 조건이 모두 부합하는 경우
	// || 둘 중 하나만 부합하면 실행
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("aとbは同じで、cとdも同じ\n");

	}
	else {
		printf("値がお互い違います\n");
	}*/


	//가위 0 바위 1 보 2
	//srand(time(NULL)); //time.h를 인클루드해야됌
	//int i = rand() % 3; // 0 - 2 반환
	//if (i == 0) {
	//	printf("scissors\n");
	//}
	//else if (i = 1) {
	//	printf("rock\n");
	//}
	//else if (i = 2) {
	//	printf("paper\n");
	//}
	//else {
	//	printf("idk\n");
	//}



	//srand(time(NULL));
	//int i = rand() % 3; // 0 - 2 반환
	//switch(i) {
	//case 0: printf("scissors\n"); break;
	//case 1: printf("rock\n"); break;
	//case 2: printf("paper\n"); break;
	//dafault: printf("idk\n");
	//}

	//we have to write over break setence when you r using switch case sentence.

	/*int age = 14;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("elemantary\n"); break;
	case 14:
	case 15:
	case 16:printf("middle\n"); break;
	case 17:
	case 18:
	case 19:printf("high\n"); break;
	default:printf("you arent a student\n");
	}*/

//up and down
srand(time(NULL));
int num = rand() % 100 + 1; // 1 - 100사이의 숫자
printf("num = %d\n", num);

int answer = 0; //정답
int chance = 5; // 기회

while (chance > 0) { //1은 참, 0은 거짓
	printf("left your chance %d\n", chance--);
	printf("check figures (1-100) : ");
	scanf_s("%d", &answer);

	if (answer > num) {
		printf("Down\n\n");
	}
	else if (answer < num) {
		printf("Up\n\n");
	}
	else if (answer == num) {
		printf("correct!\n\n");
		break;
	}
	else {
		printf("unknown error\n\n");
	}


}











	return 0;
}