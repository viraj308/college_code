#include<stdio.h>

int check(int array[], int n, int x) {
	for(int z = 0; z < n; z++) {
		if(array[z] == x) {
			return z;
		}

	}
	return -1;
}

int main() {
	int array[] = {1,2,3,4};
	int x = 10;
	int n = sizeof(array)/sizeof(array[0]);
	int y = check(array,n, x);
	printf("%d", y);
}
