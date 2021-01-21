
#include<Stdio.h>

void main(void){

	int size,x;
	int arr[100];

	printf("Please enter How many numbers you want to sorting it = ");
	scanf("%d",&size);
	//scan numbers from user
	for(int i=0;i<size;i++){
            printf("Please enter num %d = ",i+1);
            scanf("%d",&arr[i]);
            }

	//bubble sorting process
	for(int i=0;i<size-1;i++){ // i put "-1"  to didn't check last number in array with a out value of array
        for(int j=0;j<size-i-1;j++){//  i put "-i-1" to don't check the last number in array is already sorted
            if(arr[j]>arr[j+1]){
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }

        }

	}

	for(int i=0;i<size;i++){
            printf("Numbers after sorting = %d\n",arr[i]);
        }
}
