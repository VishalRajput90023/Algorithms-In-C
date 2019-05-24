#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
   int i,j,k;
   int nL = m-l+1;
   int nR = r - m;

   //Crete temp arrays
   int L[nL],R[nR];

   //Copy elements
   for(i = 0;i < nL;i++){
   	L[i] = arr[l+i];
   }
   for(j=0;j < nR;j++){
   	R[j] = arr[m+1+j];
   }

   //Merging
   i = 0;j = 0;k = l;
   while(i<nL && j<nR){
   	if(L[i] <= R[j]){//Comparison
   		arr[k] = L[i];
   		i++;
   	}
   	else{
   		arr[k] = R[j];
   		j++;
   	}
   	k++;
   }
   //Elements remaining in left subarray
   while(i < nL){
   	arr[k] = L[i];
   	i++;
   	k++;
   }
   //Elements remaining in right subarray
   while(j < nR){
   	arr[k] = R[j];
   	j++;
   	k++;
   }

}
void MergeSort(int arr[],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		//Step 1:

		//Divide the array in two equal halves
		MergeSort(arr,l,m);
		MergeSort(arr,m+1,r);

		//Step2: Merge the two halves
		merge(arr,l,m,r);
	}
}
int main(){
	int n;
	int arr[] = {38,27,43,3,9,82,10};
	n = 7;
	MergeSort(arr,0,n-1);//Function Call
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
