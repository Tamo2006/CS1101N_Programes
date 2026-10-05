#include<stdio.h>
int prime(int x){
  int i;
  if(x==1){
    return 0;
  }
  for(i=2; i<x; i++){
    if(x%i==0){
      return 0;
    }
  }
  return 1;
}
int main(){
  int n;
  int i;
  printf("enter: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    if(prime(i)){
      printf("%d \n", i);
    }
  }
}
