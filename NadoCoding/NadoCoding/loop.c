#include <stdio.h>

int main_loop(void)
{
	/*

	printf("Hello World\n");
	printf("Hello World\n");

	// ++의 의미
	int a = 10;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);
	a++;
	printf("a = %d\n", a);

	int b = 20;
	//b = b + 1;
	printf("b = %d\n", b);
	printf("b = %d\n", b++); //문장을 실행하고 나서 1을 더한다
	printf("b = %d\n", b);

	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);

	//반복문
	// for, while, do while
	//for(선언;　조건; 증감）{  }

	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}

	//while
	//while (조건）{  }

	int c = 1;
	while (c <= 10) {
		printf("Hello World %d\n", c++);
	}

	//do { } while(조건);
	int d = 1;
	do {
		printf("Hello World %d\n", d++);
	} while (d <= 10);

	//2중 반복문
	for (int ii = 1; ii <= 3; ii++) {
		printf("First loop : %d\n", ii);
		for (int j = 1; j <= 5; j++) {
			printf("Second loop : %d\n", j);
		}
	}

	*/

	//구구단
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	// 2 x 4 = 8
	//...
	// 9 x 9 = 9

/*
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
*/


	/*
	*
	**
	***
	****
	*****
	*/
/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

/*
	 SSS*
	 SS**
	 S***
	 ****
*/
//
//for (int i = 0; i < 5; i++) {
//	for (int j = i; j < 5 - 1; j++) {
//		printf("s");
//	}
//	for (int k = 0; k <= i; k++) {
//		printf("*");
//	}
//	printf("\n");
//	}
//


//피라미드를 쌓아라
//
//SSSSSS*
//SSSSS***
//SSSS*****
//SSS*******
//SS*********
//S***********
//*************

int floor;
printf("何階で積むますか?\n");
scanf_s("%d", &floor);
for (int i = 0; i < floor; i++) {
	for (int j = i; j < floor - 1; j++) {
		printf(" ");
	}
	for (int k = 0; k <i*2+1 ; k++) {
		printf("*");
	}
	printf("\n");
}























	return 0;
}