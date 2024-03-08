#include<stdio.h>
int main()
{
	int b=10;
	int *p;
	p=&b;
	int *x;
	int s=20;
	*x= s;
	printf("%d\n",b);
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",&b);
		printf("%d\n",*x);
		printf("%d\n",&s);
/*	
	//array name itself a pointer
	int a[]={1,4,5,6,7};
	int *q;
	q=a;
//	q=&a[2];
	printf("%d\n",a);
    printf("%d\n",q);
    printf("%d\n",*q);
    q++;
    printf("%d\n",q);
	printf("%d\n",*q);
	int arr[9], i,*r;
	r=arr;
	for(i=0;i<5;i++)
	scanf("%d",(arr+i));
	
	for(i=0;i<5;i++)
	printf("%d/t",*(r+i));
	*/
}
