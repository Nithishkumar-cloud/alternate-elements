#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr1[]={10,20,30};
	int arr2[]={1,2,3};
	int k=0;
	int h=1;
	int f=sizeof(arr1)/sizeof(arr1[0]);
	int g=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[f+g];
	for(int i=0;i<f;i++){
		arr3[k]=arr1[i];
		k=k+2;
	}
	for(int j=0;j<g;j++){
		arr3[h]=arr2[j];
		h=h+2;
	}
	for(int z=0;z<f+g;z++){
		cout<<arr3[z]<<endl;
	}
}

