#include <iostream>
#include <array>

template<std::size_t length>
void insertionSort(std::array<int, length>& arr){

    for (int i = 1; i < arr.size(); i++){
        int current_value = arr[i];
        int j;
        for (j = i-1; j >= 0 && arr[j] > current_value; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = current_value;
    }
}
    
int main(){
    std::array<int, 6> arr = {17, 2, 1, 22, 23, 6};
    
    insertionSort(arr);
    
    std::cout << "Sorted : ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    return 0;
}
