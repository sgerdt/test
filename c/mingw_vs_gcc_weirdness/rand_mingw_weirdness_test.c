
/**
 * This is a breaf test as mingw had some seriously weird macros,
 * presumably correct since it was knowingly even moved around as
 * was valid in source code, but caused an endless loop in another
 * project.
 *
 * GCC/Linux seems unaffected by this nonsense
 *
 * So the only remaining question is, how does mingw validate that
 * macro.. Not really my concern so not bothering to compare
 * assembly. But for anyone curious google for macro
 * "#define rand_r(__seed) (__seed == __seed ? rand () : rand ())"
 * and you'll find it now-a-days in mingw-w64-headers/crt/stdlib.h
 */
#include <stdio.h>
#include <stdlib.h>

#define STR(x)   #x
#define SHOW_DEFINE(x) printf("%s=%s\n", #x, STR(x))

#define rand_r(__seed) (__seed == __seed ? rand () : rand ())
#define weird(__seed) (__seed == __seed ? printf("true\n") : printf("false\n"))
int main () {
    printf("Testing what macro does in this case: %i\n", rand_r(15));
    SHOW_DEFINE(rand_r(0.24));
    printf("Testing what macro does in this case:");
    weird(15.2); 
    SHOW_DEFINE(weird(4));
}

