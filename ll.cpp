#include "ll.h"

namespace power{
    const int mod = 1000000000;
}

ll::ll(): sign{ true }, num{ 0 }{};
ll::ll(int to): sign{ to < 0 }, num{ {to % power::mod, to / power::mod} }{};