#include <stdio.h>

int main() {

	int h, m;
	int ph = 0, pm = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &pm);

	//분단위를 시간으로 바꾸는 작업
	if (pm <= 60)
	{
		pm = pm;
	}

	else if (pm > 60)
	{
		ph = pm / 60;
		pm = pm % 60;

	}

	//시간을 더하는 작업

	if (m + pm <= 60)
	{
		h = h + ph;
		m = m + pm;

	}

	else if (m + pm > 60)
	{
		m = (m+pm)-60;
		h = h + 1 + ph;
	}

	// 출력 전 변환

	if (m == 60)
	{
		h = h + 1;
		m = 0;
	}


	if (h > 23)
	{
		h = h - 24;

	}

	

	printf("%d %d", h, m);


	return 0;
}