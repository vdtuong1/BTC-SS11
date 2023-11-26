#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,m;
	printf("nhap so dong cua mang 2 chieu: ");
	scanf("%d",&n);
	printf("nhap so cot cua mang 2 chieu: ");
	scanf("%d",&m);
	int numbers[n][m];
	printf("nhap cac gia tri phan tu vao mang 2 chieu:\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("numbers[%d][%d]= ",i,j);
			scanf("%d",&numbers[i][j]);
		}
	}
	do{
		printf("***************MENU***************\n");
		printf("1. In gia tri mang theo ma tran.\n");
		printf("2. Sap xep mang co gia tri cac phan tu theo dong tang dan.\n");
		printf("3. Sap xap mang có gia tri cac phan tu theo cot giam dan.\n");
		printf("4. Thoat.\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Gia tri mang theo ma tran:\n");
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
				printf("Mang co gia tri cac phan tu theo dong tang dan:\n");
				for(i=0;i<n;i++){
					for(j=1;j<m;j++){
						int key = numbers[i][j];
						int k=j-1;
						while(k>=0 && key<numbers[i][k]){
							numbers[i][k+1] = numbers[i][k];
							k-=1;
						}
						numbers[i][k+1] = key;
					}
				}
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("Mang co gia tri cac phan tu theo cot giam dan:\n");
				for(i=1;i<n;i++){
					for(j=0;j<m;j++){
						int key = numbers[i][j];
						int k=i-1;
						while(k>=0 && key>numbers[k][j]){
							numbers[k+1][j] = numbers[k][j];
							k-=1;
						}
						numbers[k+1][j] = key;
					}
				}
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 4:
				exit(0);
			default:
    		 printf("Vui long chon tu 1-4\n");
		}
	}
	while(1==1);
}
