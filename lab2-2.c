#include <stdio.h>

int main()
{
    int i; // int형 변수 선언
    int *ptr; // int형 포인터 선언 
    int **dptr; // int형 이중 포인터 선언 

    i = 1234; // i 값 
    printf("[----- [장원도] [2018038099] -----]\n"); // 이름 학번 출력
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); // i 값 출력
    printf("address of i == %p\n", &i); // i 주소값 출력
    printf("value of ptr == %p\n", ptr); // ptr 값 출력
    printf("address of ptr == %p\n", &ptr); // ptr 주소값 출력

    ptr = &i; /* ptr is now holding the address of i */ //ptr에 i주소값 설정

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); // i 값 출력 
    printf("address of i == %p\n", &i); // i 주소값 출력 
    printf("value of ptr == %p\n", ptr); // ptr 값 출력 
    printf("address of ptr == %p\n", &ptr); // ptr 주소값 출력 
    printf("value of *ptr == %d\n", *ptr); // ptr이 가르키고 있는 값 출력 

    dptr = &ptr; /* dptr is now holding the address of ptr */ //dptr에 ptr 주소값 설정

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); // i 값 출력
    printf("address of i == %p\n", &i); // i 주소값 출력
    printf("value of ptr == %p\n", ptr); // ptr 값 출력
    printf("address of ptr == %p\n", &ptr); // ptr 주소값 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가르키고 있는 값 출력
    printf("value of dptr == %p\n", dptr); // dptr 값 출력
    printf("address of ptr == %p\n", &dptr); // dptr 주소값  출력
    printf("value of *dptr == %p\n", *dptr); // dptr이 가르키고 있는 값 출력 dptr > ptr
    printf("value of **dptr == %d\n", **dptr); // dptr 값 출력 dptr > ptr > i

    *ptr = 7777; /* changing the value of *ptr */ // ptr 값 설정 

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); // i 값 출력
    printf("value of *ptr == %d\n", *ptr); // ptr 값 출력 ptr이 가르키고 있는 값 i
    printf("value of **dptr == %d\n", **dptr); // dptr 값 출력 dptr > ptr > i

    **dptr = 8888; /* changing the value of **dptr */ //dptr 값 설정
    
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // i 값 출력
    printf("value of *ptr == %d\n", *ptr); // ptr 값 출력
    printf("value of **dptr == %d\n", **dptr); // dptr 값 출력
    
    return 0;
}