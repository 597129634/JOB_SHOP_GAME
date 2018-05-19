#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>


#define MAXlen 1000//Ⱦɫ�峤��
#define MAXnum 1000//��Ⱥ����
#define MOVEage 30//������
#define MAXage 1000


typedef struct //������������
{
	int line;//������
	int time;//�ӹ�ʱ��
}DATA;

typedef struct //����Ⱦɫ��
{
	int gene[MAXlen];//����
	int makespan;//��깤ʱ��
	double fitness;//��Ӧ��
}GENE;

typedef struct//������ĵ��������ϵĵ�������
{
	int component;//������
	int start;//��ʼʱ��
	int end;//���ʱ��
}PROCESS;


/************************����ȫ�ֱ���***********************/
extern DATA **data;//��������
extern GENE island[2][MAXnum];//����
extern PROCESS **Process;//ʹ�ö�ά�����Ž���������ͼ
extern int Element;//��ӹ��Ĺ�������
extern int Machine;//��������
extern int Job;//�ܲ�����