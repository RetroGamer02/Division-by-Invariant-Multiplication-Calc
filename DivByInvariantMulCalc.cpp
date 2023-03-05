#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>


int main()
{
    int numerator, divisor, cont, inPowerOf, inPowerOfCpy;
    uint64_t result, outPowerOf;
    cont = 0;
    numerator = -1;
    divisor = 1;
    inPowerOf = 16;

    while (cont != 'n')
    { 
        printf("\nEnter numerator: -1 if unknown: ");
        scanf("%d", &numerator);

        printf("\nEnter divisor: ");
        scanf("%d", &divisor);

        printf("\nExample's: min 8 to max 63");
        printf("\nEnter power of: ");
        scanf("%d", &inPowerOf);

        inPowerOfCpy = inPowerOf;

        if (inPowerOf >= 8)
        {
            for (outPowerOf = 1; inPowerOf > 0; --inPowerOf)
            {
                outPowerOf <<= 1;
            }

            result = (outPowerOf / (uint64_t)divisor) + 1ULL;

            printf("\nResult: %llu", result);
            printf("\nHex Result: 0x%llX", result);

            if (numerator > 0)
            { 
                printf("\n New code in C would be: var = (%d * 0x%llX) >> %d", numerator, result, inPowerOfCpy);
            } else {
                printf("\n New code in C would be: var = (numerator * 0x%llX) >> %d", result, inPowerOfCpy);
            }

            printf("\nContinue? y/n: ");
            scanf("%s", &cont);

            if (cont == 'n')
                break;
        } else {
            printf("\nError: Power of must be greater or equal to 8.");
        }
    }

    return 0;
}