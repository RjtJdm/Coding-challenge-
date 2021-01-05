#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long int ll;
void fun(){
    ll k,x;
    cin>>x>>k;
    ll count=0;
    
    for(int i=2;i<=sqrt(x);i++){
        while(x%i==0){
            count++;
            x=x/i;
        }
    }
    if(x>1){
        count++;
    }
    if(count>=k){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
}
int main() {
	int TestCase;
	cin>>TestCase;
	while(TestCase>0){
        fun();
        cout<<"\n";
	    TestCase--;
	}
	return 0;
}
