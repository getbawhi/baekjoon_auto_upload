#include <stdio.h>
#include <stdlib.h>

int parent[200];
int mrank[200];



void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void init() {

	for (int i = 0; i < 200; i++)
	{
		parent[i] = i;
		mrank[i] = 1;
	}
}

int Find(int a) {

	if (a == parent[a]) return a;

	return Find(parent[a]);
}

void Union(int a, int b)
{
	int aa = Find(a);
	int bb = Find(b);

	if (aa == bb) return;

	if (mrank[aa] > mrank[bb]) swap(&aa, &bb);

	parent[aa] = bb;

	if (mrank[aa] == mrank[bb])
		mrank[bb]++;

}

int main() {

	int n, m;
	int tmp;
	int flag = 0;
	

	scanf("%d%d", &n, &m);

	int* cmp = (int*)malloc(sizeof(int) * m);

	init();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &tmp);
			if (tmp == 1) Union(i, j);

		}
	}
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &cmp[i]);
		cmp[i] = cmp[i] - 1;
	}

	for (int i = 0; i < m-1; i++)
	{
		if (Find(cmp[i]) == Find(cmp[i + 1]) && i == m-2)
		{
			flag = 1;
			break;
		}

		if (Find(cmp[i]) == Find(cmp[i + 1]))
			continue;
		else
		{
			flag = 0;
			break;
		}

	}

	if (flag == 1) printf("YES");
	else printf("NO");

	return 0;

}