#include <stdio.h>
#include <string.h>

int main(void) {
//	printf("���� : ASCII�ڵ�\n");
//	for (char c = "0"; c<= 'z'; c++)
//	{
//		printf("%c:%d\n", c, c);
//	}
	char str[256] = "coding";
	printf("%s\n", str);

	strcpy_s(str, sizeof(str), "programming");

	printf("%s\n", str);
	return 0;
}