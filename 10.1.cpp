#include<stdio.h>
int main(){
	int n,a,y=0;
	int arr[n];
	printf(" nhap so pt : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu : ");
		scanf("%d",&arr[i]);
	}
	printf("nhap pt can tim ");
	scanf("%d",&a);
	for(int i=0;i<n;i++){
		if(a==arr[i]){
			printf("so co ton tai trong mang tai vi tri so %d\n",i+1);
			y=1;
		}
		}
		if(y==0){
			printf("phan tu khong ton tai");
		}
		return 0;
		}
