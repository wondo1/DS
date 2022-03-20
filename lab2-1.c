#include <stdio.h>

int main()
{
    char charType; // 문자형 변수 선언
    int integerType; // 정수형 변수 선언
    float floatType; // 실수형 변수 선언
    double doubleType; // 실수형 변수 선언

    printf("[----- [장원도] [2018038099] -----]\n"); // 이름 학번 출력 
    printf("Size of char: %ld byte\n",sizeof(charType)); // charType 변수 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType 변수 크기 출력 
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType 변수 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType 변수 크기 출력
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); // char 자료형 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); // int 자료형 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); // float 자료형 크기 출력 
    printf("Size of double: %ld bytes\n",sizeof(double)); // double 자료형 크기 출력
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); // char자료형 포인터 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int자료형 포인터 크기 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float자료형 포인터 크기 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double자료형 포인터 크기 출력

    return 0;
}
