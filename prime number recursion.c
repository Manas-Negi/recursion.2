#include<stdio.h>
  int prime(int, int);
          int main()
    {
          int a,b=1;
          
          printf("Give a number : \n");
          scanf("%d", &a);
          b = prime(a, a/2);
          if(b==1)
          printf(" %d is Prime number",a);
          else
          printf(" %d is not a Prime number",a);
          getch();
          return (0);
          }   int prime(int c, int d){
          if(d == 1)
          return(1);
          else
          {
          if(c % d == 0)
          return(0);
          prime(c, d-1);
      }
		  }

        

