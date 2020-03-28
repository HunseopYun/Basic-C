﻿#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;	//연관업체게임
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;	//연관업체게임
}GAME_INFO;


int main_struct(void) {

	/*[게임출시]
	이름 : 나도게임
	발매년도 : 2017년
	가격 : 50원
	제작사 : 나도회사*/

	char* name = "나도게임";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";

	/*[또다른게임출시]
	이름 : 너도게임
	발매년도 : 2017년
	가격 : 100원
	제작사 : 너도회사*/

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";


	//구조체사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2018;
	gameInfo1.price = 50;
	gameInfo1.company = "나도호사";
	
	//구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf(" 게임명 : %s\n", gameInfo1.name);
	printf(" 발매년도 : %d\n", gameInfo1.year);
	printf(" 가격 : %d\n", gameInfo1.price);
	printf(" 제작사 : %s\n", gameInfo1.company);

	//구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};

	//구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf(" 게임명 : %s\n", gameInfo2.name);
	printf(" 발매년도 : %d\n", gameInfo2.year);
	printf(" 가격 : %d\n", gameInfo2.price);
	printf(" 제작사 : %s\n", gameInfo2.company);

	//구조체 배열
	struct GameInfo gameArray[2] = {
		{"asdfsad", 2018, 50, "sdfsda"},
	{"asdfsf", 2018, 100, "adasd"}
	};

	//구조체 포인터
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("\n\n-- asdsad --\n");
	//printf(" 게임명 : %s\n", (*gamePtr).name);
	//printf(" 발매년도 : %d\n", (*gamePtr).year);
	//printf(" 가격 : %d\n", (*gamePtr).price);
	//printf(" 제작사 : %s\n", (*gamePtr).company);

	printf(" 게임명 : %s\n", gamePtr->name);
	printf(" 발매년도 : %d\n", gamePtr->year);
	printf(" 가격 : %d\n", gamePtr->price);
	printf(" 제작사 : %s\n", gamePtr->company);

	//연관업체 소개
	gameInfo1.friendGame = &gameInfo2;
	printf("\n\n-- asdsad --\n");
	printf(" 게임명 : %s\n", gameInfo1.friendGame->name);
	printf(" 발매년도 : %d\n", gameInfo1.friendGame->year);
	printf(" 가격 : %d\n", gameInfo1.friendGame->price);
	printf(" 제작사 : %s\n", gameInfo1.friendGame->company);


	//typedef
	//자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3;//int i = 3;
	실수 실수변수 = 3.23f; // floatf = 3.23f;

	printf("\n\nsdfsdf %d, sdfasdf %.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "sadf";
	game1.year = 2015;


	GAME_INFO game2;
	game2.name = "asds";
	game2.year = 20131;




	return 0;
}