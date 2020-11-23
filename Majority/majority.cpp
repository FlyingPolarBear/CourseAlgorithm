#include<stdio.h>
#define n 7
int MAJORITY();
int candidate(int m);
int A[n] = {1,3,2,3,3,4,3};

int main()
{
	int major = MAJORITY();
	if (major)	printf("The majority element of the array is: %d",major);
	else printf("There is no majority elemrnt in the array.");
	return 0;
}

int MAJORITY()
{
	int c = candidate(1),count = 0,j;
	for(j = 0;j < n;j ++)
		if (A[j] == c) count ++;
	if (count > n / 2) return c;
	else return 0;
}

int candidate(int m)
{
	int j = m,c = A[m - 1],count = 1;
	while (j < n && count > 0)
	{ 
		j ++;
		if (A[j - 1] == c) count ++;
		else count --;
	} 
	if (j == n) return c;
	else return candidate(j + 1);
}
