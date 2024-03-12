#include<iostream>
using namespace std;

int length(char name[]){
    int count = 0;
    int i = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }

    return count;
}

void reverse(char name[]){
    int e = length(name) - 1;
    int i = 0;
    while(i<e){
        swap(name[i++], name[e--]);
    }
}

int main(){
	char name[20];

	cout << "Enter Name : " << endl;
	cin >> name;

	cout << "Your Name is: "<<endl;
	cout<< name <<endl;

    cout << "length: " << length(name) << endl;
    reverse(name);
    cout <<name<<endl;
}