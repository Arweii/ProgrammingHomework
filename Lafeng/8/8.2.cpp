/*�������У� s = a + ��a + 3�� + ��a + 6�� +��+ ��a + 3 * n��
��д���ݹ���s�ĳ���
����ֻ��һ�У�Ϊ�����ÿո�ָ����������ֱ����n(0<n) �� a(1<a) */ 
int getSum(int n , int a) 
{
	if (n == 0){
		return a;
	}
	if (n>0){
		return getSum(n-1,a)+a+3*n;
	}
} 
