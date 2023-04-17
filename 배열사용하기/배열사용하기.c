#include <stdio.h>

int main(void) {
	//int subway_1 = 30;
	//int subway_2 = 40;
	//int subway_3 = 50;
	//
	//printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
	//printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
	//printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);

	int subway[10] = { 30,40,50,30,40,50,30,40,50,10 };

	for (int i = 0; i < 10; i++) {
		printf("지하철 %d 호차에 %d명이 타고있습니다.\n", i + 1, subway[i]);
	}




	return 0;
}