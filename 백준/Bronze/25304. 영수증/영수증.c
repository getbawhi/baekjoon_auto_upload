#include <stdio.h>

int main()
{
	int result = 0;
	int N;
	int sum=0;
	int buy[101][2];

	//처음 총액을 받음
	scanf("%d", &result);

	//개수
	scanf("%d", &N);

	//배열에 입력받음 가격_갯수
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &buy[i][0], &buy[i][1]);

	}

	for (int i = 0; i < N; i++)
	{
		sum = sum + buy[i][0] * buy[i][1];

	}
	
	if (result == sum)
	{
		printf("Yes");
	}

	else
		printf("No");

}