#include<stdio.h>
#include<math.h>
int is_prime_number(int);
int is_square_number(int);
int is_cube_number(int);
int factorial(int);
int is_palindrome(int);
int is_neon_number(int);
int fibonacci(int);
int is_armstrong_number(int);
int is_disarium_number(int);
int is_harshad_number(int);
int main()
{
 
int num;
int choice;


  printf("😊️ HELLO ALL.....");
  printf("Enter a number\n");
  scanf("%d",&num);

  printf("\n1.prime or not");
  printf("\n2.perfect square or not");
  printf("\n3.perfect cube or not");
  printf("\n4.Factorial");
  printf("\n5.palindrome or not");
  printf("\n6.neon number or not");
  printf("\n7.Fibonacci series");
  printf("\n8.Armstrong number or not");
  printf("\n9.Disarium number or not");
  printf("\n10.Harshad number or not\n");

  printf("....There are 1-10 choices from which you can select your choices....\n");

  printf("Enter your choice🙂️\n");
  scanf("%d",&choice);
  printf("\n");

  switch(choice)
  {

   case 1: is_prime_number(num);
           break;
   case 2: is_square_number(num);
           break;
   case 3: is_cube_number(num);
           break;
   case 4: factorial(num);
           break;
   case 5: is_palindrome(num);
           break;
   case 6: is_neon_number(num);
           break;
   case 7: fibonacci(num);
           break;
   case 8: is_armstrong_number(num);
           break;
   case 9: is_disarium_number(num);
           break;
   case 10: is_harshad_number(num);
           break;
   default: printf("invalid choice☹️\n");
           break;
  }

return 0;
}


int is_prime_number(int num)
{
    int i;
     for(i=2;i<=num/2;i++)
     {
      if(num%i==0){
      printf("%d is not a prime number😶️\n",num);
      return 0;
     }}
      printf("%d is prime😊️\n",num);
      return 0;
}
int is_square_number(int num)
{
   int m;
   float p;
   p=sqrt(num);
   m=p;
   if(p==m)
   printf("%d is a square number😊️\n",num);
   else
   printf("%d is not a square number😶️\n",num);
   return 0;
}
int is_cube_number(int num)
{
    int i;
    i=round(pow(num,1.0/3.0));
    if(i*i*i==num)
    printf("%d is a perfect cube number😊️\n",num);
    else
    printf("%d is not a perfect cube number😶️\n",num);
    return 0;
}
int factorial(int num)
{
    int i;
    long long int fact=1;
    for(i=1;i<=num;i++)
           {
             fact=fact*i;
           }
           printf("Factorial of %d is %d 😊️\n",num,fact);
    return 0;
}
int is_palindrome(int num)
{
     int n,rem,rev=0;
     n=num;
     while(num!=0)
     {
       rem=num%10;
       num=num/10;
       rev=rev*10+rem;
     }
       if(rev==n)
       printf("%d is palindrome😊️\n",n);
       else
       printf("%d is not palindrome😶️\n",n);
      return 0;
}
int is_neon_number(int num)
{
      int sq,sum=0,i;
      sq=num*num;
           
      for(i=sq;i>0;i=i/10)
      sum=sum+i%10;

         if(sum==num)
         printf("%d is a neon number😊️\n",num);
         else
         printf("%d is not a neon number😶️\n",num);
       return 0;
}
int fibonacci(int num)
{
        int n1=0,n2=1,n3,i;
        printf("\nFibonacci series:%d %d ",n1,n2);
           for(i=2;i<num;++i)
           {
            n3=n1+n2;
            printf("\t%d",n3);
            n1=n2;
            n2=n3;
           }
         return 0;
}
int is_armstrong_number(int num)
{

        int a,b=0,t;
        t=num;
        b=0;    
           while(num>0)
           {
             a=num%10;
             b=b+a*a*a;
             num=num/10;
           }
           if(b==t)
           {
             printf("Its an Armstrong number😊️\n");
           }
           else
           {
             printf("Its not an Armstrong number😶️\n");
           }
         return 0;
}
int is_disarium_number(int num)
{
      int rem,num1,c=1,sum=0,i,p=1;
           num1=num;
           while(num1!=0)
           {
            rem=num1%10;
            sum=sum*10+rem;
            num1/=10;
           }
           num1=sum;
           sum=0;
           while(num1!=0)
           {
             rem=num1%10;
             for(i=1;i<=c;i++)
             {
               p=p*rem;
             }
             sum=sum+p;
             num1=num1/10;
             c++;
             p=1;
           }
           if(sum==num){
           printf("Its a Disarium number😊️\n");}
           else{
           printf("Its not a Disarium number😶️\n");}
         return 0;
}
int is_harshad_number(int num)
{
        int n,rem,sum=0;
           n=num;
           while(n!=0)
        {
          rem=n%10;
          n=n/10;
          sum=sum+rem;
        }
        if(num%sum==0)
        printf("%d is Harshad number😊️\n",num);
        else
        printf("%d is not Harshad number😶️\n",num);
       return 0;
}

           
  
  
  
  

 
