//Algorithm 1.4
#include<stdio.h>
#define n 10
int *SELECTIONSORT(A[]);

main{
	int A[n]={1,0,9,2,1,0,7,4,0,3}
	A = SELECTIONSORT(A);
	for (int i = 0;i < n;i ++) printf("%d",A[i]);
	return 0;
}
int *SELECTIONSORT(A[]){
	int i,j,k,t;
	for(i = 0;i < n;i ++){
		k = i;
		for(j = i + 1; j < n;j ++)
			if(A[j] < A[k])
				k = j;
	}
	if(k != i) {t = A[i];A[i] = A[k];A[k] = t;}
	return A;
}
