#include<stdio.h>
#include<stdlib.h>

int main(){
	int size;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&size);
	int numbers[size];
	printf("nhap cac gia tri phan tu vao mang:\n");
	int i,j;
	for(i=0;i<size;i++){
		printf("numbers[%d]= ",i);
		scanf("%d",&numbers[i]);
	}
	do{
		printf("***************MENU***************\n");
		printf("1. In gia tri cac phan tu cua mang.\n");
		printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra.\n");
		printf("3. Su dung Selection Sort sap xep mang tang dan va in ra.\n");
		printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra.\n");
		printf("5. Thoat\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Gia tri cac phan tu trong mang:\n");
				for(i=0;i<size;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("Mang sau khi Su dung Insertion Sort sap xep giam dan\n");
				for(i=1;i<size;i++){
					int	key=numbers[i];
					int j=i-1;
					while(j>=0 && key>numbers[j]){
						numbers[j+1]=numbers[j];
						j-=1;
					}
					numbers[j+1]=key;
				}
				for(i=0;i<size;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Mang sau khi Su dung Bubble Sort sap xep tang dan\n");
				for(i=0;i<size;i++){
					for(j=i+1;j<size;j++){
						if(numbers[i]>numbers[j]){
							int temp = numbers[i];
							numbers[i] = numbers[j];
							numbers[j] = temp;
						}
					}
				}
				for(i=0;i<size;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 4:
				printf("Mang sau khi Su dung Selection Sort sap xep giam dan\n");
				for(i=0;i<size;i++){
					for(j=0;j<size-i-1;j++){
						if(numbers[j]<numbers[j+1]){
							int temp = numbers[j];
							numbers[j] = numbers[j+1];
							numbers[j+1] = temp;
						}
					}
				}
				for(i=0;i<size;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 5:
				exit(0);
			default:
    		 printf("Vui long chon tu 1-5\n");
		}
	}
	while(1==1);
}
