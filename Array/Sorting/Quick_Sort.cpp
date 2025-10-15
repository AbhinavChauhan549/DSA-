#include<bits/stdc++.h>
using namespace std; 

int partition (int arr[], int low , int high){
	int pivot = arr[low];
	int i = low; 
	int j = high;
	
	while(i<j){
		while(arr[i]<=pivot && i<=high){
			i++;
		}
		while(arr[j]>pivot && j>=low){
			j--;
		}
		
		if(i<j){
			swap(arr[i],arr[j]); 
		}
	}
	swap(arr[j],arr[low]);
	return j;
}

void quicksort(int arr[], int left , int right){
	int partition_element_index = partition(arr,left,right);
	
	quicksort(arr,left,partition_element_index-1);
	quicksort(arr,partition_element_index+1, right);
	
}

int main(){
	
	int n ; 
	cin>>n; 
	
	int *arr = new int[n];
	for(int i =0 ; i< n ;i++){
		cin>>arr[i];
	}
	
	for(int i =0 ; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	
	quicksort(arr,0,n-1);
	
	for(int i =0 ; i<n ;i++){
		cout<<arr[i]<<" ";
	}
	
	delete[] arr;
	return 0;
}
