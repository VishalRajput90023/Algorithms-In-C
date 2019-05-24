#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size){
	int i,key,j;
	for(int i = 1;i < size;i++){
		key = arr[i];
		j = i-1;//Previous set of cards
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;

	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	int arr[] = {12,11,13,5,6};
	n = 5;
	InsertionSort(arr,n);//Function Call
	return 0;
}
