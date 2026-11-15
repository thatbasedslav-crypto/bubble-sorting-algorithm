//использованы ссылки &, иначе сортировка выполнится 1 раз
#include <iostream>
#include <vector>
#include <utility>

int sizeOfArray;
std::vector<int> init_array(std::vector<int> user_array, int sizearr, int element) { //функция возвращающая инициализованный вектор
    int numelement = 0;
    for (int i=0;i<sizearr;i++) { //инициализация
        std::cout<<"Initialize element"<<" "<<i+1<<": ";
        std::cin>>element;
        user_array.push_back(element);
    }
    std::cout<<"Array initialized!: ";
    std::cout<<"[";
    for (int j=0;j<sizearr-1; j++) { //вывод
        std::cout<<user_array[numelement]<<", ";
        numelement++;
    }
    std::cout<<user_array[sizearr-1]<<"]";
    return user_array;
}
std::vector<int> sort_array(std::vector<int>& user_array, int sizearr) { //функция возвращающая отсортированный вектор (1 итерация)
    int index = 0;
    int p_d = 0;
    for (int k=0;k<sizearr-1;k++) {
        if (user_array[index]!=user_array[index+1]) {
            if (user_array[index]>user_array[index+1]) {
                std::swap(user_array[index], user_array[index+1]); //меняются местами
            } else {
                //ничего
            }
        } else {
            //ничего
        }
        index++;
    }
    return user_array;
}
std::vector<int> sorted_array(std::vector<int>& user_array, int sizearr) { //функция выводящая отсортированный вектор
    int numelement = 0;
    std::cout<<"[";
    for (int j=0;j<sizearr-1; j++) { //вывод
        std::cout<<user_array[numelement]<<", ";
        numelement++;
    }
    std::cout<<user_array[sizearr-1]<<"]";
    return user_array;
}

int main() {
    std::vector<int> bub;
    std::vector<int> bub_sorted;
    std::vector<int> bub_result;
    std::cout<<"Initialize the size of the array: ";
    std::cin>>sizeOfArray;
    if (sizeOfArray<1) {
        std::abort();
    }
    bub = init_array(bub, sizeOfArray, 0);
    std::cout<<"\nHere is the sorted array: ";
    for (int h=0;h<sizeOfArray;h++) {
        bub_sorted = sort_array(bub, sizeOfArray);
    }  
    bub_result = sorted_array(bub_sorted, sizeOfArray);
}
