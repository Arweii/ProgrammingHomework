#include <stdio.h>
int judge(int i,int p);
int judges(int i,int p);
int main()
{
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for (int i=0;i<n;i++){//ֻ������õ�һ�е����� 
		if(i==0){
			matrix[0][i]=1;//��һ�е�һ��϶���1 
		}
		else if (i%2){//�������������� 
			matrix[0][i]=matrix[0][i-1]+2*(i-1)+2;//����˵����һ�е�3�����ɵ�0�е�1����2*0+2���� 
		} 
		else {//��������ż���У�����һ���һ���� 
			matrix[0][i]=matrix[0][i-1]+1;//����˵����2��Ϊ4�����ɵ�һ�е�3���� 
		}
	}
	for (int i=1;i<n;i++){//���µõ���һ�����Ǿ������ǿ��Խ����������Ǿ��󣬵����������� 
		for (int p=0;p<n-i;p++){//��������һ��б�Ϸ���һ��ż������һ��б�Ϸ���һ 
			matrix[i][p]=matrix[i-1][p+1]+judge(i,p);
		}
	} 
	for (int i=n-1;i>=0;i--){//�Ҳ���̫����ɣ��������Ǹɴ���дһ���°�����
		if (i==n-1){
			matrix[n-1][i]=n*n;//���һ�����һ��϶���n�� 
		} 
		else if (i%2){
			matrix[n-1][i] = n%2 ? matrix[n-1][i+1]-2*(n-2-i)-2 : matrix[n-1][i+1]-1;
		}
		else {
			matrix[n-1][i] = n%2 ? matrix[n-1][i+1]-1 : matrix[n-1][i+1]-2*(n-2-i)-2;
		}
		
	}
	for (int i=n-2;i>=0;i--){
		for (int p=n-1;p>=n-i;p--){
			matrix[i][p]=matrix[i+1][p-1]+judges(i,p);
		}
	}
	for (int i=0;i<n;i++){
		for (int p=0;p<n-1;p++){
			printf("%d ",matrix[i][p]);
		}
		printf("%d\n",matrix[i][n-1]);
	}
	return 0;
} 
int judge(int i,int p){//��������һ��б�Ϸ���һ��ż������һ��б�Ϸ���һ
	int r=i+p;
	if (r%2){
		return -1;
	}
	else {
		return 1;
	}
}
int judges(int i,int p){
	int r=i+p;
	if (r%2) return 1;
	else return -1;
}
