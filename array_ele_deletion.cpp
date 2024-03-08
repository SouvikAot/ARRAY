#include<stdio.h>
int main()
{
	int arr[50],size,num,pos;
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
	printf("ENTER POS WHERE YOU WANT TO DELETE\n");
	scanf("%d",&pos);
	if(pos<=0 || pos> (size))
	{
		printf("DELETION NOT POSSIBLE\n");
	}
	else
	{
	for(int i=pos-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	
	printf("AFTER DELETION  ARRAY ELEMENT\n");
	for(int i=0; i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	}
		printf("\n");
//	----------------------------------------------------------------------------------------------------
//INSERT ARRAY ELEMENT AT THE BEGINING
	printf("DELETE AT BEGINING\n");
		for(int i= 0; i<size-1;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
		printf("AFTER DELETION FIRST ELEMENT, ARRAY ELEMENT\n");
		for(int i=0; i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
			printf("\n");
//--------------------------------------------------------------------------------------------------------------------
//INSERT IN LAST INDEX
		printf("DELETE AT END\n");
		size--;
		printf("AFTER DELETE LAST ELEMENT, ARRAY ELEMENTs ARE:\n");
		for(int i=0; i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
}
