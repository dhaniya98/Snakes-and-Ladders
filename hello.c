#include<stdio.h>
int main()
{
int x=50,y=30;
printf("Before swapping x=%d and y=%d\n",x,y);
x=x+y-(y=x);
printf("After swapping x=%d and y=%d\n",x,y);
return 0;
}
