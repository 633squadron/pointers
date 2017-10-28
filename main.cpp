#include <iostream>
#include <vector>
#include <ctgmath>
#include <cstring>

int main(int argc, char *argv[]) {
    explicit std::vector<std::string> args (static_cast<unsigned long>(argc));
    for (int a = 0; a != argc; ++a) {

    }
    char p {'2'};
    char* p1;
    p1 = &p;
    auto flag = true;
    auto dVal = 2.13;
    const int intVal = 5;
    std::vector<int> v2 = std::vector<int> {1, 2, 3};
    char vec[6] {'a', 'b', 'c', 'd', 'e', 'f'};
    char* v = &vec[3];
    char z = *vec;
    std::cout << "Program start" << std::endl;
    std::printf("Flag 'flag': %d, double 'dval': %g, int intVal: %d, char 'v': %c\n", flag, dVal, intVal, *v);
    for (int index = 0; index != v2.size(); ++index) {
        printf("%i, ",v2[index]);
    }
    std::cout << std::endl;
    /*
     * 
     * d,i   Signed decimal integer     392
     * u     Unsigned decimal integer     7235
     * o     Unsigned octal     610
     * x     Unsigned hexadecimal integer     7fa
     * X     Unsigned hexadecimal integer (uppercase)     7FA
     * f     Decimal floating point, lowercase     392.65
     * F     Decimal floating point, uppercase     392.65
     * e     Scientific notation (mantissa/exponent), lowercase     3.9265e+2
     * E     Scientific notation (mantissa/exponent), uppercase     3.9265E+2
     * g     Use the shortest representation: %e or %f     392.65
     * G     Use the shortest representation: %E or %F     392.65
     * a     Hexadecimal floating point, lowercase     -0xc.90fep-2
     * A     Hexadecimal floating point, uppercase     -0XC.90FEP-2
     * c     Character     a
     * s     String of characters     sample
     * p     Pointer address     b8000000
     * n     Nothing printed.
     *       The corresponding argument must be a pointer to a signed int.
     *       The number of characters written so far is stored in the pointed location.
     * %     A % followed by another % character will write a single % to the stream.
     * -     Left-justify within the given field width; Right justification is the default (see width sub-specifier).
     * +     Forces to prepend the result with a plus or minus sign (+ or -) even for positive numbers. By default, only 
     *       negative numbers are preceded with a - sign.
     * (space)     
     *      If no sign is going to be written, a blank space is inserted before the value.
     * #    Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different
     *      than zero.
     *      Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more 
     *      digits follow. By default, if no digits follow, no decimal point is written.
     * 0    Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).
     * (number)
     *      Minimum number of characters to be printed. If the value to be printed is shorter than this number, the
     *      result is padded with blank spaces. The value is not truncated even if the result is larger.
     * *    The width is not specified in the format string, but as an additional integer value argument preceding the
     *      argument that has to be formatted.
     * .number
     *      For integer specifiers (d, i, o, u, x, X): precision specifies the minimum number of digits to be written.
     *      If the value to be written is shorter than this number, the result is padded with leading zeros. The value
     *      is not truncated even if the result is longer. A precision of 0 means that no character is written for the
     *      value 0.
     *      For a, A, e, E, f and F specifiers: this is the number of digits to be printed after the decimal point
     *      (by default, this is 6).
     *      For g and G specifiers: This is the maximum number of significant digits to be printed.
     *      For s: this is the maximum number of characters to be printed. By default all characters are printed until
     *      the ending null character is encountered.
     *      If the period is specified without an explicit value for precision, 0 is assumed.
     * .*     The precision is not specified in the format string, but as an additional integer value argument preceding
     *      the argument that has to be formatted.
     *
     *      The length sub-specifier modifies the length of the data type. This is a chart showing the types used to
     *      interpret the corresponding arguments with and without length specifier (if a different type is used, the
     *      proper type promotion or conversion is performed, if allowed):
     *                                  specifiers
     */
    return 0;
}