#include <iostream>

int calcularTotal(int preços[], int sizePreços){
    int total = 0;
    for(int i = 0; i < sizePreços; i++) total += preços[i];
    return total;
}

int main(){

    int preços[] = {10,39,103,1012,3,2};
    const int sizePreços = sizeof(preços) / sizeof(preços[0]);
    const int total = calcularTotal(preços, sizePreços);
    std::cout << total;
  
    return 0;
}