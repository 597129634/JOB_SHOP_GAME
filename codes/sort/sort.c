#include"define.h"
void sort(int x,int y,GENE *island,GENE *temporary)//��x��y�Ĳ�������������һ����ʱ����
{
	if (y - x > 1)
	{
		int m = x + (y - x) / 2;
		int p = x, q = m, i = x;
		sort(x, m, island, temporary);
		sort(m, y, island, temporary);
		while (p < m || q < y)
		{
			if (q >= y || (p < m && island[p].makespan <= island[q].makespan))
			{
				temporary[i++] = island[p++];
			}
			else
			{
				temporary[i++] = island[q++];
			}
		}
		for (i = x; i < y; i++)
		{
			island[i] = temporary[i];
		}
	}
}