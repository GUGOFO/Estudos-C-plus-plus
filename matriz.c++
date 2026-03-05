#include <iostream>

int main(){

    //          carros[L][C]
    std::string carros[][3] = {{"mustangue", "ferrari", "lanburguine"},
                               {"corvete" , "dkmdaks" , "n sei carros"},
                               {"mosta", "suoernaj", "vrumvrum"}};

    for (std::string (&carro)[3] : carros){
        for (std::string& item : carro){
            std::cout << item << " ";
        }
        std::cout << "\n";
    }

    //ou

    int sizeLinhas = sizeof(carros) / sizeof(carros[0]);
    int sizeColuna = sizeof(carros[0]) / sizeof(carros[0][0]);

    for(int i = 0; i < sizeLinhas; i++){
        for(int j = 0; j < sizeColuna; j++){
            std::cout << carros[i][j] << " ";
        }
        std::cout << '\n';
    } 

    return 0;
}