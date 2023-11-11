//Program to calculate Compound Interest
#include <stdio.h>
#include<math.h>
int main()
{
  int principle;
  float time, rate_of_interest, compound_interest;
  printf("Principle Amount : ");
  scanf("%d", &principle);
  printf("Rate of Interest : ");
  scanf("%f", &rate_of_interest);
  printf("Years            : ");
  scanf("%f", &time);
  
  compound_interest = (principle * pow((1 + rate_of_interest/100) , time));
  printf("Compound Interest  : %.2f", compound_interest);
  
  return 0;
}

 





//Program to calculate sum and average of 5 numbers
#include <stdio.h>
int main()
{
  int a, b, c, d, e, sum;
  float avg;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  sum = a+ b + c + d + e;
  avg = (float)sum/5;
  printf("Sum : %d\n", sum);
  printf("Average : %g", avg);
   return 0; 
}
 









//Program to calculate Area of scalene triangle
#include <stdio.h>
#include<math.h>
int main()
{
  float a, b, c, area, s;
  scanf("%f %f %f", &a, &b, &c);
  s = (a+ b + c ) / 2;
  area = sqrt(s * (s-a) * (s-b) * (s-c));
  printf("Area : %.2f\n", area);
    return 0; 
}
 
//Program to check whether the given number is multiples of 7 or not
#include <stdio.h>
#include<math.h>
int main()
{
  int x;
  scanf("%d", &x);
  
  printf(x%7==0 ? "Multiple of 7": "not Multiple of 7");
  
    return 0; 
}
 

//Bill Calculator
#include <stdio.h>
int main()
{
   char product_name[20];
   int quantity;
   float price, bill_amount, discount=0, net_amount;
   printf("Product Name : ");
   scanf("%s", product_name);
   printf("Quantity : ");
   scanf("%d", &quantity);
   printf("Price : ");
   scanf("%f", &price);
   
   bill_amount = quantity * price;
   
   if (bill_amount >= 5000)
        discount = bill_amount * 15 / 100;  //bill_amount * 0.15
    net_amount = bill_amount - discount;
    printf("Bill Amount : %10.2f\n", bill_amount);
    printf("Discount(-) : %10.2f\n", discount);
    printf("            ============\n");
    printf("              %10.2f\n", net_amount);
    printf("            ============\n");
    return 0;
}
 
//Bill Calculator
#include <stdio.h>

int main()
{
   char product_name[20];
   int quantity;
   float price, bill_amount, discount=0, net_amount;
   printf("Product Name : ");
   scanf("%s", product_name);
   printf("Quantity : ");
   scanf("%d", &quantity);
   printf("Price : ");
   scanf("%f", &price);
   
   bill_amount = quantity * price;
   
   if (bill_amount >= 50000)
        discount = bill_amount * 20 / 100;  //bill_amount * 0.2
   else
         discount = bill_amount * 10 / 100;  //bill_amount * 0.1
    net_amount = bill_amount - discount;
    printf("Bill Amount : %10.2f\n", bill_amount);
    printf("Discount(-) : %10.2f\n", discount);
    printf("            ============\n");
    printf("              %10.2f\n", net_amount);
    printf("            ============\n");
    return 0;
}
 
 

//Program to check whether the number is divisible by 2 & 3 
#include <stdio.h>

int main()
{
  int x;
  scanf("%d", &x);
  if( x%2 == 0){
      if (x%3 ==0)
          printf("%d is divisible by 2 & 3", x);
      else 
          printf("%d is divisible by 2 not 3 ", x);
        }
    
    else if(x%3 == 0)
        printf("%d is divisible by 3 not 2", x);
    else 
        printf("%d is not divisible by 2 & 3", x);
      return 0;
  
}
   
  

//Grading system
#include <stdio.h>
int main()
{
  float cgpa;
  printf("CGPA : ");
  scanf("%f", &cgpa);
  if(cgpa>=9  && cgpa<=10) 
     printf("Grade : \"O\"");
  else if(cgpa>=8 && cgpa<=8.99 )     
      printf("Grade : \"A\"");
    else if(cgpa>=7 && cgpa<=7.99 )     
      printf("Grade : \"B\"");
       else if(cgpa>=6 && cgpa<=6.99 )     
      printf("Grade : \"C\"");
       else if(cgpa>=5 && cgpa<=5.99 )     
      printf("Grade : \"D\"");
       else if(cgpa<5 && cgpa>=0 )     
      printf(" \"No\" Grade");
      else if(cgpa>10 || cgpa<0)
       printf("Invalid CGPA ");
  return 0;
  
}

/*
switch(<expression>){
case<value1>:
		<statements>
		break;
case<value1> ... <valueN>:
	break;
}
*/

#include <stdio.h>
int main()
{
    int day;
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("Boss! It's Monday. Concentrate on \"Work\"");
                break;
        case 2 ... 4: // case 2: case 3: case 4:
                printf("Still it's week day only");
                break;
        case 5:
                printf("It's Friday. Get ready for weekend ");
              break;
        case 6: case 7: 
                printf("Enjoy the holiday!");
                break;
        default: 
                printf("Invalid day!");
                break;
          
   }
  return 0;
}


//Program to reverse a number
#include <stdio.h>
int main()
{
    int n,reverse=0,r;
    scanf("%d", &n);
    while(n!=0){
        r=n%10;
        reverse=(reverse*10+r);
        n=n/10;
    }
    printf("%d",reverse);

    return 0;
}


#include<stdio.h>
int main(){
    int num,rem;
    scanf("%d", &num);
    while(num!=0){
        rem = num % 10;
        printf("%d", rem);
        num = num/10;
    }
}

    return 0;
}


#include<stdio.h>
int main(){
    int num,rem;
    scanf("%d", &num);
    while(num!=0){
        rem = num % 10;
        printf("%d", rem);
        num = num/10;
    }
}

//Program to check whether the given number is palindrome or not
#include <stdio.h>
int main()
{
    int num, reverse=0,r;
    scanf("%d", &num);
    int temp = num;
    while(reverse=reverse*10+ num%10, num/=10);
    // printf("%d",reverse);
    printf("%s", temp==reverse?"Yes":"No");

    return 0;
}

//Program to check whether the given number is positive or negavtive or zero
#include <stdio.h>
int main()
{
    int num;
    char option;
    
    do{
    scanf("%d", &num);
    if(num>0)
      printf("positive");
    else if(num<0)
      printf("negavtive");
    else
     printf("Zero");
    printf("\n\nWant to check more [Y]es / [N]o ?\n");
    scanf("%c", &option);
    scanf("%c", &option);
    }while(option =='y' || option == 'Y');

    return 0;
}

do{
    <statements>
}
while(<conditions>);

#include <stdio.h>
int main()
{
    for (int i=1; i<=10; i++){
        if(i%4==0)
           break;
        printf("%d\t", i);
    }

    return 0;
}
o/p: 1 2 3


//Program to demonstrate goto statement
#include <stdio.h>
int main()
{
     prathiksha:
     printf("Where is Prathiksha?!");
    goto prathiksha;
    return 0;
} //it acts like unconditional loop
goto -->Unconditional contol structure
Avoid using goto statement


#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("Prathiksha ");
        }
        printf("\n");
    }
}
/*
Prathiksha 
Prathiksha Prathiksha 
Prathiksha Prathiksha Prathiksha 
Prathiksha Prathiksha Prathiksha Prathiksha 
Prathiksha Prathiksha Prathiksha Prathiksha Prathiksha
*/


#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++) //row
   {
       for(j=1;j<=n;j++){  //column
       printf("%d",j);
   }
   printf("\n");
   }

    return 0;
}
/*
output:
5
12345
12345
12345
12345
12345
*/

#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++){
       printf("%d",j);
   }
   printf("\n");
   }

    return 0;
}

/*
output:
9
1
12
123
1234
12345
123456
1234567
12345678
123456789
*/


#include <stdio.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=i;j++){
       printf("%d",j);
   }
   printf("\n");
   }

    return 0;
}
/*
output:
5
12345
1234
123
12
1
*/



#include <stdio.h>
int main()
{
   int n,r,c;
   scanf("%d",&n);
   for(r=n;r>=1;r--)
   { 
       //printing namespace
       for(c=1;c<=n-r;c++)
           printf(" ");
       for(c=r;c>=1;c--)
           printf("%d",c);

     printf("\n");
   }
    return 0;
}
/*
output:
5
54321
 4321
  321
   21
    1
*/


#include <stdio.h>
int main()
{
   int n,r,c;
   scanf("%d",&n);
   for(r=n;r>=1;r--)
   { 
       for(c=1;c<=r;c++)
           printf("%d",c);

       //printing namespace
       for(c=1;c<=(n-r);c++)
           printf("  ");
       for(c=r;c>=1;c--)
           printf("%d",c);

     printf("\n");
   }

    return 0;
}
/*
5
1234554321
1234  4321
123    321
12      21
1        1
*/



#include <stdio.h>
int main()
{
   int n,r,c;
   scanf("%d",&n);
   for(r=n;r>=1;r--)
   { 
       for(c=1;c<=r;c++)
           printf("%c",c+64);

       //printing namespace
       for(c=1;c<=(n-r);c++)
           printf("  ");
       for(c=r;c>=1;c--)
          printf("%c",c+64);

     printf("\n");
   }

    return 0;
}
/*
8
ABCDEFGHHGFEDCBA
ABCDEFG  GFEDCBA
ABCDEF    FEDCBA
ABCDE      EDCBA
ABCD        DCBA
ABC          CBA
AB            BA
A              A
*/

#include <stdio.h>
int main()
{
   int n,r,c;
   scanf("%d",&n);
   for(r=n;r>=1;r--)
   { 
       for(c=1;c<=r;c++)
           printf("*");

       //printing namespace
       for(c=1;c<=(n-r);c++)
           printf("  ");
       for(c=r;c>=1;c--)
           printf("*");

     printf("\n");
   }
for(r=1;r<=n;r++)
   { 
       for(c=1;c<=r;c++)
           printf("*");

       //printing namespace
       for(c=1;c<=n-r;c++)
           printf("  ");
       for(c=r;c>=1;c--)
           printf("*");

     printf("\n");
   }
    return 0;
}

/*
5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/



#include <stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++)
        printf(" ");
        for(c=1;c<=r*2-1;c++)
           printf("*");
        printf("\n");
    }

    return 0;
}

/*
5
    *
   ***
  *****
 *******
*********
*/


#include <stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(c=1;c<=n-r;c++)
        printf(" ");
        for(c=1;c<=r*2-1;c++)
           printf("*");
        printf("\n");
    }

    return 0;
}
/*
5
*********
 *******
  *****
   ***
    *
*/
