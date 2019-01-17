//============================================================================
// Name        : recursive.cpp
// Author      : Rishika Machina
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#define SIZE 10
#include <iostream>
using namespace std;
int list[SIZE] = {23, 19, 17, 13, 11, 7, 5, 3, 1, 0};
int recBinarySearch(int key);
int recBinary(int key, int low, int high);
int main() {
	int a;
	cout<<"enter the key value:   ";
	cin>>a;
	int s= recBinarySearch(a);
	cout<<"key value found at index number:  "<<s<<endl;
	cout<<"postion number:  "<<s+1<<endl;
	return 0;
}
int recBinarySearch(int key){
	int low  = 0;
	int high = SIZE -1;
	int w=recBinary(key,low,high);
	return w;
}
int recBinary(int key, int low, int high){
		if(low>high)
			return -1;
		while(low<high){
			int mid =(low+high)/2;
			if(list[mid]<key){
				high=mid-1;
				recBinary(key,low,high);
			}
			else if(list[mid]>key){
				low=mid+1;
				recBinary(key,low,high);
			}
			else
				return mid;
		}
}
