//�������һ��n*m�ľ��󣬾��������Ϊn,����Ϊm�����������ʵ�־����ת�ã������л���
//��һ��Ϊ��������n��m��������������������
#include <stdio.h>
main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int matrix[n][m];
	for (int i=0;i<n;i++){
		for (int p=0;p<m;p++){
			scanf("%d",&matrix[i][p]);
		}
	}
	for (int p=0;p<m;p++){
		for (int i=0;i<n-1;i++){
			printf("%d ",matrix[i][p]);
		}
		printf("%d\n",matrix[n-1][p]);
	}
	return 0;
}
