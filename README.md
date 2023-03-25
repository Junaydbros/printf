# Project Name: \_printf()
## This project is an implementation of the `printf()` function in C programming language.

## Description
Just like the standard `printf()` funtion in C, this `\_printf()` implementation is able to write values to standard output.
`\_printf()` takes at least on string argument (format string), wrapped around double quotes. It is able to accept variables of various types as arguements, and with the help of format specifiers, is able to print the write the appropiate value to the standard output.
`\_printf()` function provides similar functnality to the standard `printf()` function in C.

## Installation
To install this project, simply clone the repository and compile using gcc or your prferred c compiler.

**Clone Repository**
```
git clone https://github.com/franklinobiukwu/printf.git
```

**Compile Project**
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *c
```

## Usage
To use the `\_printf()` function in your code, include the `main.h` header file in your source document and call the function with the desired format string and any arguemtsto be printed. For example:

```
#include <stdio.h>
#include "main.h"

int main()
{
	int year = 2023;
	char *city = "Accra";

	_printf("Hello, World this is %d in %s, %s\n", year, city, "Ghana!");
}
```

## Supported Format Specifiers
The following format specifiers are supported.
|**Format Specifier**|**Value Type**|
|`%c`|character|
|`%d`|integers|
|`%f`|floating-point numbers|
|`%s`|strings|

## Future Improvements

## License

```Implemeted and Submitted by```
```Franklin OBIUKWU``` and ```Abdulhamid SANUSI```
