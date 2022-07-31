#include<stdio.h>
int binarySearch(int a[],int first,int last,int target){
	
	if(first>last)
		return -1;
	
	else{
		
		int mid=(first+last)/2;
		
		if(a[mid]==target)
			return mid;
		
		else if(a[mid]<target){
			binarySearch(a,mid+1,last,target);
		}
		
		else if(target<a[mid]){
			binarySearch(a,first,mid-1,target);	
		}
		
	}
}
int main(){
	int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	printf("5는 %d번째에 있음.\n",binarySearch(a,0,11,5)+1);
}