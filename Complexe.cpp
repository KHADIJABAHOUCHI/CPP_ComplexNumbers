#include "Complexe.h"
#include "Cmath"
#include <iostream>
using namespace std;

Complexe::Complexe()
{
    this->re = 0;
    this->img = 0;
}

Complexe::Complexe(double r, double i)
{
    this->re = r;
    this->img = i;
}

void Complexe::afficher() const
{
    cout <<this->re << "+" << this->img << "i\n";
    
}

double Complexe::module() const
{
    return sqrt(pow(this->re,2)+pow(this->img,2));
}

Complexe Complexe::conjugue() const
{
    Complexe c;
    c.re = this->re;
    c.img = -this->img;
    return c;
}

Complexe Complexe::operator+(const Complexe& c) const
{
    Complexe o;
    o.re = c.re + this->re;
    o.img = c.img + this->img;
    return o;
}

Complexe Complexe::operator+(double p) const
{
    Complexe o;
    o.re = p + this->re;
    o.img = this->img;
    return o;
}

Complexe Complexe::operator-(const Complexe& p) const
{
    Complexe c;
    c.re = this->re - p.re;
    c.img = this->img - p.img;
    return c;
}

Complexe Complexe::operator-(double f) const
{
    Complexe H;
    H.re = this->re - f;
    H.img = this->img;
    return H;
}

Complexe Complexe::operator*(const Complexe& u) const
{
    Complexe g;
    g.re = this->re * u.img - this->img * u.img;
    g.img = this->re * u.img + this->img * u.re;
    return g;
}

Complexe Complexe::operator*(double k) const
{
    Complexe j;
    j.re = k * this->re;
    j.img = k * this->img;
    return j;
}
Complexe Complexe::operator/(const Complexe& c)const
{
    double denominator = c.re * c.re + c.img * c.img;
    Complexe j;
    j.re = (this->re * c.re + this->img * c.img) / denominator;
    j.img = (this->img * c.re - this->re * c.img) / denominator;
    return j;
}
bool Complexe::operator==(const Complexe& c)const
{
    if (c.re == this->re && c.img == this->img)
        return true;
    return false;
    
}
