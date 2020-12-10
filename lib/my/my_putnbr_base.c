/*
** EPITECH PROJECT, 2020
** my_putnbr_base
** File description:
** put_nbr_base of the Lib Workshop
*/

int	my_putnbr_base(int nbr, char *base)
{
    int	calcul = 0;
    int	chiffre;

    if (nbr < 0) {
        my_putchar('-');
        my_putnbr_base(-nbr, base);
    } else {
        chiffre = nbr % my_strlen(base);
        calcul = nbr / my_strlen(base);
        if (calcul != 0) {
	        my_putnbr_base(calcul, base);
        }
        my_putchar(base[chiffre]);
    }
  return 0;
}