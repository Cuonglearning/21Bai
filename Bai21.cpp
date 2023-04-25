#include<stdio.h>
#include<conio.h>
int giaithuale(int n){
	if(n==1){
		return 1;
	}
	return giaithuale(n-2)*n;
}
int main(){
	int n,S;
	do{
	printf("Nhap mot so le n=\n");scanf("%d",&n);
	if(n%2==0){
		printf("nhap lai so le! \n");
	}
}while(n%2==0);
	S=giaithuale(n);
	printf("S=%d",S);
	getch();
}
