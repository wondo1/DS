#include <stdio.h>

int main()
{
    int i; // int�� ���� ����
    int *ptr; // int�� ������ ���� 
    int **dptr; // int�� ���� ������ ���� 

    i = 1234; // i �� 
    printf("[----- [�����] [2018038099] -----]\n"); // �̸� �й� ���
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); // i �� ���
    printf("address of i == %p\n", &i); // i �ּҰ� ���
    printf("value of ptr == %p\n", ptr); // ptr �� ���
    printf("address of ptr == %p\n", &ptr); // ptr �ּҰ� ���

    ptr = &i; /* ptr is now holding the address of i */ //ptr�� i�ּҰ� ����

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); // i �� ��� 
    printf("address of i == %p\n", &i); // i �ּҰ� ��� 
    printf("value of ptr == %p\n", ptr); // ptr �� ��� 
    printf("address of ptr == %p\n", &ptr); // ptr �ּҰ� ��� 
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ִ� �� ��� 

    dptr = &ptr; /* dptr is now holding the address of ptr */ //dptr�� ptr �ּҰ� ����

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); // i �� ���
    printf("address of i == %p\n", &i); // i �ּҰ� ���
    printf("value of ptr == %p\n", ptr); // ptr �� ���
    printf("address of ptr == %p\n", &ptr); // ptr �ּҰ� ���
    printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �ִ� �� ���
    printf("value of dptr == %p\n", dptr); // dptr �� ���
    printf("address of ptr == %p\n", &dptr); // dptr �ּҰ�  ���
    printf("value of *dptr == %p\n", *dptr); // dptr�� ����Ű�� �ִ� �� ��� dptr > ptr
    printf("value of **dptr == %d\n", **dptr); // dptr �� ��� dptr > ptr > i

    *ptr = 7777; /* changing the value of *ptr */ // ptr �� ���� 

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); // i �� ���
    printf("value of *ptr == %d\n", *ptr); // ptr �� ��� ptr�� ����Ű�� �ִ� �� i
    printf("value of **dptr == %d\n", **dptr); // dptr �� ��� dptr > ptr > i

    **dptr = 8888; /* changing the value of **dptr */ //dptr �� ����
    
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // i �� ���
    printf("value of *ptr == %d\n", *ptr); // ptr �� ���
    printf("value of **dptr == %d\n", **dptr); // dptr �� ���
    
    return 0;
}