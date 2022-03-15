#include<stdio.h>
#include<math.h>

int input_degree(){
  int n;
  printf("enter a number : ");
  scanf("%d",&n);
  return n;
}
float input_x(){
  float x;
  printf("Enter the value of x : ");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n, float a[n]){
  for(int i=0;i<n+1;i++){
    scanf("%f",a[i]);
  }
}
float evaluate_polynomial(int n, float a[n], float x){
  float sum = 1;
  for(int i=0;i<n+1;i++){
    sum += 1*(math.power(x,i);
  }
  return sum;
}
void out_put(int n, float a[n], float x, float result){
  
}