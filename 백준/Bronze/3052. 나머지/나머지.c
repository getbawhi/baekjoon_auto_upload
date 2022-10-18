#include <stdio.h>


int main() {

	int cnt = 0;
	int table[10];

	//입력받는다
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &table[i]);
	}

	//42로 나눈 값 저장
	for (int i = 0; i < 10; i++)
	{
		table[i] = table[i] % 42;
	}

	//같은 수가 몇개인지 검증
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (table[i] == table[j] && i!=j &&table[j]!=-4)
			{
				cnt++;
				table[j] = -4;
			}
		}


	}


	int result = 10 - cnt;

	if (result == 0)printf("1");
	else printf("%d", result);

	return 0;

}