
// Reversing the elements of an array in-place
// Cannot create a copy of the array, but can create counters, variables etc.

#include <iostream> 
using namespace std;

int main(){
    
    int arr[] = {3,2,-2,9, 10};
    int arr_size = sizeof(arr)/ sizeof(int);
    cout << "Original array with size " << arr_size << endl;

    for (int i = 0; i<=(arr_size-1); i++){ // printing the array
        cout << arr[i] << endl;
    }
    cout << endl << endl;

    for (int i = 0; i<(arr_size/2); i++){ // accessing the elements till the half of the array to prevent 're-reversal'

        int m = arr[i]; // first element
        int n = arr[(arr_size - 1) - i]; // subtracting the index from the end to access the array from the end

        arr[i] = n;
        arr[(arr_size - 1) - i] = m;

    }

    cout << "New array" << endl;

    for (int i = 0; i<=(arr_size-1); i++){ // printing the array
        cout << arr[i] << endl;
    }
    return 0;
}



/*
// Another implementation...
// Creating variables for both the 'head' and the 'tail'
// Incrementing & decrementing them until they are at the same position

int m = arr[0];
int n = arr_size - 1;

while (m!=n){
    int temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;


    m++;
    n--;
}


*/