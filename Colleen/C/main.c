#include <stdio.h>
//Outside comment
void test(){}
int main(){test();/*Inside comment*/char str[] = "#include <stdio.h>%c//Outside comment%cvoid test(){}%cint main(){test();/*Inside comment*/char str[] = %c%s%c;printf(str,10,10,10,34,str,34,10);}%c";printf(str,10,10,10,34,str,34,10);}
