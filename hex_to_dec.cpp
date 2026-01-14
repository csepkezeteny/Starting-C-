#include <iostream>
#include <cmath>
//enum alphabets {A=10, B=11, C=12, D=13, E=14, F=15};
char alphabets[6] = {'A','B','C','D','E','F'};
int numbers[6] = {10, 11, 12, 23, 14, 15};
int main() {

    std::string num = "123BF"; //hexadecimal formated number to convert to decimal
    int result = 0;
    int index = num.length();

    for(char n : num) {
        if(n >= '0' && n <= '9') {
            result = result * 16 + (n - '0');

        } else if(n >= 'A' && n <= 'F'){

            int i = 0;
            for(char x : alphabets) {
                if(x == n) {
                    std::cout << numbers[i];
                    result = result * 16 + (n - 'A' + 10);
                };
                i++;
            }
        }
        std::cout << std::endl;
    }
    std::cout << "A szam decimalis alakban: " << result;
    return 0;
}