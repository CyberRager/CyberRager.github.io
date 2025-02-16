# include <iostream>
# include <vector>

int main(){
    char repeat;
    bool run = true;
    do
    {
        int factorial;
        int factorial2 = 1;
        std:: cout<< "Enter an integer for a factorial!"<< '\n';
        std::cin>> factorial;
        for (int i = factorial; i >= 1; i--){  
        std::cout<<"I = " << i<< '\n';
        factorial2 = factorial2 * (i);
        std::cout<<factorial2<< '\n';
    }   
    std::cout<<"Repeat? Y/N ";
    std::cin>> repeat;
    switch (repeat)
    {
    case 'Y':
        run = true;
        break;
    case 'N':
        run = false;
        break;   
    
    default:
    std::cout<<"Invalid input ";
        run = false;
        break;
    }
    }while (run == true);

}