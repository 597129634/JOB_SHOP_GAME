#include"define.h"
DATA **data;//��������(Element*Machine)
GENE island[2][MAXnum];//2������
PROCESS **Process;//ʹ�ö�ά�����Ž���������ͼ(Element*Machine)
int Element;//��ӹ��Ĺ�������
int Machine;//��������
int Job;//�ܲ�������Ҳ���ǻ����ʵ�ʳ���
int Sum_fitness[2] = { 0 };//���������и�����Ӧ�ȵĺ�
int age;//��ǰ��������
int main()
{
	input();//����

	code();//���ɳ�ʼ��Ⱥ

	for (int i = 0; i < 2; i++)//���������Ӧ��and����
	{
		for (int j = 0; j < MAXnum; i++)
		{
			decode(&island[i][j]);//���������Ӧ��
			Sum_fitness[i] += island[i][j].fitness;
		}
		GENE *temporary=NULL;//��ʱ�ռ�
		temporary = (GENE*)malloc(MAXnum * sizeof(GENE));
		sort(0, MAXnum, island[i], temporary);//����
		free(temporary);
	}
	srand((unsigned int)time(NULL));
	for (age = 0; age < MAXage; age++)//����
	{
		//�����жϺ����ж��Ƿ�������ѭ��������

	}

	if (island[0][0].makespan < island[1][0].makespan)//ѡ�����ǰ���Ž�
	{
		decode(&island[0][0]);
	}
	else
	{
		decode(&island[1][0]);
	}
	/*��ʱProcess�д�ŵ������Ž�Ľ���ͼ*/
	output();


	system("pause");
	return 0;
}