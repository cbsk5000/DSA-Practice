// Write a program that takes in an array of integers as input and a target integer as input.
// For getting the array from the user, there are two options: 
// 1. Ask the array size, traverse the array till the size using a loop and get inputs each iteration
// 2. Use a sentinel value like -1 to stop the loop, and get the inputs in each iteration



#include <iostream>
using namespace std;

int main(){

    int arr_size; 
    cout << "Size of the list: ";
    cin >> arr_size;
    cout << "Enter the elements..." << endl;
    int arr[arr_size];

    for (int i = 0; i<arr_size; i++){
        int m;
        cout << "Element " <<  i << ": "; 
        cin >> m;
        arr[i] = m;
    }
    
    int number;

    cout << "Enter the number to be counted: ";
    cin >> number;
    int count = 0;

    for (int i = 0; i<arr_size; i++){
        if (arr[i] == number){
            count++;
        }
    }

    cout << "The number of elements with value " << number << " is " << count << endl;
    return 0;

}