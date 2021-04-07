#include "ll.h"

namespace power{
    const int mod = 1000000000;
}

ll::ll(): sign{ false }, num{ 0 }{};
ll::ll(int to): sign{ to < 0 }{
    if (sign) to *= -1;
    num.insert(num.begin(), to % power::mod);
    num.insert(num.begin(), to / power::mod);
};
ll::ll(long long to): sign{ to < 0 }{
    if (sign) to *= -1;
    num.insert(num.begin(), to % power::mod);
    to /= power::mod;
    num.insert(num.begin(), to % power::mod);
    num.insert(num.begin(), to / power::mod);
};
ll::ll(std::string to){
    std::string tmp_string = to.substr(to.length()-20, 21);
    // do for() by 21 element strings while != endofstr
    long long digit = std::stoll(to);
    sign = (digit<0)? true:false;
    if (sign) digit *= -1;
    num.insert(num.begin(), digit % power::mod);
    digit /= power::mod;
    num.insert(num.begin(), digit % power::mod);
    num.insert(num.begin(), digit / power::mod);
};
ll::ll(bool sigN, std::vector<long long> nuM): sign{ sigN }, num{ nuM }{};

int main(void)
{
    std::string digit_str = "-2233720368547758082";
    ll digit = ll(digit_str);
    if(digit.getSign()) std::cout << '-';
    for(long long element: digit.getVec()){
        std::cout << element;
    }
    return 0;
}