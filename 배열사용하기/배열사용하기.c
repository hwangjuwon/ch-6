#include <stdio.h>

int main(void) {
	//int subway_1 = 30;
	//int subway_2 = 40;
	//int subway_3 = 50;
	//
	//printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	//printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	//printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", subway_3);

	int subway[10] = { 30,40,50,30,40,50,30,40,50,10 };

	for (int i = 0; i < 10; i++) {
		printf("����ö %d ȣ���� %d���� Ÿ���ֽ��ϴ�.\n", i + 1, subway[i]);
	}




	return 0;
}