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
	int findNumber;
	int start,end,mid;
	do{
		printf("***************MENU***************\n");
		printf("1. In gia tri cac phan tu cua mang.\n");
		printf("2. Nhap gia tri tim kiem va su dung thuat toan tim kiem tuyen tinh tim tat ca cac phan tu\ntrong mang co gia tri bang gia tri tim kiem.\n");
		printf("3. Nhap gia tri tim kiem va su dung thuat toan tim kiem nhi phan tim phan tu trong mang.\n");
		printf("4. Thoat.\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Gia tri cac phan tu cua mang:\n");
				for(i=0;i<size;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 2:
				findNumber;
				printf("Nhap gia tri can tim kiem: ");
				scanf("%d",&findNumber);
				int count=1;
				for(i=0;i<size;i++){
					if(numbers[i]==findNumber){
						if(count==1){
							printf("Trong mang co cac phan tu bang gia tri tim kiem:\n");
						}
						printf("numbers[%d]= %d\n",i,numbers[i]);
						count++;
					}
				}
				if(count==1){
					printf("Trong mang khong co cac phan tu bang gia tri tim kiem\n");
				}
				break;
			case 3:
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
				findNumber;
				printf("Nhap gia tri can tim kiem: ");
				scanf("%d",&findNumber);
				start = 0;
				end = size;
				while(start<=end){
					mid = (start+end)/2;
					if(numbers[mid]==findNumber){
						break;
					}else if(numbers[mid]<findNumber){
						start = mid+1;
					}else{
						end=mid-1;
					}
				}
				break;
			case 4:
				exit(0);
			default:
			 printf("Vui long chon tu 1-4.\n");
		}
	}
	while(1==1);
}
