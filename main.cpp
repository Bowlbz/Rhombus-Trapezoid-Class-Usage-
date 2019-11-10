//Class Building **** Bowlby, DR.T Oct 22, 2019
//COSC 1437-58001
#include <iostream>
#include <string>
using namespace std;

class Rhombus
{
  private:
    double base;
    double height;
  public:
    void setbase (double);
    double getbase() const;
    void setheight (double);
    double getheight() const;
    double calcArea() const;
};

class Trapezoid
{
   private:
      double base1;
      double base2;
      double height;
   public:
      void setbase1(double);
      double getbase1() const;
      void setbase2(double);
      double getbase2() const;
      void setheight(double);
      double getheight() const;
      double calcArea() const;
};

//Function Definitions ***********
void Rhombus::setbase(double b)
{
  base = b;
}

double Rhombus::getbase() const
{
  return base;
}

void Rhombus::setheight (double h)
{
  height = h;
}

double Rhombus::getheight() const
{
  return height;
}

double Rhombus::calcArea() const
{
  return (base * height);
}

//************Trapezoid Definitions ************
void Trapezoid::setbase1 (double b1)
{
  base1 = b1;
}

double Trapezoid::getbase1 () const
{
  return base1;
}

void Trapezoid::setbase2 (double b2)
{
  base2 = b2;
}

double Trapezoid::getbase2 () const
{
  return base2;
}

void Trapezoid:: setheight (double h)
{
  height = h;
}

double Trapezoid::getheight () const
{
  return height;
}

double Trapezoid::calcArea() const
{
  return ((base1 + base2) / 2.0) * height;
}



int main() 
{
  Rhombus r;
  r.setheight(2.75);
  r.setbase(7.72);

  cout << "\nThe Height of your Rhombus is : " << r.getheight() << endl;
  cout << "The Base of your Rhombus is : " << r.getbase() << endl;
  cout << "\nThe Area of your Rhombus is : " << r.calcArea() << endl;

  //Trapezoid ****************************

  Trapezoid t;
  t.setbase1(12.2);
  t.setbase2(5.0);
  t.setheight(7.9);

  cout << "\nThe Base1 of your Trapezoid is: " << t.getbase1() << endl;
  cout << "The Base2 of your Trapezoid is: " << t.getbase2() << endl;
  cout << "The Height of our Trapezoid is: " << t.getheight() << endl;
  cout << "\n The Area of your Trapezoid is: " << t.calcArea() << endl;

  return 0;
}