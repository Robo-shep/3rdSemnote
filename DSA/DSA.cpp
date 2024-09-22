#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	int n=10;
	int arr[n]={0,1,2,3,4,5,6,7,8,9};
	int k=5;
	int m=0;
	int rear[m][1];
	for(int i=0 ; i<=n ; i++)
	{
		for(int j=0 ; j<=n ; j++)
		{
			if((i+j)%k=0)
			{
				rear[m][0]=i;
				rear[m][1]=j;
				m+=1;
			}
		}
	}
	cout<<m;
	return 0;
}
