#include <stdio.h>


// Just before you look at the code, I know it sucks.
// I couldn't figure out how to do this neatly.
// Because you have to assign the variable in the case statment.
// This means the variable is only in scope of the case statment.
// Thus you have to do it in the case statment
// You can't use functions or pointers as you need to know the data types beforehand.
// Thus messy code but it works
int main() {
    unsigned short int integerVal1;
    unsigned short int integerVal2;


    printf("From:\n[0] signed char\n[1] unsigned char\n[2] short int (or short)\n[3] unsigned short int (or unsigned short)\n[4] int\n[5] unsigned int\n[6] long int (or long)\n[7] unsigned long int (or unsigned long)\n[8] long long int (or long long)\n[9] unsigned long long int (or unsigned long long)\n[10] float\n[11] double\n[12] long double\n");

    printf("Enter the first corresponding type index: ");
    scanf("%hu", &integerVal1);

    printf("Enter the second corresponding type index: ");
    scanf("%hu", &integerVal2);

    printf("Enter original Value: ");

    switch (integerVal1) {
        case 0: {
            signed char originalValue;
            scanf("%hhd", &originalValue);
            printf("Original Signed Char Value: %hhd\n", originalValue);
            switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 1: {
            unsigned char originalValue;
            scanf(" %hhu", &originalValue);
            printf("Original Unsigned Char Value: %hhu\n", originalValue);
            switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }        
            break;
        }
        case 2: {
            short int originalValue;
            scanf(" %hd", &originalValue);
            printf("Original Short Int Value: %hd\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 3: {
            unsigned short int originalValue;
            scanf(" %hu", &originalValue);
            printf("Original Unsigned Short Int Value: %hu\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 4: {
            int originalValue;
            scanf(" %d", &originalValue);
            printf("Original Int Value: %d\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 5: {
            unsigned int originalValue;
            scanf(" %u", &originalValue);
            printf("Original Unsigned Int Value: %u\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 6: {
            long int originalValue;
            scanf(" %ld", &originalValue);
            printf("Original Long Int Value: %ld\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 7: {
            unsigned long int originalValue;
            scanf(" %lu", &originalValue);
            printf("Original Unsigned Long Int Value: %lu\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 8: {
            long long int originalValue;
            scanf(" %lld", &originalValue);
            printf("Original Long Long Int Value: %lld\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 9: {
            unsigned long long int originalValue;
            scanf(" %llu", &originalValue);
            printf("Original Unsigned Long Long Int Value: %llu\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 10: {
            float originalValue;
            scanf(" %f", &originalValue);
            printf("Original Float Value: %f\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 11: {
            double originalValue;
            scanf(" %lf", &originalValue);
            printf("Original Double Value: %lf\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        case 12: {
            long double originalValue;
            scanf(" %Lf", &originalValue);
            printf("Original Long Double Value: %Lf\n", originalValue);
                    switch (integerVal2) {
            case 0: {
                printf("Converted to Signed Char Value: %hhd\n", originalValue);
                break;
            }
            case 1: {
                printf("Converted to Unsigned Char Value: %hhu\n", originalValue);
                break;
            }
            case 2: {
                printf("Converted to Short Int Value: %hd\n", originalValue);
                break;
            }
            case 3: {
                printf("Converted to Unsigned Short Int Value: %hu\n", originalValue);
                break;
            }
            case 4: {
                printf("Converted to Int Value: %d\n", originalValue);
                break;
            }
            case 5: {
                printf("Converted to Unsigned Int Value: %u\n", originalValue);
                break;
            }
            case 6: {
                printf("Converted to Long Int Value: %ld\n", originalValue);
                break;
            }
            case 7: {
                printf("Converted to Unsigned Long Int Value: %lu\n", originalValue);
                break;
            }
            case 8: {
                printf("Converted to Long Long Int Value: %lld\n", originalValue);
                break;
            }
            case 9: {
                printf("Converted to Unsigned Long Long Int Value: %llu\n", originalValue);
                break;
            }
            case 10: {
                printf("Converted to Float Value: %f\n", originalValue);
                break;
            }
            case 11: {
                printf("Converted to Double Value: %lf\n", originalValue);
                break;
            }
            case 12: {
                printf("Converted to Long Double Value: %Lf\n", originalValue);
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
