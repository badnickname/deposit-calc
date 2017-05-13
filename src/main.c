#include <stdio.h>
#include "deposit.h"

int main()
{
    printf("Доход: %0.3lf\n",countDohod(getVklad(), getSrok()));
    return 0;
}
