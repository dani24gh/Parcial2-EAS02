#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
};

class Cuadrado: public Figura
{
    Cuadrado(int b, int c): Figura(b, 0){
        this->setPerimetro(b*4);
    }
};

class Rectangulo: public Figura
{
    Rectangulo(int b, int h): Figura(b, h){
        this->setPerimetro(b*h);
    }
};

class Triangulo: public Figura
{
    Triangulo(int b): Figura(b, 0){
        int l = b+b+b;
        this->setPerimetro(l);
    }
};



int main () {

    Cuadrado s(5,0);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Triangulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}

Figura::Figura()
{
    int b = 0;
    int h = 0;
    int p = 0.0;
}

Figura::Figura(int b, int h)
{
    this->b = b;
    this->h = h;
}

void Figura::setPerimetro(float a)
{
    this->p = p;
}

float Figura::getPerimetro()
{
    return this-> p;
}