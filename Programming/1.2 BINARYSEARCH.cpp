//Algorithm 1.2
#include<stdio.h>
#define n 14
int BINARYSEARCH(int A[],int x);

main(){
	int A[n] = {1,4,5,7,8,9,10,12,15,22,23,27,32,35};
	int x = 0;
	scanf("%d",&x);
	printf("%d",BINARYSEARCH(A,x));
	return 0;	
}

int BINARYSEARCH(int A[],int x){
	int low = 1,high = n,mid = 0;
	int j = 0;
	while(low <= high && j == 0){
		mid = (low + high)/2;
		if(x == A[mid]) j = mid;
		else if(x < A[mid]) high = mid-1;
		else low = mid + 1;
	}
	return j;
}
