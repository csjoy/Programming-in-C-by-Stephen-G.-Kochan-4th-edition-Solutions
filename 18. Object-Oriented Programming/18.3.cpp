#include <iostream>

class Fraction {
    private:
        int numerator;
        int denominator;

    public:
        void setDenominator(int denom);
        int Numerator();
        int Denominator();
        void print(Fraction f);
        void setNumerator(int num){
            numerator = num;
        }
};



void Fraction::setDenominator(int denom){
    denominator = denom;
}

int Fraction::Numerator(){
    return numerator;
}

int Fraction::Denominator(){
    return denominator;
}

void Fraction::print(Fraction f){
    std::cout << "The value of the fraction is " << numerator << '/' << denominator << '\n';
}

int main()
{
    Fraction myFract;
    myFract.setNumerator(1);
    myFract.setDenominator(3);
    myFract.print(myFract);

    return 0;
}
