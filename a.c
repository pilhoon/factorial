#include <stdio.h>
#include <gmp.h>

main() {
    mpz_t z;
    mpz_init(z);
    mpz_fac_ui(z, 1000000000);
    gmp_printf("%Zd\n", z);
}
