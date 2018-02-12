#include "ft_printf.h"

#include <stdio.h>
#include <locale.h>

int main_()
{
	printf("%d\n" ,ft_printf("ft_printf : "));
	printf("%d\n" ,printf("no_printf : "));
	return (0)
}

int	main(void)
{
	setlocale(LC_ALL, "");
	printf("%d\n" ,ft_printf("hello tests"));
	printf("%d\n" ,printf("hello tests"));
	printf("%d\n" ,ft_printf("test test test 		test lol"));
	printf("%d\n", printf("test test test 		test lol"));
	printf("%d\n" ,ft_printf(""));
	printf("%d\n", printf(""));
	printf("%d\n" ,ft_printf(""));
	printf("%d\n", printf(""));
	printf("%d\n" ,ft_printf("%c wooow", 'z'));
	printf("%d\n" ,printf("%c wooow", 'z'));
	printf("%d\n" ,ft_printf("%C", L'a'));
	printf("%d\n", printf("%C", L'a'));
	printf("%d\n" ,ft_printf("%C xDD", L'𐀀'));
	printf("%d\n" ,printf("%C xDD", L'𐀀'));
	printf("%d\n" ,ft_printf("%i", 0));
	printf("%d\n",printf("%i", 0));
	printf("%d\n" ,ft_printf("%d, %d", 245, -952));
	printf("%d\n" ,printf("%d, %d", 245, -952));
	printf("%d\n" ,ft_printf("%S", L"😼"));
	printf("%d\n", printf("%S", L"😼"));
	printf("%d\n" ,ft_printf("miaouu%S", L"😼"));
	printf("%d\n",printf("miaouu%S", L"😼"));
	printf("%d\n" ,ft_printf("%S", L"miaou😼"));
	printf("%d\n",printf("%S", L"miaou😼"));
	printf("%d\n" ,ft_printf("%S", L"éaaa"));
	printf("%d\n", printf("%S", L"éaaa"));
	printf("%d\n" ,ft_printf("Unicode comprises %C entries in the range", 1114111));
	printf("%d\n",printf("Unicode comprises %C entries in the range", 1114111));	
	printf("%d\n" ,ft_printf("HOY %x %X %o %u %i", 6879892, 65456465, 998877552, 65465888, -99999));
	printf("%d\n",printf("HOY %x %X %o %u %i", 6879892, 65456465, 998877552, 65465888, -99999));
	int nbr = 42;
	printf("%d\n" ,ft_printf("%p", &nbr));
	printf("%d\n" ,printf("%p", &nbr));
	printf("%d\n" ,ft_printf("ooo %p", &nbr));
	printf("%d\n", printf("ooo %p", &nbr));
	printf("%d\n" ,ft_printf("%S", L"é"));
	printf("%d\n",printf("%S", L"é"));
	printf("%d\n" ,ft_printf("%S", L"ooo ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € dddd"));
	printf("%d\n",printf("%S", L"ooo ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € dddd"));
	printf("%d\n" ,ft_printf("%s %c", "Coucou", 'z'));
	printf("%d\n",printf("%s %c", "Coucou", 'z'));
	int nbr2 = 99;
	printf("%d\n" ,ft_printf("666%p", &nbr2));
	printf("%d\n" ,printf("666%p", &nbr2));
	printf("%d\n" ,ft_printf("%"));
	printf("%d\n" ,printf("%"));
	printf("%d\n" ,ft_printf("%%"));
	printf("%d\n" ,printf("%%"));
	printf("%d\n" ,printf("%%%%%%%%"));
	printf("%d\n" ,ft_printf("%%%%%%%%"));
	printf("%d\n" ,printf("%%aa%%cc%%000%%"));
	printf("%d\n" ,ft_printf("%%aa%%cc%%000%%"));
	printf("%d\n" ,printf("a%0cc%%000%%"));
	printf("%d\n" ,ft_printf("a%0cc%%000%%"));
	printf("%d\n" ,printf("a%1cc%%000%%"));
	printf("%d\n" ,printf("a%1cc%%000%%"));
	printf("%d\n" ,ft_printf("a%2cc%%000%%"));
	printf("%d\n" ,printf("a%2cc%%000%%"));
	printf("%d\n" ,ft_printf("%-10S", L""));
	printf("%d\n" ,printf("%-10S", L""));
	printf("%d\n" ,ft_printf("%-10S", L"blabla"));
	printf("%d\n" ,printf("%-10S", L"blabla"));
	printf("%d\n" ,ft_printf("%-10S", L"blablablab"));
	printf("%d\n" ,printf("%-10S", L"blablablab"));
	printf("%d\n" ,ft_printf("%-10S", L"blablablabauieauieauieau"));
	printf("%d\n" ,printf("%-10S", L"blablablabauieauieauieau"));
	printf("%d\n" ,ft_printf("%-10s| :)", "hey"));
	printf("%d\n" ,printf("%-10s| :)", "hey"));
	printf("%d\n" ,ft_printf("%10s| :)", "hey"));
	printf("%d\n" ,printf("%10s| :)", "hey"));
	printf("%d\n" ,ft_printf("%10s %10S %10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,printf("%10s %10S %10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,ft_printf("%-10s %-10S %-10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,printf("%-10s %-10S %-10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,ft_printf("%-10s %-10S %-10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,printf("%-10s %-10S %-10c", "Coucou", L"aaa", 'z'));
	printf("%d\n" ,ft_printf("%+i %+i % i % i", 321, -321, 321, -321));
	printf("%d\n" ,printf("%+i %+i % i % i", 321, -321, 321, -321));
	printf("%d\n" ,ft_printf("%#o", 12));
	printf("%d\n" ,printf("%#o", 12));
	printf("%d\n" ,ft_printf("%10i", 12));
	printf("%d\n" ,printf("%10i", 12));
	printf("%d\n" ,ft_printf("%10u", 12));
	printf("%d\n" ,printf("%10u", 12));
	printf("%d\n" ,ft_printf("%010u", 12));
	printf("%d\n" ,printf("%010u", 12));
	printf("%d\n" ,ft_printf("%05s", "pouet"));
	printf("%d\n" ,printf("%05s", "pouet"));
	printf("%d\n" ,ft_printf("%.12d", 42));
	printf("%d\n" ,printf("%.12d", 42));
	printf("%d\n" ,ft_printf("%.15x", 9584));
	printf("%d\n" ,printf("%.15x", 9584));
	printf("%d\n" ,ft_printf("%.5i", 42));
	printf("%d\n" ,printf("%.5i", 42));
	printf("%d\n" ,ft_printf("%05i", 42));
	printf("%d\n" ,printf("%05i", 42));
	printf("%d\n" ,ft_printf("%.10s", "pouet"));
	printf("%d\n" ,printf("%.10s", "pouet"));
	printf("%d\n" ,ft_printf("%-10x", 42));
	printf("%d\n" ,printf("%-10x", 42));
	printf("%d\n" ,ft_printf("%-15x", 542));
	printf("%d\n" ,printf("%-15x", 542));
	printf("%d\n" ,ft_printf("%c", 0));
	printf("%d\n" ,printf("%c", 0));
	printf("%d\n" ,ft_printf("%C", 0));
	printf("%d\n" ,printf("%C", 0));
	printf("%d\n" ,ft_printf("%hhC, %hhC", 'a', L'米'));
	printf("%d\n" ,printf("%hhC, %hhC", 'a', L'米'));
	printf("%d\n" ,ft_printf("{%-10d}", 42));
	printf("%d\n" ,printf("{%-10d}", 42));
	printf("%d\n" ,ft_printf("{%Z}", 123));
	printf("%d\n" ,printf("{%Z}", 123));
	printf("%d\n" ,ft_printf("{%-15Z}", 123));
	printf("%d\n" ,printf("{%-15Z}", 123));
	printf("%d\n" ,ft_printf("%#o", 0));
	printf("%d\n" ,printf("%#o", 0));
	printf("%d\n" ,ft_printf("%+c", 0));
	printf("%d\n" ,printf("%+c", 0));
	printf("%d\n" ,ft_printf("% u", 9999));
	printf("%d\n" ,printf("% u", 9999));
	printf("%d\n" ,ft_printf("%.c", 0));
	printf("%d\n" ,printf("%.c", 0));
	printf("%d\n" ,ft_printf("%#.4o", 4));
	printf("%d\n" ,printf("%#.4o", 4));
	printf("%d\n" ,ft_printf("%.4d", 42));
	printf("%d\n" ,printf("%.4d", 42));
	printf("%d\n" ,ft_printf("%.4d", 424242));
	printf("%d\n" ,printf("%.4d", 424242));
	printf("%d\n" ,ft_printf("%.4o", 424242));
	printf("%d\n" ,printf("%.4o", 424242));
	printf("%d\n" ,ft_printf("test %c test", 0));
	printf("%d\n" ,printf("test %c test", 0));
	printf("%d\n" ,ft_printf("%S", L""));
	printf("%d\n" ,printf("%S", L""));
	printf("%d\n" ,ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω"));
	printf("%d\n" ,printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω"));
	printf("%d\n" ,ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
	printf("%d\n" ,printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
	printf("%d\n" ,ft_printf("%o, %ho, %hho", -42, -42, -42));
	printf("%d\n" ,printf("%o, %ho, %hho", -42, -42, -42));
	printf("%d\n" ,ft_printf("%c", 200));
	printf("%d\n" ,printf("%c", 200));
	printf("%d\n" ,ft_printf("%C", 200));
	printf("%d\n" ,printf("%C", 200));
	printf("%d\n" ,ft_printf("% p|%+p", 42, 42));
	printf("%d\n" ,printf("% p|%+p", 42, 42));
	printf("%d\n" ,printf("%.5i%.5i", 42, 424242424));
	printf("%d\n" ,ft_printf("%.5i%.5i", 42, 424242424));
	printf("%d\n" ,printf("%#x", 0));
	printf("%d\n" ,ft_printf("%#x", 0));
	printf("%d\n" ,printf("%.x", 0));
	printf("%d\n" ,ft_printf("%.x", 0));
	printf("%d\n" ,printf("%#.x, %#.0x", 0, 0));
	printf("%d\n" ,ft_printf("%#.x, %#.0x", 0, 0));
	printf("%d\n" ,printf("%.1x", 0));
	printf("%d\n" ,ft_printf("%.1x", 0));
	printf("%d\n" ,printf("wa %.2x", 0));
	printf("%d\n" ,ft_printf("wa %.2x", 0));
	printf("%d\n" ,printf("%.0p, %.p", 0, 0));
	printf("%d\n" ,ft_printf("%.0p, %.p", 0, 0));
	printf("%d\n" ,printf("%15.4o", 42));
	printf("%d\n" ,ft_printf("%15.4o", 42));
	printf("%d\n" ,printf("%.4s", "42 is the answer"));
	printf("%d\n" ,ft_printf("%.4s", "42 is the answer"));
	printf("%d\n" ,printf("%15.4d", 42));
	printf("%d\n" ,ft_printf("%15.4d", 42));
	printf("%d\n" ,printf("{%0-3u}", 0));
	printf("%d\n" ,ft_printf("{%0-3u}", 0));
	printf("%d\n" ,printf("{%0-3d}", 0));
	printf("%d\n" ,ft_printf("{%0-3d}", 0));
	printf("%d\n" ,printf("{%03u}", 0));
	printf("%d\n" ,ft_printf("{%03u}", 0));
	printf("%d\n" ,printf("{%03d}", 0));
	printf("%d\n" ,ft_printf("{%03d}", 0));
	printf("%d\n" ,printf("{% c}", 0));
	printf("%d\n" ,ft_printf("{% c}", 0));
	printf("%d\n" ,printf("%+o", 0));
	printf("%d\n" ,ft_printf("%+o", 0));
	printf("%d\n" ,printf("%#X", 42));
	printf("%d\n" ,ft_printf("%#X", 42));
	printf("%d\n" ,printf("{%0c}", 'z'));
	printf("%d\n" ,ft_printf("{%0c}", 'z'));
	printf("%d\n" ,printf("{%3c}", 'z'));
	printf("%d\n" ,ft_printf("{%3c}", 'z'));
	printf("%d\n" ,printf("{%.3c}", 'z'));
	printf("%d\n" ,ft_printf("{%.3c}", 'z'));
	printf("%d\n" ,printf("{%03c}", 'z'));
	printf("%d\n" ,ft_printf("{%03c}", 'z'));
	printf("%d\n" ,printf("{%-03c}", 'z'));
	printf("%d\n" ,ft_printf("{%-03c}", 'z'));
	printf("%d\n" ,printf("{%03C}", 0));
	printf("%d\n" ,ft_printf("{%03C}", 0));
	printf("%d\n" ,printf("{%03c}", 0));
	printf("%d\n" ,ft_printf("{%03c}", 0));
	printf("%d\n" ,printf("{%03c}", 1));
	printf("%d\n" ,ft_printf("{%03c}", 1));
	printf("%d\n" ,printf("{%10d}", -42));
	printf("%d\n" ,printf("{%10d}", -42));
	printf("%d\n" ,ft_printf("%hhC, %hhC", 0, L'米'));
	printf("%d\n" ,printf("%hhC, %hhC", 0, L'米'));
	printf("%d\n" ,ft_printf("%p", 0));
	printf("%d\n" ,printf("%p", 0));
	printf("%d\n" ,ft_printf("{%5p}", 0));
	printf("%d\n" ,printf("{%5p}", 0));
	printf("%d\n" ,ft_printf("{%010d}", -42));
	printf("%d\n" ,printf("{%010d}", -42));
	printf("%d\n" ,ft_printf("{% 03d}", 0));
	printf("%d\n" ,printf("{% 03d}", 0));
	printf("%d\n" ,printf("%15.4d", 4));
	printf("%d\n" ,ft_printf("%15.4d", 4));
	printf("%d\n" ,printf("%15.4d", 424242));
	printf("%d\n" ,ft_printf("%15.4d", 424242));
	printf("%d\n" ,printf("%15.4o", 424242));
	printf("%d\n" ,ft_printf("%15.4o", 424242));
	printf("%d\n" ,printf("%4.15s", "I am 42"));
	printf("%d\n" ,ft_printf("%4.15s", "I am 42"));
	printf("%d\n" ,printf("%.5p", 0));
	printf("%d\n" ,ft_printf("%.5p", 0));
	printf("%d\n" ,printf("%#o", 0));
	printf("%d\n" ,ft_printf("%#o", 0));
	printf("%d\n" ,printf("%.o", 0));
	printf("%d\n" ,ft_printf("%.o", 0));
	printf("%d\n" ,printf("%#.o", 32));
	printf("%d\n" ,ft_printf("%#.o", 32));
	printf("%d\n" ,printf("%#.o, %#.0o", 0, 0));
	printf("%d\n" ,ft_printf("%#.o, %#.0o", 0, 0));
	printf("%d\n" ,printf("%#.o", 42));
	printf("%d\n" ,ft_printf("%#.o", 42));
	printf("%d\n" ,printf("{%30S}", L"test"));
	printf("%d\n" ,ft_printf("{%30S}", L"test"));
	printf("%d\n" ,printf("{%30S}", L"étest"));
	printf("%d\n" ,ft_printf("{%30S}", L"étest"));
	printf("%d\n" ,printf("{%30S}", L"ééééééééééééééééé"));
	printf("%d\n" ,ft_printf("{%30S}", L"ééééééééééééééééé"));
	printf("%d\n" ,printf("{%30S}", L"éééééééééééééééééééééééééééééé"));
	printf("%d\n" ,ft_printf("{%30S}", L"éééééééééééééééééééééééééééééé"));
	printf("%d\n" ,printf("{%30S}", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("{%30S}", L"我是一只猫。"));
	printf("%d\n" ,printf("{%030S}", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("{%030S}", L"我是一只猫。"));
	printf("%d\n" ,printf("{%10.5d}", 9));
	printf("%d\n" ,ft_printf("{%10.5d}", 9));
	printf("%d\n" ,printf("{%03.2d}", 9));
	printf("%d\n" ,ft_printf("{%03.2d}", 9));
	printf("%d\n" ,printf("{%03.5d}", 9));
	printf("%d\n" ,ft_printf("{%03.5d}", 9));
	printf("%d\n" ,printf("{%03.10d}", 9));
	printf("%d\n" ,ft_printf("{%03.10d}", 9));
	printf("%d\n" ,printf("{%03.2d}", 0));
	printf("%d\n" ,ft_printf("{%03.2d}", 0));
	printf("%d\n" ,printf("{%020.8d}", 42));
	printf("%d\n" ,ft_printf("{%020.8d}", 42));
	printf("%d\n" ,printf("{%020.5d}", 42));
	printf("%d\n" ,ft_printf("{%020.5d}", 42));
	printf("%d\n" ,printf("{%20.5d}", 42));
	printf("%d\n" ,ft_printf("{%20.5d}", 42));
	printf("%d\n" ,printf("{%.20d}", 42));
	printf("%d\n" ,ft_printf("{%.20d}", 42));
	printf("%d\n" ,printf("{%020d}", 42));
	printf("%d\n" ,ft_printf("{%020d}", 42));
	printf("%d\n" ,printf("{%015.20d}", 42));
	printf("%d\n" ,ft_printf("{%015.20d}", 42));
	printf("%d\n" ,printf("{%-020.8d}", 42));
	printf("%d\n" ,ft_printf("{%-020.8d}", 42));
	printf("%d\n" ,printf("{%-020.5d}", 42));
	printf("%d\n" ,printf("{%-020.5d}", 42));
	printf("%d\n" ,ft_printf("{%-20.5d}", 42));
	printf("%d\n" ,printf("{%-20.5d}", 42));
	printf("%d\n" ,ft_printf("{%-.20d}", 42));
	printf("%d\n" ,printf("{%-.20d}", 42));
	printf("%d\n" ,ft_printf("{%-020d}", 42));
	printf("%d\n" ,printf("{%-020d}", 42));
	printf("%d\n" ,ft_printf("{%-015.20d}", 42));
	printf("%d\n" ,printf("{%-015.20d}", 42));
	printf("%d\n" ,ft_printf("{%10.5u}", 9));
	printf("%d\n" ,printf("{%10.5u}", 9));
	printf("%d\n" ,ft_printf("{%03.2u}", 9));
	printf("%d\n" ,printf("{%03.2u}", 9));
	printf("%d\n" ,ft_printf("{%03.5u}", 9));
	printf("%d\n" ,printf("{%03.5u}", 9));
	printf("%d\n" ,ft_printf("{%03.10u}", 9));
	printf("%d\n" ,printf("{%03.10u}", 9));
	printf("%d\n" ,ft_printf("{%03.2u}", 0));
	printf("%d\n" ,printf("{%03.2u}", 0));
	printf("%d\n" ,ft_printf("{%020.8u}", 42));
	printf("%d\n" ,printf("{%020.8u}", 42));
	printf("%d\n" ,ft_printf("{%020.5u}", 42));
	printf("%d\n" ,printf("{%020.5u}", 42));
	printf("%d\n" ,ft_printf("{%20.5u}", 42));
	printf("%d\n" ,printf("{%20.5u}", 42));
	printf("%d\n" ,ft_printf("{%.20u}", 42));
	printf("%d\n" ,printf("{%.20u}", 42));
	printf("%d\n" ,ft_printf("{%020u}", 42));
	printf("%d\n" ,printf("{%020u}", 42));
	printf("%d\n" ,ft_printf("{%015.20u}", 42));
	printf("%d\n" ,printf("{%015.20u}", 42));
	printf("%d\n" ,ft_printf("{%-020.8u}", 42));
	printf("%d\n" ,printf("{%-020.8u}", 42));
	printf("%d\n" ,ft_printf("{%-020.5u}", 42));
	printf("%d\n" ,printf("{%-020.5u}", 42));
	printf("%d\n" ,ft_printf("{%-20.5u}", 42));
	printf("%d\n" ,printf("{%-20.5u}", 42));
	printf("%d\n" ,ft_printf("{%-.20u}", 42));
	printf("%d\n" ,printf("{%-.20u}", 42));
	printf("%d\n" ,ft_printf("{%-020u}", 42));
	printf("%d\n" ,printf("{%-020u}", 42));
	printf("%d\n" ,ft_printf("{%-015.20u}", 42));
	printf("%d\n" ,printf("{%-015.20u}", 42));
	printf("%d\n" ,ft_printf("->%.1p, %.p", 0, 1));
	printf("%d\n" ,printf("->%.1p, %.p", 0, 1));
	printf("%d\n" ,ft_printf("%.d, %.0d", 0, 0));
	printf("%d\n" ,printf("%.d, %.0d", 0, 0));
	printf("%d\n" ,ft_printf("%.4s", "yaaaaaaaaa"));
	printf("%d\n" ,printf("%.4s", "yaaaaaaaaa"));
	printf("%d\n" ,ft_printf("%.4S", L"我是一只猫。"));
	printf("%d\n" ,printf("%.4S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%.7S", L"我是一只猫。"));
	printf("%d\n" ,printf("%.7S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%.0p, %.p", 0, 0));
	printf("%d\n" ,printf("%.0p, %.p", 0, 0));
	printf("%d\n" ,ft_printf("{%05p}", 0));
	printf("%d\n" ,printf("{%05p}", 0));
	printf("%d\n" ,ft_printf("%15.4s", "I am 42"));
	printf("%d\n" ,printf("%15.4s", "I am 42"));
	printf("%d\n" ,ft_printf("%2.9p", 1234));
	printf("%d\n" ,printf("%2.9p", 1234));
	printf("%d\n" ,ft_printf("%.0%"));
	printf("%d\n" ,printf("%.0%"));
	printf("%d\n" ,ft_printf("%#08x", 42));
	printf("%d\n" ,printf("%#08x", 42));
	printf("%d\n" ,ft_printf("%5.2s is a string", "this"));
	printf("%d\n" ,printf("%5.2s is a string", "this"));
	printf("%d\n" ,ft_printf("%10s is a string", ""));
	printf("%d\n" ,printf("%10s is a string", ""));
	printf("%d\n" ,ft_printf("%5.2s is a string", ""));
	printf("%d\n" ,printf("%5.2s is a string", ""));
	printf("%d\n" ,ft_printf("%-5.2s is a string", "this"));
	printf("%d\n" ,printf("%-5.2s is a string", "this"));
	printf("%d\n" ,ft_printf("% 10.5d", 4242));
	printf("%d\n" ,printf("% 10.5d", 4242));
	printf("%d\n" ,ft_printf("%+10.5d", 4242));
	printf("%d\n" ,printf("%+10.5d", 4242));
	printf("%d\n" ,ft_printf("%10.5d", -4242));
	printf("%d\n" ,printf("%10.5d", -4242));
	printf("%d\n" ,ft_printf("%03.2d", -1));
	printf("%d\n" ,printf("%03.2d", -1));
	printf("%d\n" ,ft_printf("%.5C", 0));
	printf("%d\n" ,printf("%.5C", 0));
	printf("%d\n" ,ft_printf("%.5C", L'a'));
	printf("%d\n" ,printf("%.5C", L'a'));
	printf("%d\n" ,ft_printf("%.5S", L"a"));
	printf("%d\n" ,printf("%.5S", L"a"));
	printf("%d\n" ,ft_printf("%15.4s", "42"));
	printf("%d\n" ,printf("%15.4s", "42"));
	printf("%d\n" ,ft_printf("%.10d", -42));
	printf("%d\n" ,printf("%.10d", -42));
	printf("%d\n" ,ft_printf("%15.4S", L"ééééééééééé"));
	printf("%d\n" ,printf("%15.4S", L"ééééééééééé"));
	printf("%d\n" ,ft_printf("%15.4S", L"éééééééééééééééééééé"));
	printf("%d\n" ,printf("%15.4S", L"éééééééééééééééééééé"));
	printf("%d\n" ,ft_printf("%15.4S", L"我是一只猫。"));
	printf("%d\n" ,printf("%15.4S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%4.4S", L"我是一只猫。"));
	printf("%d\n" ,printf("%4.4S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%4.1S", L"é"));
	printf("%d\n" ,printf("%4.1S", L"é"));
	printf("%d\n" ,ft_printf("%4.2S", L"é"));
	printf("%d\n" ,printf("%4.2S", L"é"));
	printf("%d\n" ,ft_printf("%4.3S", L"éé"));
	printf("%d\n" ,printf("%4.3S", L"éé"));
	printf("%d\n" ,ft_printf("%15.4s", "42 is the answer"));
	printf("%d\n" ,printf("%15.4s", "42 is the answer"));
	printf("%d\n" ,ft_printf("%4.15S", L"我是一只猫。"));
	printf("%d\n" ,printf("%4.15S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%4.S", L"我是一只猫。"));
	printf("%d\n" ,printf("%4.S", L"我是一只猫。"));
	printf("%d\n" ,ft_printf("%4.1S", L"Jambon"));
	printf("%d\n" ,printf("%4.1S", L"Jambon"));
	printf("%d\n" ,ft_printf("%%   %", "test"));
	printf("%d\n" ,printf("%%   %", "test"));
	printf("%d\n" ,ft_printf("%4.s", "42"));
	printf("%d\n" ,printf("%4.s", "42"));
	printf("%d\n" ,ft_printf("{%05.s}", 0));
	printf("%d\n" ,printf("{%05.s}", 0));
	printf("%d\n" ,ft_printf("{%05.s}", "(nule)"));
	printf("%d\n" ,printf("{%05.s}", "(nule)"));
	printf("%d\n" ,ft_printf("{%5.s}", "(nule)"));
	printf("%d\n" ,printf("{%5.s}", "(nule)"));
	printf("%d\n" ,ft_printf("{%5s}", "(nule)"));
	printf("%d\n" ,printf("{%5s}", "(nule)"));
	printf("%d\n" ,ft_printf("{%.5s}", "(nule)"));
	printf("%d\n" ,printf("{%.5s}", "(nule)"));
	printf("%d\n" ,ft_printf("{%05.s}", 0));
	printf("%d\n" ,printf("{%05.s}", 0));
	printf("%d\n" ,ft_printf("{%5.s}", 0));
	printf("%d\n" ,printf("{%5.s}", 0));
	printf("%d\n" ,ft_printf("{%0.s}", 0));
	printf("%d\n" ,printf("{%0.s}", 0));
	printf("%d\n" ,ft_printf("{%s}", 0));
	printf("%d\n" ,printf("{%s}", 0));
	printf("%d\n" ,ft_printf("{%S}", 0));
	printf("%d\n" ,printf("{%S}", 0));
	printf("%d\n" ,ft_printf("{% s}", NULL));
	printf("%d\n" ,printf("{% s}", NULL));
	printf("%d\n" ,ft_printf("{%05.%}", 0));
	printf("%d\n" ,printf("{%05.%}", 0));
	printf("%d\n" ,ft_printf("{%05.Z}", 0));
	printf("%d\n" ,printf("{%05.Z}", 0));
	printf("%d\n" ,ft_printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
	%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
	%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",
	' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
	'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
	'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
	't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}'));
	printf("%d\n" ,printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
	%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
	%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C",
	' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
	'.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
	'<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
	't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}'));
	printf("%d\n" ,ft_printf("%5.x", 0));
	printf("%d\n" ,printf("%5.x", 0));
	printf("%d\n" ,ft_printf("%5.x", 1));
	printf("%d\n" ,printf("%5.x", 1));
	printf("%d\n" ,ft_printf("@moulitest: %5.x %5.0x", 0, 0));
	printf("%d\n" ,printf("@moulitest: %5.x %5.0x", 0, 0));
	printf("%d\n" ,ft_printf("@moulitest: %5.o %5.0o", 0, 0));
	printf("%d\n" ,printf("@moulitest: %5.o %5.0o", 0, 0));
	printf("%d\n" ,ft_printf("@moulitest: %.d %.0d", 42, 43));
	printf("%d\n" ,printf("@moulitest: %.d %.0d", 42, 43));
	printf("%d\n" ,ft_printf("@moulitest: %5.d %5.0d", 0, 0));
	printf("%d\n" ,printf("@moulitest: %5.d %5.0d", 0, 0));
	// Comportements indéfini
	/*printf("%d\n" ,ft_printf("%ll#x", 9223372036854775807));
	printf("%d\n" ,ft_printf("%5+d", 42));
	printf("%d\n" ,ft_printf("%5+d", -42));
	printf("%d\n" ,ft_printf("%-5+d", 42));
	printf("%d\n" ,ft_printf("%-5+d", -42));
	printf("%d\n" ,ft_printf("%zhd", "4294967296"));
	printf("%d\n" ,ft_printf("%jzd", "9223372036854775807"));
	printf("%d\n" ,ft_printf("%jhd", "9223372036854775807"));
	printf("%d\n" ,ft_printf("%lhl", "9223372036854775807"));
	printf("%d\n" ,ft_printf("%lhlz", "9223372036854775807"));
	printf("%d\n" ,ft_printf("%zj", "9223372036854775807"));
	printf("%d\n" ,ft_printf("%lhh", "2147483647"));
	printf("%d\n" ,ft_printf("%hhld", "128"));
	printf("%d\n" ,ft_printf("@main_ftprintf: %####0000 33..1..#00d", 256));
	printf("%d\n" ,ft_printf("@main_ftprintf: %####0000 33..1d", 256));
	printf("%d\n" ,ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d", 256));*/


	// Errors cases
	
	// Alway return -1 now.
	//max utf-8
	printf("%d\n" ,ft_printf("%C", 1114112));
	printf("%d\n" ,printf("%C", 1114112));
	printf("%d\n" ,ft_printf("test"));
	printf("%d\n" ,printf("test"));
	printf("%d\n" ,ft_printf("%C", -1));
	printf("%d\n" ,printf("%C", -1));
	printf("%d\n" ,ft_printf("%C", 2147483646));
	printf("%d\n" ,printf("%C", 2147483646));
	printf("%d\n" ,ft_printf("%C", 2147483647));
	printf("%d\n" ,printf("%C", 2147483647));
	//utf-8 + 1
	printf("%d\n" ,ft_printf("%C", 1114111 + 1));
	printf("%d\n" ,printf("%C", 1114111 + 1));
	//unicode signed
	printf("%d\n" ,ft_printf("%C", -1));
	printf("%d\n" ,printf("%C", -1));
	//invalid str   troug
	printf("%d\n" ,ft_printf("%C %C", 55296, 57343));
	printf("%d\n" ,printf("%C %C", 55296, 57343));


	/*int *strunicode = L"a";
	while (unicode < (unsigned int)-1)
	{
		*strunicode = unicode++;
		printf("%d\n" ,ft_printf("%S", strunicode));
	}*/

	// Bonus :
	//unsigned int nbr3 = 42;
	//printf("%d\n" ,ft_printf("%b", nbr3));

	return (0);
}
