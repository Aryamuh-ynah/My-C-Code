#include <math.h>
#include <stdio.h>

int main()
{
    double p0, p1, p, pn, e, kt, power;
    e=2.7182;
    pn = 60000;
    kt =  (0.0157*30);
    power = pow(e,kt);
    p = pn * power;

    printf("The Total Population: %lf\n", p);
    printf("The Population increase: %lf\n", p-30000);

	return 0;
}
