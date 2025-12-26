#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
	int mid = low + (high - low) / 2;

	if (array[mid] == target){
	    return mid;
	    }
	else if (array[mid] < target){
	    low = mid + 1;
	    }
	else {
	    high = mid - 1;
	    }
    }

    return -1;
}

int main() {
    int size,result,target,i;
     int array[9];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in sorted form:\n", size);
    for (i = 0; i < size; i++) {
	scanf("%d", &array[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

     result = binarySearch(array, size, target);

    if (result != -1) {
	printf("Element found at index %d\n", result);
    }
     else {
	printf("Element not found\n");
    }

    return 0;
    
}