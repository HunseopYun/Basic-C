#include <stdio.h>
#include <time.h>


//5마리의 고양이가 있다
//아무키나 눌러서 랜덤으로 고양이를 뽑되
//5마리 모두 다 수집을 해서 열심히 키우면 되는거임
//중복발생가능!!!

//고양이
//이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct {
	char* name;
	int age;
	char* character;
	int level;
}CAT;

//현재까지 보유한 고양이
int collection[5] = { 0,0,0,0,0 };

//전체 고양이 리스트
CAT cats[5];
void initCats(); //고양이 정보초기화
void printCat(int selected);

int main_struct_project(void) {
	srand(time(NULL));
	initCats();
	while (1) {
		printf("어느 고양이의 집사가 될까요?!!!\n\n\n아무키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; //0 - 4 사이의 숫자 반환
		printCat(selected); //뽑은 고양이 정보 출력
		collection[selected] = 1;//고양이 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll == 1) {
			break;
		}
	}


	return 0;
}

void initCats() {
	cats[0].name = "Black";
	cats[0].age = 5;
	cats[0].character = "pure";
	cats[0].level = 1;

	cats[1].name = "Cute";
	cats[1].age = 5;
	cats[1].character = "cute";
	cats[1].level = 1;

	cats[2].name = "Tom";
	cats[2].age = 3;
	cats[2].character = "pure";
	cats[2].level = 7;

	cats[3].name = "Jim";
	cats[3].age = 2;
	cats[3].character = "pure";
	cats[3].level = 3;

	cats[4].name = "Jack";
	cats[4].age = 10;
	cats[4].character = "pure";
	cats[4].level = 4;

}

void printCat(int selected) {
	printf("\n\n === 당신의 이 고양이의 집사가 되었다 =====\n\n");
	printf(" name = %s\n", cats[selected].name);
	printf(" age = %d\n", cats[selected].age);
	printf(" character = %s\n", cats[selected].character);
	printf(" level = ");

	for (int i = 0; i < cats[selected].level; i++) {
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection() {
	//1.현재 보유한 고양이 목록도 출력
	//2. 다 모았는지 여부를 반환
	int collectAll = 1;
	printf("\n\n === 보유한 고양이 목록이에요 ===\n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {//고양이 수집 안됌
			printf("%10s", "(빈 박스");
			collectAll = 0;
		}
		else {// 고양이 수집됌
			printf("%10s", cats[i].name);
		}
	}
	printf("\n==============================================\n\n");

	if (collectAll) {//모든 고양이를 다 모은 경우
		printf("\n모든 고양이를 다모앗습니다. 잘 키워주세요.\n\n");
	}
	return collectAll;
}