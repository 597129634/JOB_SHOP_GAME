#include"define.h"
DATA **data;//��������
GENE island[2][MAXnum];//2������
PROCESS **Process;//ʹ�ö�ά�����Ž���������ͼ
int Element;//��ӹ��Ĺ�������
int Machine;//��������
int Job;//�ܲ�������Ҳ���ǻ����ʵ�ʳ���
int main()
{
	int i;
	data = (DATA**)malloc(Element * sizeof(DATA*));
	for (i = 0; i < Element; i++)
	{
		data[i] = (DATA*)malloc(Machine * sizeof(DATA));
	}
	system("pause");
	return 0;
}