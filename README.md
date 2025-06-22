# C++ Sorter

Sorting algorithms implemented
* Bubble Sort
* Selection Sort

## How To use  these algorithms
### Bubble Sort
```cpp
#include<iostream>
#include "sort.h"
using namespace std;

int main(){
    int arr[5] = {12, 123, 32, 13, 50};
    bubble_sort(arr, 5, '<'); // < is for Assending order and > is for Decending order
    for(int a : arr){
        cout<<a<<"  ";
    }
    return 0;
}
```
___
### Selection Sort
```cpp
#include<iostream>
#include "sort.h"
using namespace std;

int main(){
    int arr[5] = {12, 123, 32, 13, 50};
    selection_sort(arr, 5, '>'); // < is for Assending order and > is for Decending order
    for(int a : arr){
        cout<<a<<"  ";
    }
    return 0;
}
```
___
This repo is not completed because i am learning DSA so everyday I learn something new then apply that on my repo
_I use Arch btw..._