#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
	{
	int a [10];
	int top;
	}st;
	st s;
	st *E;

int ie(void);
int iff(void);

void main()
{
int x;
void pop(void);
void pus(void);
void dis(void);
UP:
clrscr();
printf("\nStack Implementation\n");
printf("\t1) Push\n");
printf("\t2) Pop\n");
printf("\t3) Display\n");
printf("\t4) Is Empty\n");
printf("\t5) Is Full\n");
printf("\t6) Exit\n");
printf("\t\tEnter your choice: ");
scanf("%d",&x);

switch(x)
{
	case 1:
	{
	pus();
	break;
	}
	case 2:
	{
	pop();
	break;
	}
	case 3:
	{
	dis();
	break;
	}
	case 4:
	{
	if(ie())
	printf("\n\tEmpty");
	else
	printf("\n\tNot Empty");
	getch();
	break;
	}
	case 5:
	{
	if(iff())
	printf("\n\tFull");
	else
	printf("\n\tNot Full");
	getch();
	break;
	}
	case 6:
	{
	exit(1);
	}
	default:
	{
	goto UP;
	}

}
goto UP;
}


void pop(void)
{
clrscr();
 if(ie())
 {
 printf("\nStack Empty");
 getch();
 }
 else
 {
  printf("\nDeleted Element = %d ",s.a[--s.top]);
  getch();
 }
}


void pus(void)
{
clrscr();
 if(iff())
 {
 printf("\nStack Overflow");
 getch();
 }
 else
 {
 printf("\nAdd New Element ");
 scanf("%d",&s.a[s.top++]);
 }
}


int ie(void)
{
	if(s.top<0)
	{
	return(1);
	}
	else
	{
	return(0);
	}
}


int iff(void)
{
	if(s.top>9)
	{
	return(1);
	}
	else
	{
	return(0);
	}
}



void dis(void)
{
clrscr();
for(int i=0;i<s.top;i++)
{
printf("\n\t%d",s.a[i]);
}
getch();
}
