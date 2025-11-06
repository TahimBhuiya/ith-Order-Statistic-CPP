//Created by Tahim Bhuiya

#include <iostream> //Added necessary libraries
using namespace std; 

// Partition function: rearranges elements around a pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // choose the last element as pivot
    int i = low - 1;        // index of smaller element

    for (int j = low; j < high; j++) {
        // if current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]); // place smaller element on the left
        }
    }

    // place the pivot in its correct sorted position
    swap(arr[i + 1], arr[high]);
    return (i + 1); // return pivot index
}


// Function to find the i-th order statistic (k-th smallest element)
int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        // partition the array and get pivot position
        int pivotIndex = partition(arr, low, high);

        // if pivot position matches k-1, we've found the k-th smallest
        if (pivotIndex == k - 1)
            return arr[pivotIndex];
        // if k-th smallest lies on the left side
        else if (pivotIndex > k - 1)
            return quickSelect(arr, low, pivotIndex - 1, k);
        // if k-th smallest lies on the right side
        
            
    }

   
    
}