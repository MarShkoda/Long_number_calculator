#pragma once
#include <iostream>
#include <vector>
#include <string>
class ll
{
private:
    std::vector<long long> num;  //Вектор цифр
    bool sign;              //0 - плюс, 1 - минус

public:
    ll();
    ll(int to);
    ll(long long to);
    ll(std::string to);
    ll operator -();
    friend bool operator ==(const ll &lval, const ll &rval);
    friend bool operator < (const ll& lval, const ll& rval);
    friend bool operator !=(const ll& lval, const ll& rval);
    friend bool operator > (const ll& lval, const ll& rval);
    friend bool operator >=(const ll& lval, const ll& rval);
    friend bool operator <=(const ll& lval, const ll& rval);
    friend ll operator +(const ll& lval, const ll& rval);       //Z-6
    friend ll operator -(const ll& lval, const ll& rval);       //Z-7
    friend ll operator *(const ll& lval, const ll& rval);       //Z-8
    friend ll operator /(const ll& lval, const ll& rval);       //Z-9
    friend ll operator %(const ll& lval, const ll& rval);       //Z-10

    ll abs();               //Z-1
    short poz();            //Z-2
    ll rsign();             //Z-3
    ll gcd(ll to);          //N-13

    ll fact();              //Факториал
    //Прочие задачи для целых чисел
};
