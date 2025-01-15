#include "complex.h"
#include <stdexcept>
#include <iomanip>
#include <sstream>

//constructor

Complex::Complex(double realNum, double imagNum): realNum(realNum), imagNum(imagNum){

}

Complex Complex::operator+(const Complex &o) const{
    return Complex(realNum + o.realNum , imagNum + o.imagNum);

}

Complex Complex::operator-(const Complex &o) const{
    return Complex(realNum - o.realNum, imagNum - o.imagNum);
}

Complex Complex:: operator*(const Complex &o) const{
    double real = realNum * o.realNum - imagNum * o.imagNum;
    double imag = realNum * o.imagNum + imagNum * o.realNum;
    return Complex(real,imag);
}

Complex Complex::operator/(const Complex &o)const{
    double deno = o.realNum * o.realNum + o.imagNum * o.imagNum;
    if(deno == 0){
        throw std::runtime_error("Division by zero Chief");
    }
    double real = (realNum * o.realNum + imagNum * o.imagNum)/deno;
    double imag = (imagNum * o.realNum - realNum * o.imagNum)/deno;
    return Complex(real,imag);
}

Complex Complex :: operator+(double num)const{
    return Complex(realNum + num, imagNum);
}

Complex Complex :: operator-(double num)const{
    return Complex(realNum - num, imagNum);
}

Complex Complex ::operator*(double num)const{
    return Complex(realNum * num, imagNum* num);
}

Complex Complex ::operator/(double num)const{
    if(num == 0){
        throw std::runtime_error("Division by zero Chief");
    }
    return Complex(realNum/num, imagNum/num);
}

//Friend operators

Complex operator+(double num, const Complex &c){
    return c + num;
}

Complex operator-(double num, const Complex &c){
    return Complex(num)-c;
}

Complex operator*(double num, const Complex &c){
    return c *num;
}

Complex operator/(double num, const Complex &c){
    double deno = c.realNum * c.realNum + c.imagNum * c.imagNum;
    if(deno == 0){
        throw std::runtime_error("Division by zero Chief");
    }
    double real = (num * c.realNum)/ deno;
    double imag = (-num * c.imagNum)/deno;
    return Complex(real, imag);
}

ostream &operator<<(ostream &os, const Complex &c) {
    std::ostringstream result;
    result << std::fixed << std::setprecision(1);
    result << "(" << c.realNum;
    if (c.imagNum >= 0) {
        result << "+" << c.imagNum;
    } else {
        result << c.imagNum;
    }
    result << "j)";
    os << result.str();
    return os;
}