#include<iostream>
using namespace std;



char getMax(string s){
   int arr[26] = {0};
   int number = 0;
   for(int i=0; i<s.length(); i++){
    char ch = s[i];
    if(ch>= 'a' && ch<= 'z'){
        number = ch - 'a';
    }
    else{
        number = ch - 'A';
    }
    arr[number]++;
   }

    int ans = 0;
    int max = -1;
    for(int i =0; i<26; i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;

}

int main(){
    string s;
    cin>>s;

    cout << getMax(s);
    return 0;
}