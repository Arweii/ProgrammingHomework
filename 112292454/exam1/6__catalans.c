#include<stdio.h>    
    int* c=new int[33];
    int tree(int n){
        int th=0;
        if(c[n]!=0) return c[n];
        else{
            for(int i=1;i<=n;i++) th+=tree(n-i)*tree(i-1);
        }
        c[n]=th;
        return th;
    }
    int main() {
    	int n;
    	scanf("%d",&n);
    	c[0]=1;c[1]=1;
       return tree(n);
    }
