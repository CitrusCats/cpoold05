#include <limits.h>

int my_compute_factorial_it(int nb)
{
    long long result = 1;

    if (nb <= 0)
        return (nb == 0) ? 1 : 0;
    for (int i = 0; nb > 1; nb -= 2) {
        i = nb * (nb - 1);
        result *= i;
    }
    return (result < INT_MIN || result > INT_MAX) ? 0 : result;
}
