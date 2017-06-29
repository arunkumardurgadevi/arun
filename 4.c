#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("enter a character:");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
{
printf("given character is vowel");
}
else
{
printf("given character is consonant");
}
getch();
}
