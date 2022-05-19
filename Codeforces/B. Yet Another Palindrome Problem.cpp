#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,x;
	cin>>t;
	while(t--)
	{
		x=1;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-2;i++){
			for(int j=i+2;j<n;j++){
				if(a[i]==a[j])
				{
					x=0;
					cout<<"YES"<<endl;
					break;
				}
			}
			if(x==0)
			break;
		}
		if(x==1)
		cout<<"NO"<<endl;
		
			
	}
}
