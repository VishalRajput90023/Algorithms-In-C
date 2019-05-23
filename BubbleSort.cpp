#include<iostream>
using namespace std;

void BubbleSort(int arr[],int size){
	int i,j,temp;
	for(i = 0;i < size-1;i++){
		//LASt i elements are in place
		for(j=0;j < size-i-1;j++){
			if(arr[j] > arr[j+1]){//Wrong Order
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
			}
		}
	}
	for(int i = 0;i < size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	int arr[] = {2,1,9,6};
	n = 4;
	BubbleSort(arr,n);//Function Call
	return 0;
}
