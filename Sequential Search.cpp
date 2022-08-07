#include<iostream>

using namespace std;

int main()
{
	int n,i,a[10],key;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter element of the array: "<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the element to be searched: ";
	cin>>key;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Search Sucessful!!"<<endl;
			cout<<"Position = "<<i+1;
			break;
		}
	}
	if(i==n){
		cout<<"Search is Unsucessful!!";
	}
	return 0;
}
