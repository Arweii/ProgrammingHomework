#include <stdio.h>
main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int matrix[m+2][n+2];//����˵�������еı�����ֱ������һ��={}����ʡȥ����һ��μ�0�Ĳ���������PTA�ı��������� 
	for (int i=1;i<m+1;i++){
		for (int p=1;p<n+1;p++){
			scanf("%d",&matrix[i][p]);
		}
	}
	for (int i=0;i<m+2;i++){
		matrix[i][0]=0;
		matrix[i][n+1]=0;
	}
	for (int i=0;i<n+2;i++){
		matrix[0][i]=0;
		matrix[m+1][i]=0;
	}
	int x,y;
	int ans;
	scanf("%d %d",&x,&y);
	ans=matrix[x-1][y-1]+matrix[x-1][y]+matrix[x-1][y+1]+matrix[x][y-1]+matrix[x][y+1]+matrix[x+1][y-1]+matrix[x+1][y]+matrix[x+1][y+1];
	printf("%d",ans);
	return 0;
 } 
