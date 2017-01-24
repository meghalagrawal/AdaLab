#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

	int size,temp;
	cout<<"How many numbers do you want to sort\n\n";
	cin>>size;
	int numbers[size];
	cout<<"Enter "<<size<<" Numbers\n\n";

	for(int i=0 ;i<size;i++){
		cout<<"\n";
		cin>>numbers[i];
	
	}

	cout<<"\n\nSorting Wait . . \n\n";

	for(int i=0;i<size;i++){

		for(int j=0;j<size-1;j++){

			if(numbers[j]>numbers[j+1]){
				temp=numbers[j];
				numbers[j]=numbers[j+1];
				numbers[j+1]=temp;
			}

		}
	}

	cout<<"Array sorted\n";

	for(int i=0;i<size;i++){

		cout <<numbers[i]<<"\n";
	}

	return 0;
}