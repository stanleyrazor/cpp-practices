# include "uniform.h"
# include <iostream>
# include <cmath>

using namespace std;

double unif() {
    return rand() / double(RAND_MAX);
}

double unif(double a, double b) {
    return unif()*(b-a) + a;
}

long unif(long a) {
    if (a < 0) a = a*-1;
    if (a == 0) return 0;
    return (long(unif()*a)) + 1;
}

void seed() {
    srand(10);
}
