#include <unistd.h>

void ft_even_caps(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        if ((index % 2 == 0) && (str[index] >= 'a' && str[index] <= 'z')) {
            // Convert to uppercase
            str[index] -= 32;
        }
        write(1, &str[index], 1);
        index++;
    }
}

int main() {
    char input[] = "tHe daY is Bright";
    ft_even_caps(input);
    return 0;
}
