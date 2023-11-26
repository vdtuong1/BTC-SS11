#include <stdio.h>

int main(){
  int n,i;
  printf("Nhap so phan tu cua mang:");
  scanf("%d", &n);
  int numbers [n];
  printf("Nhap gia tri cac phan tu mang:\n"); 
  for (i=0;i<n;i++) {
    printf("numbers[%d]=",i);
    scanf("%d", &numbers[i]);
  }
  for (i=1;i<n;i++){
    int key=numbers[i];
    int j = i-1;
    while(j>=0 && key<numbers[j]){ 
      numbers [j+1] = numbers[j]; 
      j-=1;
    }
    numbers [j+1] = key;
  }
  printf("Mang sau khi da sap xep tang dan:\n"); 
  for (i=0;i<n;i++) {
    printf("%d\t", numbers[i]);
  }
}
