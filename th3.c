#include <stdio.h>
int main(){
	int n,i,j;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n"); 
  for (i=0;i<n;i++){
    printf("numbers [%d]=",i);
    scanf("%d", &numbers[i]);
  }
  for (i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if (numbers[j]>numbers[j+1]){
        int temp = numbers[j];
        numbers[j] = numbers [j+1]; 
        numbers[j+1] = temp;
      }
    }
  }
  printf("Mang sau khi da sap xep tang dan:\n"); 
  for (i=0;i<n;i++){
    printf("%d\t", numbers[i]);
  }
}
