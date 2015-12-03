#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(a == 0) 
		return b;
	gcd(b % a, a);
	
}

int main(){
	//cout<<gcd(5,10)<<endl;
	return 0;
}
