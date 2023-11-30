#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

class Graphic{

    private:
        double y = 0;
        double pi = 3.1415926;

    public:
        float x = 0;
        int x = -8;
        int c = 1;
        string s;

    float probeg(){
        if (x >-9 && x <= -5){
            y = sqrt(4- (x +7)*(x +7 )) +2;
        }
        else if (x > -5 && x <=-4){
            y = 2;
        }

        else if (x > -4 && x <= 0){
            y = 0.5*x;
        }

        else if (x > 0 && x <=pi){
            y = sin(x);
        }
  
        else if (x > pi && x <= 5){
            y = tan(45)*x;
        }
        
        
        // Код для вычисления Y при X для 3 варианта
        ofstream prout("text2.txt");

        for (x; x < 5; x++)
        {
            prout << c << " ";
            c++;
            y = probeg(x);
            prout << y << "\n";
        }
        prout.close();
        ifstream prin("text2.txt");
        while (getline(prin, s))
        {
            cout << s;
            cout << "\n";
        };
        prin.close();

    }
};
    

int main()
{
    Graphic graphic;

    graphic.probeg();
 
    return 0;
}
