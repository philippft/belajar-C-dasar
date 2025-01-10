#include <stdio.h>
#include <stdlib.h>
int main() {
    int iData[11], iC;
    for (iC = 0; iC < 11; iC++) {
        iData[iC] = iC * iC;
        printf('%d Kuadrat adalah %d\n', iC, iData[iC]);
    }
}