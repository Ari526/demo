// Online C compiler to run C program online
#include<stdio.h>

int factorial(int number)
{
    int n=-1,fact=1;
    if(number<0)
    {
        return n;
        
    }
    else if(number==0){
        return 1;
        
    }else{
    for(int i=number;i>=1;i--)
    {
        fact=fact*i;
        
    }
    return fact;
        
    }// TODO:- Your logic here
    
}

// Note: Don't add any other printf statement which will impact test cases. 
//Also don't change main function, focus function implementation only
int main() {
  int num = 0, N = 0;

  scanf("%d",&N);
  for(int i = 0; i< N; i++)
  {
    scanf("%d", &num);
    printf("%d\n",factorial(num));
  }
    
  return 0;
}
