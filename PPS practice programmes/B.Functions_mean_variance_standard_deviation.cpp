#include<stdio.h>
#include<math.h>
void printArray(int [],int );
int Mean(int [],int );
float Variance(int [],int n,float avg);
float Standard_deviation(int [],int n,float res2);
int main()
{
	int A[100],n,i;
	float res1, res2,res3,avg;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printArray(A,n);
	res1=Mean(A,n);
	avg=res1/n;
	printf("\nMean=%f",avg);
	
	res2=Variance(A,n,avg);
	printf("\nVariance=%f",res2);
	
	res3=Standard_deviation(A,n,res2);
	printf("\nStandard deviation=%f",res3);
	
	
}
void printArray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",A[i]);
	}
} 
int Mean(int A[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=A[i];
	}
	return sum;
}
float Variance(int A[],int n ,float avg)
{
	int i;
	float v, s;
	for(i=0;i<n;i++)
	{
		v =(avg-A[i]);
		s+=((v*v)/(n));
		
	}
	return s;
}
float Standard_deviation(int A[],int n,float res2)
{
	float ans;
	ans=sqrt(res2);
	return ans;
	
}


