#include <stdio.h>

//선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); //전체 total개에서 ate개를 먹고 남은 수를 반환

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void) {

	////function
	////calc
	//int num = 2;
	////printf("num is %d\n", num);//2
	//p(num);

	////2+3 =?
	//num = num + 3;
	////printf("num is %d\n", num); //5
	//p(num);

	////5-1=?
	//num -= 1; //num = num -1
	////printf("num is %d\n", num);//4
	//p(num);

	////4 x 3 = ?
	//num *= 3;
	////printf("num is %d\n", num); //12
	//p(num);

	//// 12 / 6 = ?
	//num /= 6;
	////printf("num is %d\n", num); //2
	//p(num);




	////함수의 종류
	////반환값이 없는 함수
	//function_without_return();


	////반환값이 있는 함수
	//int ret = function_with_return();
	//p(ret);

	////파라미터(전달값)이 없는 함수
	//function_without_params();

	////파라미터(전달값)이 있는 함수
	//function_with_params(1, 2, 3);

	////파라미터(전달값)도 받고, 반환값이 있는 함수
	////int re = apple(5, 2); //5개의 사과중에 2개를 먹었다.
	////printf("ate 2 apples in 5, left %d apples\n", re);
	//printf("ate %d apples in %d, left %d apples\n", 10, 4, apple(10, 4));


	//계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);















	return 0;
}



//정의
void p(int num) {
	printf("num is %d\n", num);
}

//
//전달값 : 36
//함수 : ㅁ : 4
//반환형 : ?
//반환형 함수이름(전달값1, 전달값2, ...) {
//	return num + 4;
//}


void function_without_return() {
	printf("It's a function have no return value\n");
}


int function_with_return() {
	printf("It's a function have return value\n");
	return 10;
}

void function_without_params() {
	printf("It's a function have no parameter\n");
}


void function_with_params(int num1, int num2, int num3) {
	printf("It's function have parameter that values are %d, %d, %d\n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("It's function have return values, parameters\n");
		return total - ate;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}