#include<stdio.h>
int main()
{
	int arr[50],size,num,pos, FirstEle, LastEle;
	printf("ENTER SIZE OF ARRAY\n");
	scanf("%d",&size);
	printf("ENTER ARRAY ELEMENT\n");
	for(int i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ARRAY ELEMENTS ARE:\n");
	for(int i=0; i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("ENTER POS AND NUMBER WHERE YOU WANT TO INSERT\n");
	scanf("%d%d",&pos,&num);
	if(pos<=0 || pos> (size+1))
	{
		printf("NOT POSSIBLE\n");
	}
	else
	{
	for(int i=size-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=num;
	size++;
	
	printf("AFTER INSERT  ARRAY ELEMENT\n");
	for(int i=0; i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	}
		printf("\n");
//	----------------------------------------------------------------------------------------------------
//INSERT ARRAY ELEMENT AT THE BEGINING
		printf("ENTER ELEMENTS WHAT YOU INSERT AT BEGINING\n");
		scanf("%d",&FirstEle);
		for(int i= size-1; i>=0;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=FirstEle;
		size++;
		printf("AFTER INSERT FIRST ELEMENT, ARRAY ELEMENT\n");
		for(int i=0; i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
			printf("\n");
//--------------------------------------------------------------------------------------------------------------------
//INSERT IN LAST INDEX
		printf("ENTER ELEMENTS WHAT YOU INSERT AT END\n");
		scanf("%d",&LastEle);
		arr[size]=LastEle;
		size++;
		printf("AFTER INSERT LAST ELEMENT, ARRAY ELEMENTs ARE:\n");
		for(int i=0; i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
}
