#include <iostream>
#include <string> 

int main() {
    std::string nome;

    std::cout << "Digite seu nome completo: ";
    std::getline(std::cin, nome);

    std::string nome_original = nome;

    // 1. CAPACITY (Capacidade e Tamanho)

    std::cout << "\n--- CAPACIDADE ---\n";
    std::cout << "Tamanho (length / size): " << nome.length() << '\n';
    std::cout << "Tamanho Maximo Suportado (max_size): " << nome.max_size() << '\n';
    std::cout << "Espaco Alocado na Memoria (capacity): " << nome.capacity() << '\n';
    std::cout << "Esta vazio (empty)? " << (nome.empty() ? "Sim" : "Nao") << '\n';
    
    nome.reserve(100);
    std::cout << "Capacidade apos reserve(100): " << nome.capacity() << '\n';
    
    nome.shrink_to_fit();
    std::cout << "Capacidade apos shrink_to_fit: " << nome.capacity() << '\n';

    // 2. ELEMENT ACCESS (Acesso aos caracteres)

    std::cout << "\n--- ACESSO A ELEMENTOS ---\n";
    if (!nome.empty()) {
        std::cout << "Primeira letra (front): " << nome.front() << '\n';
        std::cout << "Ultima letra (back): " << nome.back() << '\n';
        std::cout << "Segunda letra (operator[]): " << nome[1] << '\n';
        std::cout << "Terceira letra segura (at): " << nome.at(2) << '\n';
    }

    // 3. MODIFIERS (Modificadores)
    
    std::cout << "\n--- MODIFICADORES ---\n";
    nome += " Jr."; 
    std::cout << "+= ' Jr.': " << nome << '\n';
    
    nome.append(" (Dev)");
    std::cout << "append(' (Dev)'): " << nome << '\n';
    
    nome.push_back('!'); 
    std::cout << "push_back('!') (add no final): " << nome << '\n';
    
    nome.pop_back(); 
    std::cout << "pop_back() (remove o '!'): " << nome << '\n';
    
    nome.insert(0, "@"); 
    std::cout << "insert(0, '@'): " << nome << '\n';
    
    nome.erase(0, 1); 
    std::cout << "erase(0, 1) (remove o '@'): " << nome << '\n';
    
    nome.replace(0, 4, "Sr. "); 
    std::cout << "replace(0, 4, 'Sr. '): " << nome << '\n';

    std::string outro_usuario = "Visitante";
    nome.swap(outro_usuario); 
    std::cout << "swap (trocou com Visitante): " << nome << '\n';
    
    nome.assign(nome_original);
    std::cout << "assign (restaurou o original): " << nome << '\n';

    // 4. STRING OPERATIONS (Operações)
    
    std::cout << "\n--- OPERACOES ---\n";
    
    size_t espaco = nome.find(' ');
    if (espaco != std::string::npos) {
        std::cout << "Primeiro espaco (find) no indice: " << espaco << '\n';
    } else {
        std::cout << "Nenhum espaco encontrado!\n";
    }

    std::cout << "Ultimo espaco (rfind): " << nome.rfind(' ') << '\n';
    std::cout << "Primeira vogal (find_first_of): " << nome.find_first_of("aeiouAEIOU") << '\n';
    std::cout << "Primeira letra que NAO eh 'A' (find_first_not_of): " << nome.find_first_not_of("A") << '\n';

    if (nome.length() >= 3) {
        std::cout << "Gerar Substring dos 3 primeiros (substr): " << nome.substr(0, 3) << '\n';
    }

    std::cout << "Comparar com a palavra 'Zebra' (compare): " << nome.compare("Zebra") << " (Negativo = vem antes no alfabeto)\n";

    //Operações de C-String (muito usado para interagir com bibliotecas antigas de C)
    printf("Imprimindo com c_str(): %s\n", nome.c_str());
    
    char buffer[20];
    size_t copiados = nome.copy(buffer, 19, 0); // Copia até 19 caracteres
    buffer[copiados] = '\0'; // Adiciona terminador nulo de C-strings manualmente
    std::cout << "Copiado para array de char (copy): " << buffer << '\n';

    // 5. ITERATORS (Iteradores)
    
    std::cout << "\n--- ITERADORES ---\n";
    
    std::cout << "Iterando do inicio ao fim (begin/end): ";
    for (auto it = nome.begin(); it != nome.end(); ++it) {
        std::cout << *it << "-";
    }
    std::cout << '\n';

    std::cout << "Iterando de tras para frente (rbegin/rend): ";
    for (auto it = nome.rbegin(); it != nome.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << '\n';

    std::cout << "Leitura segura (cbegin/cend): ";
    for (auto it = nome.cbegin(); it != nome.cend(); ++it) {
        std::cout << *it;
    }
    std::cout << '\n';

    // LIMPANDO A STRING (Clear)
    nome.clear();
    std::cout << "\nApos clear(), o tamanho e: " << nome.length() << '\n';

    return 0;
}