#include <stdio.h>

int main(){
	int nums[] = {1,2,3,4,5,6,7,8,9,10};

	printf("Memory Address:\tValue:\n");
	for(int i=0; i < 10; i++){
		/*
			nums = address of first element of array
			*(nums + i) should give the i-th element of array
		*/
		printf("%#15X\t%6d\n",nums,*(nums + i));
	}
	return 0;
}