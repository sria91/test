#include <stdio.h>
#include <errno.h>
#include <assert.h>

int main() {
    printf("EDOM %d\n", EDOM);
    printf("EILSEQ %d\n", EILSEQ);
    printf("ERANGE %d\n", ERANGE);
    assert(1 == 0);
}
