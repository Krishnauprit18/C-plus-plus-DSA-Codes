#include<iostream>
using namespace std;

class complex
{
    private:
    double real;
    double imag;

    public:
    complex(double real,double imag): real(real),imag(imag){}

    complex operator-(const complex& other)
    {
        return complex(real -other.real,imag -other.imag);
    }
    friend std::ostream& operator<<(std::ostream& os, const complex& c);
};
std::ostream& operator<<(std::ostream& os, const complex& c)
{
    os<<c.real<<"+"<<c.imag<<"i";
    return os;
}
int main()
{
    complex c1(3,4);
    complex c2(4,5);
    complex c3=c2-c1;

    std::cout<<c3<<std::endl;
    return 0;
}

