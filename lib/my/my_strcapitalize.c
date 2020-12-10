/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** hey. real programmers use vim
*/

int my_isup(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int my_isalpha(char c)
{
    return my_isup(c) || (c >= 'a' && c <= 'z');
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    char last = '\n';

    while (str[i]) {
        if (!my_isalpha(last) && my_isalpha(str[i])) {
            if (!my_isup(str[i]))
                str[i] = str[i] - 32;
            else if (last >= '0' && last <= '9')
                str[i] = str[i] + 32;    
        }
        else if (!my_isalpha(last) && (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = str[i] + 32;
        else if (my_isalpha(last) && my_isup(str[i]))
            str[i] += 32;
        last = str[i];
        i++;
    }
    return (str);
}
