#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(a == 0) 
		return b;
	gcd(b % a, a);
	
}

int main(){
	return 0;
}
