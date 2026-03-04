#include <iostream>
#include <ctime>

int main(){

    int opção, opçãoBot;

    while (1){
        std::cout << "\n\nEscolha uma opcao: \n";
        std::cout << " 1 - Pedra\n";
        std::cout << " 2 - Papel\n";
        std::cout << " 3 - Tesoura\n";
        std::cin >> opção;

        opçãoBot = (rand() % 3) + 1;

        if(opção == opçãoBot) std::cout << "EMPTATEEEEEE :| ";
        else
            switch (opção)
            {
            case 1:
                opçãoBot == 2 ? std::cout << "PEDEUUUU :(" : std::cout << "GANHOUUUU :)";
                break;
            case 2:
                opçãoBot == 1 ? std::cout << "GANHOUUUU :)" : std::cout << "PEDEUUUU :(";
                break;
            default:
                opçãoBot == 1 ? std::cout << "PEDEUUUU :(" : std::cout << "GANHOUUUU :)";
                break;
            }
    }

    return 0;
}
