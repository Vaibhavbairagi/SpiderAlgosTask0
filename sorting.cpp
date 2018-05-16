//Vaibhav 106117106
#include<stdio.h>
void quicksort(int[],int,int);
int prttn(int[],int,int);

int main()
{
	int a[100],n,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("\nNumbers after sorting:\n");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
}
void quicksort(int a[],int l,int m)
{
	int j;
	if (l<m)
	{
		j=prttn(a,l,m);
		quicksort(a,l,j-1);
		quicksort(a,j+1,m);
	}
}
int prttn(int a[],int l,int m)
{
	int v,i,j,t;
	v=a[l];
	i=l;
	j=m+1;
	do
	{
		do
		i++;
		while(a[i]<v&&i<=m);
		do
		j--;
		while(v<a[j]);
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	}
	while(i<j);
	a[l]=a[j];
	a[j]=v;
	return j;
}
