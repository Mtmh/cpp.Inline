#include <iostream>

using namespace std;

class Punto
{
public:
    Punto(double a = 0.0, double b = 0.0) // inline  no hace falta ponerlo lo detecta
    {
        x = a;
        y = b;
    }

    double obtine_x() const
    {
        return x;
    }
    double obtine_y() const
    {
        return y;
    }
    void cambia_x(double a)
    {
        x = a;
    }
    void cambia_y(double b)
    {
        y = b;
    }

private:

    double x, y;
};

int main()
{
    Punto A, B;

    A.cambia_x(0.0);
    B.cambia_y(-4.5);


    return 0;
}
