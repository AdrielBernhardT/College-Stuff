#include <stdio.h>

void Merge(int arr[], int left, int mid, int right){
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftArr[leftSize];
    //isi array kiri
    for (int i = 0; i < leftSize; i++)
    {
        leftArr[i] = arr[left + i];
    }

    int rightArr[rightSize];
    //isi array kanan
    for (int i = 0; i < rightSize; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }

    // bikin index
    int leftIndex = 0;
    int rightIndex = 0;
    int mergeIndex = left;
    
    // akan ada while yang bertemu di mid
    while (leftIndex < leftSize && rightIndex < rightSize)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
        {
            arr[mergeIndex] = leftArr[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mergeIndex] = rightArr[rightIndex];
            rightIndex++;
        }
        mergeIndex++;
    }
    
    // Array Kiri
    while (leftIndex < leftSize)
    {
        arr[mergeIndex] = leftArr[leftIndex];
        leftIndex++;
        mergeIndex++;
    }

    // Array Kanan
    while (rightIndex < rightSize)
    {
        arr[mergeIndex] = rightArr[rightIndex];
        rightIndex++;
        mergeIndex++;
    }
}

void MergeSort(int arr[], int left, int right){
    if (left < right)
    {
        int mid = (left + right) / 2;
        MergeSort(arr, left, mid);  //bagian kiri
        MergeSort(arr, mid + 1, right); //bagian kanan
        Merge(arr, left, mid, right);
    }
    
}

void printArr(int arr[], int arrSize){

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int BinarySearch(int *arr, int arrSize, int target){
	int l = 0;
	int r = arrSize - 1;
	
	while(l <= r){
		int index = (r + l) / 2;
		if(arr[index] == target){
			return index;
		} else if (arr[index] > target){
			r = index - 1;
		} else {
			l = index + 1;
		}
	}
	return -1;
}


int main(){
    int arr[] = {8, 2, 5, 3, 4, 7, 1, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int target;
	
	scanf("%d", &target); getchar();

    MergeSort(arr, 0, arrSize - 1);

   	int result = BinarySearch(arr, arrSize, target);
    if(result == -1){
		printf("%d NOT FOUND!\n", target);
	}
	else
	{
		printf("%d Found at index %d\n", target, result);
	}
    printArr(arr, arrSize);
    return 0;
}