#include<stdio.h>
#include<conio.h>

int main(){
	int a[20],key,l=0,h,n,i,mid,flag;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	printf("Enter emelents of Array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&key);
	h = n-1;
	while(l<=h){
		mid = (l+h)/2;
		if(a[mid]<key){
			l=mid-1;
		}
		else if(a[mid]>key){
			h=mid-1;
		}
		else{
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		printf("Search Sucessfull!!\n");
		printf("Position = %d",mid+1);
	}
	else{
		printf("Search Unsucessfull!!");
	}
	return 0;
}
