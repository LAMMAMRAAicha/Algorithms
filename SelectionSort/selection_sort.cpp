#include <iostream>
#include <array>

template<std::size_t length>
void selectionSort(std::array<int, length>& arr){
    
    for (std::size_t i = 0; i < arr.size(); ++i){
        std::size_t min_index = i;
        for(std::size_t j = i+1; j  <arr.size(); ++j){
            if (arr [j] < arr[min_index]){
                min_index = j; 
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}

int main(){
    std::array<int, 6> arr = {7, 12, 1, 22, 23, 6};
    selectionSort (arr);
    
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }

    return 0;
}