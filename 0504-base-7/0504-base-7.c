char* convertToBase7(int num) {
    static char result[20];
    int i = 18;
    
    result[19] = '\0';

    if (num == 0)
        return "0";

    int negative = num < 0;

    if (negative)
        num = -num;

    while (num > 0) {
        result[i--] = (num % 7) + '0';
        num /= 7;
    }

    if (negative)
        result[i--] = '-';

    return &result[i + 1];
}