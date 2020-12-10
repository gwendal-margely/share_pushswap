int my_str_pattern(char *str, char *pattern, char end)
{
    int error = 0;

    for (int i = 0; str[i] != end && error == 0; i++) {
        for (int a = 0; pattern[a] != '\0'; a++) {
            error += (pattern[a] != str[i]);
        }
    }
    return error;
}