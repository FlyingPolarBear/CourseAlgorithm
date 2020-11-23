//Algorithm 1.3
/*Inputs: (1) A[1¡­m]; 
(2) p, q, and r, and 1<=p<=q<r<=m, 
such that both A[p¡­q] and A[q+1¡­r] are sorted individually in nondecreasing order;
Output: A[p¡­r] contains the result of merging the two subarrays A[p¡­q] and A[q+1¡­r];
*/
//Sorted Lists : 7,8,9,10,12,15 and 2,23,27
#include<stdio.h>
#define n 14
int *MERGE(int A[],int p,int q,int r);

main(){
	int A[n] = {1,4,5,7,8,9,10,12,15,2,23,27,32,35};
	int p = 4, q = 9, r = 12;
	A = MERGE(A,p,q,r);
	for (int i = 0;i < n;i ++) printf("%d",A[i]);
	return 0;
}

int *MERGE(int A[],int p,int q,int r){
	p --;q --;r --;
	int s = p,t = q + 1,k = p;
	int B[n];
	while(s <= q && t <= r){
		if(A[s] < A[n]){
			B[k] = A[s];
			s--;
		}
		else{
			B[k] = A[t];
			t++;
		}
		k++;
	}
	if(s == q + 1)
		while(r - t >= 0){
			B[k] = A[t];
			k++;t++;
		}
	else
		while(q - s >=0){
			B[k] = A[s];
			k++;s++;
		}
	return B;
}
