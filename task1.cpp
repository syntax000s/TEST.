#include <iostream>
void userInput();
int max(int Number_one, int Number_two);
void outputAnswer(int maxNumber);
int main() {
    userInput();
    return 0;
}
void userInput() {
    int Number_one, Number_two;
    
    std::cin >> Number_one >> Number_two;
    outputAnswer(max(Number_one, Number_two));
}
int max(int Number_one, int Number_two) {
    if (Number_one >= Number_two) return Number_one;
    else return Number_two;
}
void outputAnswer(int maxNumber) {
    std::cout << maxNumber;
}
