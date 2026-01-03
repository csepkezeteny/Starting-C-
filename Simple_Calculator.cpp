#include <iostream>



int main() {

    double x;
    double y;
    char choice;
    
        
    
    do {
        std::cout << "Please enter number 1: " << std::endl;
        std::cin >> x;

        std::cout << "Please enter number 2: " << std::endl;
        std::cin >> y;
        
        std::cout << "Please enter one from (+,-,/,*): " << std::endl;    
        std::cin >> choice;
        if(y == 0 && choice == '/') {
            std::cout << "You can't devide by 0! Try again!";
            break;
        }
    }while(choice != '+' && choice != '-' && choice != '/' && choice != '*');

    switch(choice) {
        case '+':
            std::cout << x+y;
            break;
        case '-':
            std::cout << x-y;
            break;
        case '*':
            std::cout << x*y;
            break;
        case '/':
            std::cout << x/y;
            break;
    }


    return 0;
}