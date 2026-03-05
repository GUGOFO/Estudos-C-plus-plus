#include <iostream>

int binarySearch(const int nums[], int sizeNums, int escolhido);

int main(){

    const int numeros[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeNumeros = sizeof(numeros) / sizeof(numeros[0]);
    int escolha;

    std::cout << "Escolha o numero e eu irei te falar quanto tempo demorou para eu achar: ";
    std::cin >> escolha;
    
    std::cout << "\n Demorou " << binarySearch(numeros, sizeNumeros, escolha) << " vezes";

    return 0;
}

int binarySearch(const int nums[], int sizeNums, int escolhido){
    int e = -1, d = sizeNums, m = (e+d)/2;
    int vezes = 1;

    while (d - e != 1){
        if(m == escolhido) return vezes; 
        if(nums[m] > escolhido) d = m - 1;
        else e = m;
        m = (e + d)/2;
        vezes++;
    } return d;
}