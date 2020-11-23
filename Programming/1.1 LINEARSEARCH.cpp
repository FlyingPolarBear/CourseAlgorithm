//Algorithm 1.1
#include<stdio.h>
#define n 14
int LINARSEARCH(int A[],int x);

main(){
	int A[n] = {1,4,5,7,8,9,10,12,15,22,23,27,32,35};
	int x = 0;
	scanf("%d",&x);
	printf("%d",LINARSEARCH(A,x));
	return 0;	
}

int LINARSEARCH(int A[],int x){
	int j = 0;
	while(j<n&&x!=A[j])
		j++;
	if(x==A[j]) return j+1;
	else return 0;
}
