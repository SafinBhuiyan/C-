#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
	#endif

        int t;
        cin>>t;
        while(t--){

        int a,b,sum;
        cin>>a>>b;
        sum=a+b;
        cout<<a<<"+"<<b<<"="<<sum<<endl;
   }
        return 0;
 }
