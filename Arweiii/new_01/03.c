#include <stdio.h>
#include <stdlib.h>
//#define scanf_s scanf
struct link
{
	int data;
	struct link* nextPTR;
};
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
void delLink(struct link* headPTR)//�ͷ������ڴ�ռ�
{
	struct link* movePTR = headPTR;
	while (movePTR != NULL)
	{
		headPTR = movePTR->nextPTR;
		free(movePTR);
		movePTR = headPTR;
	}
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
int findMatch(struct link* head1, struct link* head2, int min)//��������ƥ����ң�head1Ϊ�϶̵����У�minΪhead1�ĳ���
{
	int judge = 0;
	struct link* movePTR0 = head2->nextPTR;//movePTR0���ڱ�ʶ���ҵ����
	struct link* movePTR1 = head2->nextPTR;//movePTR1��movePTR2���ڱ�ʶ���Ҷ���
	struct link* movePTR2 = head1->nextPTR;
	if (min != 1)
	{
		while (movePTR0->nextPTR != NULL)
		{
			judge = 0;
			while (movePTR2->nextPTR != NULL)
			{
				if (movePTR1->data != movePTR2->data)
				{
					break;
				}
				else
				{
					judge++;
				}
				if (movePTR1->nextPTR != NULL)
				{
					movePTR1 = movePTR1->nextPTR;
					movePTR2 = movePTR2->nextPTR;
				}
				else
				{
					if (movePTR2->nextPTR != NULL)
					{
						judge++;
					}
					break;
				}
			}
			if (movePTR1->data == movePTR2->data)
			{
				judge++;
			}
			if (judge == min)
				break;
			movePTR0 = movePTR0->nextPTR;//�ƶ��������
			movePTR1 = movePTR0;
			movePTR2 = head1->nextPTR;
		}
		if (judge == min)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (movePTR1->data == movePTR2->data)
		{
			return 1;
		}
		else
			return 0;
	}
}	
int main()
{
	int data = 0, total1 = 0, total2 = 0, judge = 0;
	struct link* head1 = NULL, * head2 = NULL;
	head1 = createHead(head1);
	head2 = createHead(head2);
	scanf_s("%d", &data);
	while (data != -1)
	{
		total1++;
		endInsertLink(head1, data);
		scanf_s("%d", &data);
	}
	scanf_s("%d", &data);
	while (data != -1)
	{
		total2++;
		endInsertLink(head2, data);
		scanf_s("%d", &data);
	}
	if (total1 >= total2)
	{
		judge = findMatch(head2, head1, total2);
	}
	else
	{
		judge = 0;
	}
	if (judge)//���judgeֵ��Ϊ0�����ʾƥ��
	{
		printf("ListB is the sub sequence of ListA.");
	}
	else
	{
		printf("ListB is not the sub sequence of ListA.");
	}
	delLink(head1);
	delLink(head2);
	return 0;
}

