#include <iostream>
#include <array>

template<std::size_t length>
void bubbleSort(std::array<int, length>& arr){ 
    std::size_t N = length;
    
    while (N > 0 ){
        for (std::size_t i = 1; i < arr.size(); ++i){
            if (arr[i] < arr[i-1]){
                std::swap(arr[i-1], arr[i]);
            } 
        }
       --N;
    }
}

int main(){
    std::array<int, 6> arr = {12, 7, 1, 22, 23, 6};
    bubbleSort (arr);
    std::cout << "\n bubble sort :  "<<std::endl;
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }

    return 0;
}
