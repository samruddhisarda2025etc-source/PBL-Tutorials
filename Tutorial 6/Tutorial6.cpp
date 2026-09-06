#include <iostream>
using namespace std;
class Complex
{
private:
    float real, img;
public:
    void accept(float r, float i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }
    Complex operator+(Complex b)
    {
        Complex result;
        result.real = real + b.real;
        result.img = img + b.img;
        return result;
    }
    Complex operator-(Complex b)
    {
        Complex result;
        result.real = real - b.real;
        result.img = img - b.img;
        return result;
    }
    Complex operator*(Complex b)
    {
        Complex result;
        result.real = (real * b.real) - (img * b.img);
        result.img = (real * b.img) + (img * b.real);
        return result;
    }
    Complex operator/(Complex b)
    {
        Complex result;
        float denominator = (b.real * b.real) + (b.img * b.img);
        result.real = ((real * b.real) + (img * b.img)) / denominator;
        result.img = ((img * b.real) - (real * b.img)) / denominator;
        return result;
    }
};
int main()
{
    Complex C1, C2, C3;

    C1.accept(5, 3);
    C2.accept(5, 8);
    cout << "First complex number: ";
    C1.display();
    cout << "Second complex number: ";
    C2.display();

    C3 = C1 + C2;
    cout << "\nAddition: ";
    C3.display();

    C3 = C1 - C2;
    cout << "Subtraction: ";
    C3.display();

    C3 = C1 * C2;
    cout << "Multiplication: ";
    C3.display();

    C3 = C1 / C2;
    cout << "Division: ";
    C3.display();

    return 0;
}
