#include <stdio.h>

int main()
{
    char charType; // ������ ���� ����
    int integerType; // ������ ���� ����
    float floatType; // �Ǽ��� ���� ����
    double doubleType; // �Ǽ��� ���� ����

    printf("[----- [�����] [2018038099] -----]\n"); // �̸� �й� ��� 
    printf("Size of char: %ld byte\n",sizeof(charType)); // charType ���� ũ�� ���
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType ���� ũ�� ��� 
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType ���� ũ�� ���
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType ���� ũ�� ���
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); // char �ڷ��� ũ�� ���
    printf("Size of int: %ld bytes\n",sizeof(int)); // int �ڷ��� ũ�� ���
    printf("Size of float: %ld bytes\n",sizeof(float)); // float �ڷ��� ũ�� ��� 
    printf("Size of double: %ld bytes\n",sizeof(double)); // double �ڷ��� ũ�� ���
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); // char�ڷ��� ������ ũ�� ���
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int�ڷ��� ������ ũ�� ���
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float�ڷ��� ������ ũ�� ���
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double�ڷ��� ������ ũ�� ���

    return 0;
}
