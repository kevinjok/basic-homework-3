#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float height,weight;
	float A,num;
	printf("�п�J�����魫\n");
	printf("����:");
	scanf("%f",&height);
	printf("�魫:");
	scanf("%f",&weight);
	A=(height/100);
	num=(weight/A/A);
	printf("�A��BMI�Ȭ�:%f",num);
	system("pause");
}
