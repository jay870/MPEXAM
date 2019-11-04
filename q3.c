#include<stdio.h>
#include<conio.h>
void main()
{
 int a, b, gcd;
 clrscr();
 printf("\nEnter the first number: ");
 scanf("%d", &a);
 printf("\nEnter the second number: ");
 scanf("%d", &b);

 asm mov ax, a
 asm mov bx, b
 back:
 asm cmp ax, bx
 asm je label0
 asm jc label1
 asm sub ax, bx
 label1: asm sub bx, ax
 asm jmp back

 label0:
 asm mov gcd, ax

 printf("\nThe GCD is: %d", gcd);
 getch();
}