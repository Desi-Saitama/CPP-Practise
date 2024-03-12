#include<iostream>
using namespace std;

class Hero{

private:
	int health;
	char level;

public:
	void print(){
		cout <<level<<endl;
	}

	int getHealth(){
		return health;
	}

	void setHealth(int h){
		health = h;
	}
};

int main(){
	Hero Raavan;
	Raavan.setHealth(100);
	cout<<Raavan.getHealth()<<endl;

}