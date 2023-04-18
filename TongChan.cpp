//error
#include<stdio.h>
#include<conio.h>

void Nhap(int a[],int n){
	do{
		printf("Nhap so phan tu trong mang:");
		scanf("%d",&n);
		if(n<=0||n>100){
			printf("So phan tu khong hop le, hay nhap lai!!");
		}
	}while(n<=0||n>100);
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void Xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

int Tong(int a[],int n){
	if(n==0)
		return 0;
	int x=Tong(a,n-1);
	if(a[n-1]%2==0){
		x=x+a[n-1];
		return x;
	}
}

int main(){
	int n;
	int a[100];
	Nhap(a,n);
	int t=Tong(a,n);
	printf("Tong cac so chan:%d",t);
	getch();
	return 0;
}
