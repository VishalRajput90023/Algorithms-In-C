#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
  int pivot = arr[high];
  int temp,t;
  int i = low-1;//partitioning index
  for(int j = low;j<=high-1;j++){
  	if(arr[j]<=pivot){
  		i++;
     temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;

  	}
  }
  t = arr[i+1];
  arr[i+1] = arr[high];
  arr[high] = t;
  return (i+1);
}
void QuickSort(int arr[],int l,int r){
	if(l<r){//Base COndition
     int pindex = partition(arr,l,r);
     QuickSort(arr,l,pindex-1);
     QuickSort(arr,pindex+1,r);
	}
}
int main(){
	int n;
	int arr[] = {38,27,43,3,9,82,10};
	n = 7;
	QuickSort(arr,0,n-1);//Function Call
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
