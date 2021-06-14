#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int dotProduct(const int *a, int sizeA, const int *b, int sizeB){
  int sum = 0;
  for(int i=0; i < sizeA; i++){
    sum += a[i] * b[i];
  }
  return sum;
}

int main(){
  int size;

  printf("Enter the size of the array: \n");
  scanf("%d", &size);

  int arrA[size];
  int arrB[size];

  printf("Enter values for vector A:\n");
  for(int i=0; i < size; i++){
    scanf("%d", &arrA[i]);
  }

  printf("Enter values for vector B:\n");
  for(int i=0; i < size; i++){
    scanf("%d", &arrB[i]);
  }

  printf("The dot product of vector A and B is %d", dotProduct(arrA, size, arrB, size));
  return 0;
}
