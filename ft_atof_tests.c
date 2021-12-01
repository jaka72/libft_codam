#include "fractol.h"

int main(void)
{
    double newdouble;
//    printf("start test:\n");

    printf("23.45  == %f\n\n", ft_atof("23.45"));
    printf("0.4567 == %f\n\n", ft_atof("0.4567"));
    printf("0.0    == %f\n\n", ft_atof("0.0"));
    printf("0000.0 == %f\n\n", ft_atof("0000.0"));
    printf("0000.12 == %f\n\n", ft_atof("0000.12"));
    printf("0012.00 == %f\n\n", ft_atof("00012.00"));
    printf("0001.00 == %f\n\n", ft_atof("0001.00"));
    printf("0009.00 == %f\n\n", ft_atof("0009.00"));


     // PLUS
    printf("+23.45  == %f\n\n", ft_atof("+23.45"));
    printf("+0.4567 == %f\n\n", ft_atof("+0.4567"));
    printf("+0.0    == %f\n\n", ft_atof("+0.0"));
    printf("+0000.0 == %f\n\n", ft_atof("+0000.0"));
    printf("+0000.12 == %f\n\n", ft_atof("+0000.12"));
    printf("+0012.00 == %f\n\n", ft_atof("+00012.00"));
    printf("+0001.00 == %f\n\n", ft_atof("+0001.00"));
    printf("+0009.00 == %f\n\n", ft_atof("+0009.00"));


    // MINUS
    printf("-23.45  == %f\n\n", ft_atof("-23.45"));
    printf("-0.4567 == %f\n\n", ft_atof("-0.4567"));
    printf("-0.0    == %f\n\n", ft_atof("-0.0"));
    printf("-0000.0 == %f\n\n", ft_atof("-0000.0"));
    printf("-0000.12 == %f\n\n", ft_atof("-0000.12"));
    printf("-0012.00 == %f\n\n", ft_atof("-00012.00"));
    printf("-0001.00 == %f\n\n", ft_atof("-0001.00"));
    printf("-0009.00 == %f\n\n", ft_atof("-0009.00"));

    printf(".0 == %f\n\n", ft_atof(".0"));
    printf("0. == %f\n\n", ft_atof("0."));
    printf("mine . == %f\n\n", ft_atof("."));
    printf("orig . == %f\n\n",    atof("."));


    printf("mine 123 == %f\n",   ft_atof("123"));
    printf("orig 123 == %f\n\n",    atof("123"));


//     int i = 33;
// //  int ii = 33.3;      // error
// //  long l = 55.5;      // error
//      float f = 66;
//        float ff = .0;
//        float fff = 0.;

// //     printf("int a: %d\n\n", i);
// //     printf("int a: %f\n\n", i);  // prints but terminal warning
//      printf("float f: %f\n\n", f);
//      printf("float f: %f\n\n", ff);
//      printf("float f: %f\n\n", fff);


    //printf("\nlong: %f, double: %lf\n\n", 23.45, 23.45);
    
    
    
    // printf("%d\n\n", atoi("a1234a"));



}