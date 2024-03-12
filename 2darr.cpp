#include<iostream>
using namespace std;

void printsum(int arr[][3], int row, int col){
    for(int col=0; col<3; col++){
        int sum = 0;
        for(int row =0; row<3; row++){
            sum += arr[row][col];
        }
        cout <<sum<<endl;
    }
}

int largestrowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int row_Index = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col =0; col<3; col++){
            sum += arr[row][col];
        }
        if (sum > maxi){
            maxi = sum;
            row_Index = row;
        }
    }
    cout << maxi << " at row "<<row_Index;
    return maxi;
}

int main(){
    int arr[3][3];

    cout << "Enter The elements"<<endl;
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    largestrowSum(arr,3,3);

    return 0;
}