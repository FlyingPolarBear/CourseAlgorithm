//Algorithm 6.5 SPLIT
#include<stdio.h>
int split(int A[],int low,int high); 

int main()
{
	int A[7] = {5,3,9,2,7,1,8};
	int low = 1,high = 7;
	low --; high --;
	int w;
	w = split(A,low,high);
	printf("%d",w);
	return 0;
}

int split(int A[],int low,int high)
{
	int x,i,j,w,t;
	i = low;
	x = A[low];
	for (j = low;j < high;j ++)
		if (A[j] <= x)
		{
			i ++;
			if (i != j) {A[i] = t;t = A[j];A[j] = A[i];}
		}
	{A[low] = t;t = A[i];A[i] = A[low];}
	w = i;
	return w;
}

