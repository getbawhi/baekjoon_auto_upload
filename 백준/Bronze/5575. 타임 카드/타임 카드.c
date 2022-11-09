#include <stdio.h>

int main() {



	int start[3];
	int end[3];
	int cnt = 0;

	int h, m, s;

	while (1)
	{
		scanf("%d %d %d", &start[0], &start[1], &start[2]);
		scanf("%d %d %d", &end[0], &end[1], &end[2]);

		

		

		h = end[0] - start[0];
		m = end[1] - start[1];
		s = end[2] - start[2];

		if (s < 0)
		{
			s = s + 60;
			m--;
		}

		if (m < 0)
		{
			m = m + 60;
			h--;
		}


		printf("%d %d %d\n", h, m, s);
		cnt++;
		if (cnt == 3) break;
	}



}