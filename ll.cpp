#include "ll.h"

/**\brief оператор > для двух ll чисел
 * Сравнивает последовательно сначала знаки чисел, потом их длину, потом начиная с наибольшего сравнивает их посимвольно
 * Не зависит от других функций и операторов
 * Асимптотика по времени - O(n), константа асимптотики 2
 * Асимптотика по памяти - O(1), константа асимптотики 2
 * \param lval const ll& левое число
 * \param rval const ll& правое число
 * \return bool true, если левое больше правого, иначе false
 */
bool operator >(const ll& lval, const ll& rval)
{   if (lval.sign!=rval.sign)
        return lval.sign<rval.sign;
    auto lsize=lval.num.size();
    if (lsize!=rval.num.size())
        return ((lsize>rval.num.size())^lval.sign);
    for (int i=0; i<lsize; i++)
        if (lval.num[i]!=rval.num[i])
            return (lval.num[i]>rval.num[i])^lval.sign;
    return 0;
}
/**\brief оператор < для двух ll чисел
 * Сравнивает последовательно сначала знаки чисел, потом их длину, потом начиная с наибольшего сравнивает их посимвольно
 * Зависит от операторов > и !=
 * Асимптотика по времени - O(n), константа асимптотики 2
 * Асимптотика по памяти - O(1), константа асимптотики 2
 * \param lval const ll& левое число
 * \param rval const ll& правое число
 * \return bool true, если левое меньше правого, иначе false
 */
 bool operator < (const ll& lval, const ll& rval)
{   return rval>lval;
}

template<typename T>
bool operator >(const T& lval, const ll& rval)
{   ll lv(lval);
    return lv>rval;
}

template<typename T>
bool operator >(const ll& lval, const ll& rval)
{   ll rv(rval);
    return lval>rv;
}

template<typename T>
bool operator <(const T& lval, const ll& rval)
{   ll lv(lval);
    return lv<rval;
}

template<typename T>
bool operator <(const ll& lval, const T& rval)
{   ll rv(rval);
    return lval<rv;
}

bool operator ==(const ll &lval, const ll &rval){
    if (lval.sign != rval.sign){
        return false;// не равны
    else{
        unsigned int len1 = lval.num.size();
        if (len1 != rval.num.size()) return false; // не равны
        else
            for (unsigned int i = 0; i<len1; i++)
                if (lval.num[i] != rval.num[i])
                    return false;
            return true;
    }
}

bool operator !=(const ll& lval, const ll& rval){
    return !(lval == rval);
}

template<typename T> //объявление параметра шаблона функции
T operator >= (const T& lval, const ll& rval)
{   return !(lval>rval);
}

template<typename T>
T operator >= (const T& lval, const ll& rval)
{   return !(lval<rval);
}

template<typename T>
T operator <= (const T& lval, const ll& rval)
{   return !(lval>rval);
}

template<typename T>
T operator <= (const T& lval, const ll& rval)
{   return !(lval>rval);
}

short ll::poz()
{   if (this->num[0] == 0) return 0;
    else if (this->sign) return 1;
    else if (!this->sign) return 2;
}
