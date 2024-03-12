#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
	int mid = (end+start)/2;
	if (arr[mid] == key){
		return mid;
	}
	else if(arr[mid]>key){
		return binarySearch(arr, start, mid-1, key);
	}
	else if(arr[mid]<key){
		return binarySearch(arr,mid+1, end, key);
	}
	else 
		return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,12,13,45,46};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = binarySearch(arr, 0, n-1, 45);
	if (k==-1){
		cout << "Do not exist";
	}
	else{
		cout << k;
	}
}