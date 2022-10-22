#include <stdio.h>


int main()
{
	int h, m, s;
	int ph, pm, ps;

	int time;

	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &time);

	//입력받은 초를 계산 
	ph = time / 3600; //3600seconds
	pm = (time - (3600 * ph)) / 60;
	ps = (time - (3600 * ph)) - (pm * 60);

	h = h + ph;
	m = m + pm;
	s = s + ps;

	if (s >= 60)
	{
		m = m + (s / 60);
		s = s % 60;
	}
	
	if (m >= 60)
	{
		h = h + (m / 60);
		m = m % 60;

	}

	if (h > 23 && h<=47)
	{
		h = h - 24;

	}

	if (h > 47)
	{
		h = h % 24;
	}

	printf("%d %d %d", h, m, s);
	
	return 0;
}