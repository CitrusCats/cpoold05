#include <limits.h>

int my_compute_factorial_rec(int nb)
{
    long long result = 1;

    if (nb <= 1)
        return (nb < 0) ? 0 : 1;
    return (result < INT_MIN || result > INT_MAX) ? 0 : (nb * my_compute_factorial_rec(nb - 1));
}
