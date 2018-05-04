#include <stdio.h>
#define MAX 500
int main()
{
	int x,y, r1, r2, n, c=2, i=5, n2;
	int a[MAX][MAX], r[MAX][MAX];
	scanf("%d", &n);
	n2= n;
	for(r1=0, x=0;r1<n2 && x<n;r1++, x++)
	{
		for(r2=0, y=0; r2<c, y<i-3;r2++, y++)
		{
			scanf("%d", &r[r1][r2]);
			a[x][y] = r[r1][r2];
		}
	}
	for(x=0, r1=0;x<n && r1<n2;x++, r1++)
	{
		for(y=3, r2=0;y<i && r2<c;y++, r2++)
		{
			a[x][y] = r[r1][r2];
		}
	}
	for(x=0;x<n;x++)
	{
		a[x][2] = 1;
	}
	for(x=0;x<n;x++)
	{
		for(y=0;y<i;y++)
		{
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}
	return 0;
}