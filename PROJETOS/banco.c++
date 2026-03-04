#include <iostream>

void msgInicial();
void getDinheirConta(int dinheiro);
int AdicionarDinheiro(int dinheiro, int quantiaDeDinheiro);
int RetirarDinheiro(int dinheiro, int quantiaDeDinheiro);

int main(){
    
    int dinheiro = 100, opção, quantiaDeDinheiro;
    
    while (1){
        msgInicial();
        std::cin >> opção;

        switch (opção)
        {
        case 1:
            getDinheirConta(dinheiro);
            break;
        case 2:
            std::cout << "Quanto dinheiro voce quer depositar: ";
            std::cin >> quantiaDeDinheiro;
            if(quantiaDeDinheiro < 0)
                std::cout << "Voce n pode adicionar dividas senhor...\n";
            else 
                dinheiro = AdicionarDinheiro(dinheiro, quantiaDeDinheiro);
            break;
        case 3:
            if(dinheiro <= 0)
                std::cout << "Ops, voce esta no negativo... volte quando parar de ser pobre :)\n";
            else{
                std::cout << "Quanto dinheiro voce quer retirar: ";
                std::cin >> quantiaDeDinheiro;

                if(quantiaDeDinheiro < 0)
                    std::cout << "Voce n pode retirar dividas senhor...\n";
                else
                    dinheiro = RetirarDinheiro(dinheiro, quantiaDeDinheiro);
            }
            break;
        
        default:
            std::cout << "Escolha uma opcao valida (EX: 1)\n";
            break;
        }
    }
    
    
    return 0;
}

void getDinheirConta(int dinheiro){
    std::cout << "Voce tem " << dinheiro << "$ de dinheiro\n";
}

int AdicionarDinheiro(int dinheiro, int quantiaDeDinheiro){
    return dinheiro + quantiaDeDinheiro;
}

int RetirarDinheiro(int dinheiro, int quantiaDeDinheiro){
    return dinheiro - quantiaDeDinheiro;
}

void msgInicial(){
    std::cout << "\nOque voce deseja fazer?\n";
    std::cout << " 1 - Ver quanto dinheiro tenho\n";
    std::cout << " 2 - Depositar money\n";
    std::cout << " 3 - Retirar money\n\n";
}