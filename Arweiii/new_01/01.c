#include <stdio.h>
#include <stdlib.h>
struct link
{
	int data;
	struct link* nextPTR;
};
struct link* createHead(struct link *headPTR)//����ͷ�ڵ�
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
void printLink(struct link *headPTR)//������ӡ����
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
void endInsertLink(struct link *headPTR, int data)//β��ڵ�
{
	struct link *nowPTR = headPTR, *newPTR = NULL;
	while (nowPTR->nextPTR != NULL)//����ǰָ���ƶ�������β��
	{
		nowPTR = nowPTR->nextPTR;
	}
	newPTR = (struct link*)malloc(sizeof(struct link));
	newPTR->data = data;
	newPTR->nextPTR = NULL;
	nowPTR->nextPTR = newPTR;
}
int findMax(struct link* headPTR)//Ѱ�������е����ֵ
{
	struct link* nowPTR = headPTR->nextPTR;
	int max = nowPTR->data;
	while (nowPTR->nextPTR != NULL)
	{
		if (nowPTR->data > max)
		{
			max = nowPTR->data;
		}
		nowPTR = nowPTR->nextPTR;
	}
	if (nowPTR->data > max)
	{
		max = nowPTR->data;
	}
	return max;
}
int findMin(struct link* headPTR)//Ѱ�������е����ֵ
{
	struct link* nowPTR = headPTR->nextPTR;
	int min = nowPTR->data;
	while (nowPTR->nextPTR != NULL)
	{
		if (nowPTR->data < min)
		{
			min = nowPTR->data;
		}
		nowPTR = nowPTR->nextPTR;
	}
	if (nowPTR->data < min)
	{
		min = nowPTR->data;
	}
	return min;
}
int main()
{
	int data = 0, sum = 0, max = 0, min = 0;
	struct link *headPTR = NULL, *nowPTR = NULL;
	headPTR = createHead(headPTR);
	scanf_s("%d", &data);
	while (data != -1)
	{
		sum += data;
		endInsertLink(headPTR, data);
		scanf_s("%d", &data);
	}
	max = findMax(headPTR);
	min = findMin(headPTR);
	printf("The maximum,minmum and the total are:%d %d %d",max,min,sum);
	//printLink(headPTR);
	return 0;
}

