#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imag;
public:
    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";

        cout << endl;
    }
    Complex add(Complex c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    Complex subtract(Complex c)
    {
        Complex result;
        result.real = real - c.real;
        result.imag = imag - c.imag;
        return result;
    }
    Complex multiply(Complex c)
    {
        Complex result;
        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);
        return result;
    }
    Complex divide(Complex c)
    {
        Complex result;
        float denominator = (c.real * c.real) + (c.imag * c.imag);
        result.real = ((real * c.real) + (imag * c.imag)) / denominator;
        result.imag = ((imag * c.real) - (real * c.imag)) / denominator;
        return result;
    }
    Complex conjugate()
    {
        Complex result;
        result.real = real;
        result.imag = -imag;

        return result;
    }
};
int main()
{
    Complex c1, c2, result;
    cout << "Enter first complex number:" << endl;
    c1.input();
    cout << "\nEnter second complex number:" << endl;
    c2.input();

    result = c1.add(c2);
    cout << "\nAddition: ";
    result.display();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.display();

    result = c1.multiply(c2);
    cout << "Multiplication: ";
    result.display();

    result = c1.divide(c2);
    cout << "Division: ";
    result.display();

    result = c1.conjugate();
    cout << "Conjugate of first complex number: ";
    result.display();

    return 0;
}
