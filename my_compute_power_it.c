#include <limits.h>

int my_compute_power_it(int nb, int p)
{
    long long result = nb;

    if (p <= 0)
        return (p == 0) ? 1 : 0;
    for (; p > 1; p--);
    return (result < INT_MIN || result > INT_MAX) ? 0 : (result * nb);
}
