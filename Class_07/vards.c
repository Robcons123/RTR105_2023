#include <stdio.h>
int main()
{
 char str [80];
 int i,b;

 printf("Enter your name: ");
 scanf("%79s",str);
 printf("Enter your age: ");
 scanf("%d",&i);
 printf("Mr. %s , %d years old.\n",str,i);

 b=2023-i;
 printf("Mr. %s , born in %d.\n",str,b);
 return 0;
}
