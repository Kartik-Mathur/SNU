// Fact
#include <iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}
	// recursive case
	int ChotaAns=fact(n-1);
	int BadaAns=n*ChotaAns;
	return BadaAns;
}

int Fibo(int n){
	if(n==0||n==1){
		return n;
	}

	return Fibo(n-1)+Fibo(n-2);
}


int main(){
	int n;
	cin>>n;

	// cout<<fact(n)<<endl;
	cout<<Fibo(n)<<endl;


	return 0;
}
