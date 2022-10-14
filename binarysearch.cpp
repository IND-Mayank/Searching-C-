//binary search with sorting
#include<iostream>
using namespace std;
int binarysearch(int array[],int n,int key){
	int e=0;
	int f=n;
	while(e<=n){
		int mid=(e+n)/2;
		if(array[mid]==key){
			return mid;
		}
		else if(array[mid]<key){
			e=mid+1;
		}
		else{
			f=mid-1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(array[j]<array[i]){
				int t=array[j];
				array[j]=array[i];
				array[i]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
		
	}
	int key;
	cin>>key;
	cout<<binarysearch(array,n,key);
return 0;	
}
