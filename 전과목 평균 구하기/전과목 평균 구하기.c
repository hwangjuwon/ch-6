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
//	printf("������ %d�Դϴ�.����� %.1f�Դϴ�.", sum, avr);
//										  
//										  
//	return 0;							  
//}			



//������ ���
#include <stdio.h>
#define  MAX_SUBJECT 5

int main(void) {
	// �迭 �ʱ�ȭ (�л� ���� �迭)
	int stdscore[MAX_SUBJECT] = { 76,84,80,92,96 };

	// ���� �ʱ�ȭ (�ջ�, ���)
	int sumscore = 0;
	double avgscore = 0.0;

	// for������ �ջ��ϰ�, ��� ����ϱ�
	for (int i = 0; i < MAX_SUBJECT; i++){
		sumscore += stdscore[i];

	}
	avgscore = (double)sumscore / MAX_SUBJECT;

	printf("������ %d��,����� %.1f�� �Դϴ�.\n", sumscore, avgscore);


	// ���

	return 0;
}



