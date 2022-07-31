#include<stdio.h>
int fibo(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}

int main(){
	for(int i=1;i<16;i++){
		printf("%d번째 피보나치 수 : %d\n",i,fibo(i));
	}
}