#include <stdio.h>
#include <iostream.h>


int unsorted_array[50];

void merge_sort(int start,int end){
	
	int mid;
	if (start<end){
		mid=start+((end-start)/2);
		merge_sort(start,mid);
		merge_sort(mid+1,end);
		merge(start,mid,end);
	}
	
}


void merge(int low,int mid,int end){

int temp_array[50];
int start1,mid1,i;

start1=start;
i=start;
mid1=mid+1;

while((start1<=mid) && (mid1<=end)){

	if (unsorted_array[start1]<=unsorted_array[mid1]){

		temp_array[i]=unsorted_array[start1];
		start1++;

	}else{

		temp_array[i]=unsorted_array[mid1];
		mid1++;
	}
	i++;
}


if(start1>mid){

	for(k=mid1;k<end;k++){

		temp_array[i]=unsorted_array[k];
		i++;
	}

}else{

	for(k=start1;k<mid;k++){

		temp_array[i]=unsorted_array[k];
		i++;
	}
}


for (k=start;k<end;k++){

	unsorted_array[k]=temp_array[k];

}

}


int main() {

	int number,i;
	cout<<"Please Enter THE NUMBER OF ELEMENTS you want to sort [THEN PRESS ENTER]:"<<endl;
	cin>>number;
	cout<<endl;
	cout<<"Please Enter the "+number+" Elements to sort";
	for(i=1;i<number;i++){

		cin>>unsorted_array[i];

	}
	merge_sort(1,number);
	cout<<endl;
 	cout<<"Sorted List is below "<<endl;
	cout<<endl<<endl;


	for(i=1;i<number;i++){

		cout<<unsorted_array[number]<<" ";
	}


}