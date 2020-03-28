#include <stdio.h>

int main_array(void) {

	////배열
	//int subway1 = 30; //지하철 1호차에 30명이 타고 있다
	//int subway2 = 40;
	//int subway3 = 50;

	//printf("There is a subway1 in %d people\n", subway1);
	//printf("There is a subway2 in %d people\n", subway2);
	//printf("There is a subway3 in %d people\n", subway3);

	//int subway_array[3]; //위에서 만든 인트형 변수 3개를 동시에 생성한다고 보면됌
	//subway_array[0] = 30; //index값을 항상 0부터 시작한다
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++) {
	//	printf("There is a subway%d in %d people \n", i, subway_array[i]);
	//}




	////값 설정 방법
	////int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr[10]; //반드시 배열은 초기화를 해야함
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", arr[i]);
	//}



	////배열 크기는 항상 상수로 선언
	//int size = 10;
	//int arr[size];


	//int arr[10] = { 1, 2 }; //처음에 하나라도 초기화를 해놓으면 그 이후에는 자동으로 0으로 초기화
	//for (int i = 0; i < 10; i++) {
	//		printf("%d\n", arr[i]);
	//	}



	//int arr[] = { 1,2 }; //arr[2]와 똑같은 의미


	//float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	//for (int i = 0; i < 5; i++) {
	//printf("%.2f\n", arr_f[i]);
	//}


	////문자 vs 문자열
	//char c = 'A';
	//printf("%c\n", c);

	////문자열 끝에는 끝을 의미하는 NULL문자 '\0' 이 포함되어야 함
	//char str1[6] = "coding";	// [c] [o] [d] [i] [n] [g]
	//char str2[7] = "coding";	// [c] [o] [d] [i] [n] [g] [\0]
	//printf("%s\n", str1);//널문자 미포함
	//printf("%s\n", str2);//널문자 포함


	//char str[] = "coding";
	////printf("%s\n", str);
	////printf("%d\n", sizeof(str)); //자동으로 배열 끝에 널문자가 들어가기 때문에 사이즈가 7이됌
	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}




	//char eng[] = "Imaboy";
	//printf("%s\n", eng);
	//printf("%d\n", sizeof(eng));
	////영어 1글자 : 1바이트
	////한글 1글자 : 2바이트
	////한 글
	////English
	////char 자료형의 크기: 1바이트

/*
	char c_array1[7] = { 'c', 'o', 'd', 'i','n','g','\0' };
	char c_array2[6] = { 'c', 'o', 'd', 'i','n','g'};
	printf("%s\n", c_array1);
	printf("%s\n", c_array2);
*/


	//char c_array[10] = { 'c', 'o', 'd', 'i','n','g'};
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}*/

	//for (int i = 0; i < sizeof(c_array); i++) {
	//	printf("%d\n", c_array[i]); //ASCII코드(아스키코드) 값 출력(NULL문자 0으로 입력됨)
	//}


	//문자열 입력받기 : 경찰서 조서 쓰기 예제
	/*char name[256];
	printf("Input name = ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/


//참고: 아스키코드란->ANSI(미국표준협회)에서 제시한 표준코드 체계
//	7비트, 총 128개 코드(0 ~127)
//	a : 97(문자 a의 아스키코드 정수값)
//	A : 65
//	O : 48


//
//printf("%c\n", 'a');
//printf("%d\n", 'a');
//printf("%c\n", 'b');
//printf("%d\n", 'b');
//printf("%c\n", '\0');
//printf("%d\n", '\0');



//참고2 : 0-127 사이의 아스키코드 정수값에해당하는 문자 확인
for (int i = 0; i < 128; i++) {
	printf("ASCII　Integer %d : %c\n", i, i);
}




















	return 0;
}