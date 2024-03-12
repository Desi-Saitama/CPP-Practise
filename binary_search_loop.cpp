#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start =0, end = size;
	int mid = (start+end)/2;

	while(start<=end){

		if (arr[mid] == key){
			return mid;
		}
		else if(arr[mid]>key){
			end = mid-1;
		}
		else if(arr[mid]<key){
			start = mid+1;
		}
		mid = (start+end)/2;
}
		return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,12,13,45,46};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = binarySearch(arr, n, 45);
	if (k==-1){
		cout << "Do not exist";
	}
	else{
		cout << k;
	}
}