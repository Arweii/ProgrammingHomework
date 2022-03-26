#include <stdio.h>
#include <stdlib.h>
struct link
{
	int data;
	struct link* nextPTR;
};
struct note //�����
{
	struct link* prePTR;
	struct link* midPTR;
	struct link* aftPTR;
};
void delLink(struct link* headPTR)//�ͷ������ڴ�ռ�
{
	struct link* movePTR = headPTR;
	while (movePTR)
	{
		headPTR = movePTR->nextPTR;
		free(movePTR);
		movePTR = movePTR->nextPTR;
	}
}
struct link* createHead(struct link* headPTR)//����ͷ�ڵ�
{
	headPTR = (struct link*)malloc(sizeof(struct link));
	if (headPTR != NULL)
	{
		headPTR->nextPTR = NULL;
	}
	return headPTR;
}
struct link* addNode(int data)//��ӽڵ㲢д������
{
	struct link* newNode = (struct link*)malloc(sizeof(struct link));
	newNode->data = data;
	newNode->nextPTR = NULL;
	return newNode;
}
void printLink(struct link* headPTR)//������ӡ����
{
	struct link* movePTR = headPTR->nextPTR;
	while (movePTR)
	{
		printf("%d", movePTR->data);
		if (movePTR->nextPTR != NULL)
		{
			printf(" ");
		}
		movePTR = movePTR->nextPTR;
	}
}
void endInsertLink(struct link* headPTR, int data)//β��ڵ�
{
	struct link* nowPTR = headPTR, * newPTR = NULL;
	while (nowPTR->nextPTR != NULL)//����ǰָ���ƶ�������β��
	{
		nowPTR = nowPTR->nextPTR;
	}
	newPTR = (struct link*)malloc(sizeof(struct link));
	newPTR->data = data;
	newPTR->nextPTR = NULL;
	nowPTR->nextPTR = newPTR;
}
void exchangeNode(struct note finder)//����note�������ڵĽڵ�
{
	finder.prePTR->nextPTR = finder.aftPTR;
	finder.midPTR->nextPTR = finder.aftPTR->nextPTR;
	finder.aftPTR->nextPTR = finder.midPTR;
}
void moveNode(struct note finder)//����ƶ�һλnote
{
	finder.prePTR = finder.prePTR->nextPTR;
	finder.midPTR = finder.midPTR->nextPTR;
	if (finder.aftPTR->nextPTR != NULL) {
		finder.aftPTR = finder.aftPTR->nextPTR;
	}
}
void sortLink(struct link* headPTR, int total)//��������headPTRΪ��ͷ��totalΪ��Ҫ���������
{
	int counter = 0, mid = 0;
	struct note finder = { headPTR,headPTR->nextPTR,headPTR->nextPTR->nextPTR };
	for (int mid0 = 1; mid0 < total; mid0++)//����ð������
	{
		counter = 0;
		for (int mid1 = 1; mid1 < total; mid1++)
		{
			if (finder.midPTR->data > finder.aftPTR->data)
			{
				exchangeNode(finder);
				counter++;
			}
			moveNode(finder);
			printf("%d\n", finder.midPTR->data);
		}
		/*if (counter == 0)
		{
			break;
		}*/
		finder.prePTR = headPTR;
		finder.midPTR = headPTR->nextPTR;
		finder.aftPTR = headPTR->nextPTR->nextPTR;
	}
}
void BubbleSort(struct link*headPTR)//ð�������㷨�޸İ棨ԭ�㷨�������⣩
{
	struct link* pPTR, * qPTR, * endPTR;
	endPTR = NULL;
	while ((headPTR->nextPTR->nextPTR) != endPTR)
	{
		pPTR = headPTR;
		qPTR = headPTR->nextPTR;
		while (qPTR->nextPTR != endPTR)
		{
			if ((qPTR->data) > (qPTR->nextPTR->data))
			{
				pPTR->nextPTR = qPTR->nextPTR;
				qPTR->nextPTR = qPTR->nextPTR->nextPTR;
				pPTR->nextPTR->nextPTR = qPTR;
				qPTR = pPTR->nextPTR;
			}
			qPTR = qPTR->nextPTR;
			pPTR = pPTR->nextPTR;
		}
		endPTR = qPTR;
	}
}
int main()
{
	int data = 0, total = 0;
	struct link* headPTR = NULL, * nowPTR = NULL;
	headPTR = createHead(headPTR);
	scanf_s("%d", &data);
	while (data != -1)
	{
		total++;
		endInsertLink(headPTR, data);
		scanf_s("%d", &data);
	}
	printf("The new list is:");
	BubbleSort(headPTR);
	printLink(headPTR);
	delLink(headPTR);
	return 0;
}

