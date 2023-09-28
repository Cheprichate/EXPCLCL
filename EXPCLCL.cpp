#include <iostream>
int e;

int main(){
    setlocale(LC_ALL, "Russian");
    std::cout << "Сколько опыта вы получили ?";
    std::cin >> e;
    if (e < 1000) {
        std::cout << "У вас 1 уровень.";
    }
    else if (e <= 2500){
        std::cout << "У вас 2 уровень.";
    }
    else if (e <= 5000){
        std::cout << "У вас 3 уровень.";
    }
    if (e > 5000){
        std::cout << "У вас 4 уровень.";
    }
}