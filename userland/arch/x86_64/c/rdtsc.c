/* https://github.com/cirosantilli/linux-kernel-module-cheat#rdtsc */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <x86intrin.h>

int main(void) {
    uintmax_t val;
    val = __rdtsc();
    printf("%ju\n", val);
    return EXIT_SUCCESS;
}
