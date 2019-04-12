#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float height,weight;
	float A,num;
	printf("請輸入身高體重\n");
	printf("身高:");
	scanf("%f",&height);
	printf("體重:");
	scanf("%f",&weight);
	A=(height/100);
	num=(weight/A/A);
	printf("你的BMI值為:%f",num);
	system("pause");
}
