#include"define.h"
void move()//����
{
	GENE best[2];//����������Ÿ���
	int i, j, k;
	best[0] = island[1][0];
	best[1] = island[0][0];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < MAXnum && island[i][j].makespan < best[i].makespan; j++);
		if (j != MAXnum)
		{
			for (k = MAXnum - 1; k > j; k--)
			{
				island[i][k] = island[i][k - 1];
			}
			island[i][j] = best[i];
		}
	}

}
