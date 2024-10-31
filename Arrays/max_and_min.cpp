// creating a program to find the maximum and the minimum of the array


#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,2,-2,9,10,-4,7};
    int arr_size = sizeof(arr)/ sizeof(int);
    int max = arr[0], min = arr[0]; // comparing the numbers with respect to the array's first element
    
    for (int i = 1; i<=(arr_size-1); i++){ // traversing from the second element | (arr_size - 1) to indicate the end of the array
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > max){
            max = arr[i];

        }
    }

    cout << " The minimum and the maximum element is " << min << " and " << max << " respectively";

    
    return 0;
}

// Could also make seperate functions