/*���к���f(n)��nΪ���ڵ���0����������n����0ʱf(n) = 0����n����0ʱ f(n)=f(n-1) +n^3 */
#include <stdio.h>
int fuc (int n)
{
	if(n==0){
		return 0;
	}
	if(n>0){
		return fuc(n-1)+n*n*n;
	}
}
//�üһ�fucktion���� 
