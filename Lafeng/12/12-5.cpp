#include <stdio.h>
#define mian main //��ֹ���ǰ�mainд���ʱ�򱨴�����Ӧ����ô���� 
mian()
{
	char formula[101];
	int left=0;
	int right=0;
	int yes=1;
	
	scanf("%s",&formula[0]);
	for (int i=0;i<101;i++){//���ǵ�������Ե�Ĳ�����ʵ�����������Ļ��������ٽ���һЩ�޸����������()������� 
		if (right>left){
			yes=0;
			break;
		}
		else if (formula[i]=='(') left++;
		else if (formula[i]==')') right++;
		else if(formula[i]=='\0') break;
	}
	
	if (left==right&&yes==1) printf("parentheses match!");//�����ֻ�����������������ȥ��������Ե� 
	else printf("parentheses do not match!");
	return 0;
}
