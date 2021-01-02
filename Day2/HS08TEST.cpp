#include<iostream>
using namespace std;
int main(){
	float withdrawl, balance;
	cin>>withdrawl>>balance;
	if((int)withdrawl%5==0&&(withdrawl)<=(balance-0.5)){
		balance=balance-withdrawl;
		balance=balance-0.50;
	}
	cout<<balance;
	return 0;
}
