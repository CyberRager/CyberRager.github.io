#include <iostream>
#include <cmath>
int main(){
    bool run = true;
    
    while(run == true){
    char operation;
    double nummer1;
    double nummer2;
    double product;
    char repeat;
    std::cout << "Enter an operation: (+)(-)(/)(*)\n";
    std::cin >> operation;
    std::cout << "Now enter the numbers \n";
    std::cin >> nummer1;
    std::cin >> nummer2;
    

    switch (operation)
    {
    case '+':
        product = nummer1 + nummer2;
        std::cout << "Your product is: " << product;

        break;
        case '-':
        product = nummer1 - nummer2;
        std::cout << "Your product is: " << product;
        break;
        case '/':
        product = nummer1 / nummer2;
        std::cout << "Your product is: " << product;
        break;
        case '*':
        product = nummer1 * nummer2;
        std::cout <<  "Your product is: " <<product;
        break;    
    default:
        std::cout<< "Invalid operation! ";
        break;
    
    }
    std::cout << " Wanna repeat this process again? Y/N \n";
    std::cin >> repeat;
    switch (repeat)
    {
    case 'Y':
        run= true;
        break;
    case 'N':
        run= false;
        break;
    
    default:
        std::cout << "Invalid input \n";
        run = false;
        break;
    }
}
}