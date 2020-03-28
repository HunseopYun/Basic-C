#include <stdio.h>

int main_printfscanf(void)
{
	/*

	int age = 12;
	printf("%d\n", age);
	
	age = 13;

	printf("%d\n", age);


	// printf("1000\n);

	printf("2\n");



	float f = 46.5f;
	printf("%f\n", f);
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);

	const int year = 2000; // constant
	printf("when is your birthday : %d\n", year);
	//year = 2001;
	

	int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d + %d = %d\n", 11231, 12321, 11231 + 12321);



	//scanf
	//input by keyboard
	int input;
	printf("Input value = ");
	scanf_s("%d", &input);
	printf("Input value is : %d\n", input);

	int one, two, three;
	printf("please input 3 integers");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("value of One = %d\n", one);
	printf("value of Two = %d\n", two);
	printf("value of Three = %d\n", three);

	char c = 'A';
	printf("%c\n", c);
	char str[256];
	//케릭터 배열을 만들어서 문자열 저장
	scanf_s("%s", str, sizeof(str)); //사이즈오브를 이용해서 스트링배열 자리수만큼 입력 받로고 설정하는 메소드임
	printf("%s\n", str);



	*/


	//프로젝트
	//경찰관이 범죄자의 정보를 입수(조서 작성)
	//이름, 나이, 몸무게, 키, 범죄명
	char name[256];
	printf("What is your name? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("what is your age? ");
	scanf_s("%d", &age);

	float weight;
	printf("how much do you weigh? ");
	scanf_s("%f", &weight);

	double height;
	printf("how tall are you? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("what did you do? ");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n ---- Information of crime ----\n");
	printf("name = %s\n", name);
	printf("age = %d\n", age);
	printf("weight = %.2f\n", weight);
	printf("height = %.2lf\n", height);
	printf("a criminal record = %s\n", what);


	return 0;

}