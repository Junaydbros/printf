#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	len += _printf("\n");
	len2 += printf("\n");
	len += _printf(" \n");
	len2 += printf(" \n");
	len += _printf(" ");
	len2 += printf(" ");
	len += _printf("");
	len2 += printf("");
	len += _printf("% 5 5\n");
	len2 += printf("% 5 5\n");
	len += _printf("%5 5\n");
	len2 += printf("%5 5\n");
	/*case 1*/
	len += _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len2 += printf("A char inside a sentence: %c. Did it work?\n", 'F');
	/*cases 2*/
	len += _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 += printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	/*case 3*/
	len += _printf("%s", "This sentence is retrieved from va_args!\n");
	len2 += printf("%s", "This sentence is retrieved from va_args!\n");
	/*case 4*/
	len += _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 += printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	/*case 5*/
	len += _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 += printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	/*case 6*/
	len += _printf("%%");
	len2 += printf("%%");
	/*case 7*/
	len += _printf("Should print a single percent sign: %%\n");
	len2 += printf("Should print a single percent sign: %%\n");
	/*case 8*/
	len += _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 += printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	/*case 9*/
	len += _printf("css%ccs%scscscs", 'T', "Test");
	len2 += printf("css%ccs%scscscs", 'T', "Test");
	/*case 10*/
	len += _printf(str);
	len2 += printf(str);
	/*case 11*/
	len += _printf("man gcc:\n%s", str);
	len2 += printf("man gcc:\n%s", str);
	/*case 12*/
	len += _printf(NULL);
	len2 += printf(NULL);
	/*case 13*/
	len += _printf("%c", '\0');
	len2 += printf("%c", '\0');
	/*case 13*/
	len += _printf("%");
	len2 += printf("%");
	/*case 14*/
	len += _printf("%!\n");
	len2 += printf("%!\n");
	/*case 14*/
	len += _printf("%K\n");
	len2 += printf("%K\n");
	/*case 15*/
	len += _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 += printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	len += _printf("Character:[%c]\n", 'H');
	len2 += printf("Character:[%c]\n", 'H');
	len += _printf("String:[%s]\n", "I am a string !");
	len2 += printf("String:[%s]\n", "I am a string !");

	printf("_printf count = %d\nprintf count = %d\n", len, len2);

	return (0);
}
