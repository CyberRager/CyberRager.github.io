#include <iostream>
#include <vector>
#include <cmath>

int main (){
    bool run = true;


    do
    {
        double seite1;
        double seite2;
        double seite3;
        double radius1;
        double PI = 3.14;
        double rando;
        char repeat;
    
        std::cout << "Fuegen sie die Seite 1 ein! "<< '\n';
        std::cin >> seite1;
        std::cout << "Fuegen sie die Seite 2 ein! "<< '\n';
        std::cin >> seite2;   
        double flaeche = seite1*seite2;
        double hypothenuse = sqrt(pow(seite1,2) + pow(seite2,2));
        std::cout << "Die Flaeche betraegt: " << flaeche << " FE" <<'\n' << "Die Hypothenuse betraegt: " << hypothenuse << " LE" <<'\n';
        std::cout << "Fuegen sie die Seite 3 ein! "<< '\n';
        std::cin >> seite3;
        double volumen = flaeche * seite3;
        double pyramide = volumen * 1/3;
        double tetraeder = ((flaeche/2)*seite3)/3;
        std::cout << "Das Volumen des Wuerfels betraegt: " << volumen << " VE" << '\n'<< "Das Volumen der Pyramide betraegt: " << pyramide << " VE" << '\n' << "Das Volumen des Tetraeders betraegt: " << tetraeder << " VE" <<  '\n';
        std::cout << "Fuegen sie die Laenge des Radius ein! "<< '\n';
        std::cin>> radius1;
        double umfang = 2* radius1 * PI;
        double flaechekreis = (pow(radius1,2)) *2;
        double volumenkugel = (pow(radius1,3)) * (4/3) * PI;
        double flaechekugel = 4*PI* (pow(radius1,2));
        std::cout << "Das Umfang betraegt: " << umfang << " LE" << '\n'<< "Die Flaeche des Kreises betraegt: " << flaechekreis << " FE" << '\n' << "Das Volumen des Kugels betraegt: " << volumenkugel << " VE" <<'\n' << "Die Flaeche des Kugels betraegt: " << flaechekugel << " FE" <<  '\n';
        //std::cout << "Fuegen sie rando ein! "<< '\n';
        //std::cin >> rando; 
        
        std::cout<< "Wollen sie die Mathe wiederholen? (J/N) ";
        std::cin>> repeat;

        switch (repeat)
        {
        case 'J':
            run= true;
            break;
        case 'N':
            run = false;

            break;
        
        default:
            std::cout << "Invalid input \n";
            run = false;
            break;
        } 
       
    } while (run == true);
    
}