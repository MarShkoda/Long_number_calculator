#include "ll.h"

/**\brief оператор > для двух ll чисел
 * Сравнивает последовательно сначала знаки чисел, потом их длину, потом начиная с наибольшего сравнивает их посимвольно
 * Не зависит от других функций и операторов
 * Асимптотика по времени - O(n), константа асимптотики 2
 * Асимптотика по памяти - O(1), константа асимптотики 3
 * \param lval const ll& левое число
 * \param rval const ll& правое число
 * \return bool true, если левое больше правого, иначе false
 */
bool operator >(const ll& lval, const ll& rval)
{   if (lval.sign!=rval.sign)
        return lval.sign<rval.sign;
    auto lsize=lval.num.size();
    auto rsize=rval.num.size();
    if (lsize!=rsize)
        return ((lsize>rsize)^lval.sign);
    for (int i=0; i<lsize; i++)
        if (lval.num[i]!=rval.num[i])
            return (lval.num[i]>rval.num[i])^lval.sign;
    return 0;
}
/**\brief оператор < для двух ll чисел
 * Сравнивает последовательно сначала знаки чисел, потом их длину, потом начиная с наибольшего сравнивает их посимвольно
 * Зависит от операторов > и !=
 * Асимптотика по времени - O(n), константа асимптотики 2
 * Асимптотика по памяти - O(1), константа асимптотики 3
 * \param lval const ll& левое число
 * \param rval const ll& правое число
 * \return bool true, если левое меньше правого, иначе false
 */bool operator < (const ll& lval, const ll& rval)
{   return (!(lval>rval) && lval!=rval);
}
