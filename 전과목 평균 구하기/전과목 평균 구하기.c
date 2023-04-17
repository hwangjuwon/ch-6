//#include <stdio.h>
//
//int main(void) {
//
//	int score[5] = { 76, 84, 80, 92, 96 };
//	int sum = 0;						  
//	float avr = 0.0f;					  
//	for (int i = 0; i < 5; i++) {		  
//		sum += score[i];				  
//										  
//	}									  
//	avr = sum / 5.0f;					  
//	printf("총점은 %d입니다.평균은 %.1f입니다.", sum, avr);
//										  
//										  
//	return 0;							  
//}			



//교수님 방법
#include <stdio.h>
#define  MAX_SUBJECT 5

int main(void) {
	// 배열 초기화 (학생 점수 배열)
	int stdscore[MAX_SUBJECT] = { 76,84,80,92,96 };

	// 변수 초기화 (합산, 평균)
	int sumscore = 0;
	double avgscore = 0.0;

	// for문으로 합산하고, 평균 계산하기
	for (int i = 0; i < MAX_SUBJECT; i++){
		sumscore += stdscore[i];

	}
	avgscore = (double)sumscore / MAX_SUBJECT;

	printf("총점은 %d점,평균은 %.1f점 입니다.\n", sumscore, avgscore);


	// 출력

	return 0;
}



