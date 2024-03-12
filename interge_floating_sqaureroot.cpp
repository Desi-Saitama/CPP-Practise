#include <iostream>
using namespace std;
int binary(int s){
    int start = 0;
    int end=s;
    int ans;
    long long mid = start + (end - start)/2;
    while(start<=end){
        long long int square = mid*mid;

        if(square == s){
            return mid;
        }
        else if(square<s){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double pre(int n, int p, int temp){
	double factor = 1;

	double ans = temp;

	for(int i=0; i<p; i++){
		factor = factor/10;
		for(double j=ans; j*j < n; j=j+factor){
			ans = j;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	int inte = binary(n);
	cout << "Answer is: " << pre(n, 3, inte);
}