#include <stdio.h>
int main(){
    float w,n1,b,c,cod;
    printf("Enter the weight of FAS crystals\n");
    scanf("%f",&w);
    n1=(w*4)/392;
    printf("the normality of the given FAS solution is %f\n",n1);
    printf("--BACK TITRATION--\n");
    printf("Burette: Standard FAS solution ");
    printf("Conical Flask: 10cc of waste water+25cc of pottasium dichromate solution+\n30cc of dil suphuric acid\n");
    printf("Indicator: 2-3 drops of ferroin\n");
    printf("End point: Bluish green to reddish brown\n\n");
    printf("Please enter volume of FAS solution run down");
    scanf("%f",&b);
    printf("--BLANK TITRATION--\n");
    printf("Burette: Standard FAS solution ");
    printf("Conical Flask: 25cc of pottasium dichromate solution+30cc of dil suphuric acid\n");
    printf("Indicator: 2-3 drops of ferroin\n");
    printf("End point: Bluish green to reddish brown\n\n");
    printf("Please enter volume of FAS solution run down ");
    scanf("%f",&c);
    cod=(c-b)*n1*800;
    printf("RESULT:");
    printf("COD of waste water sample =%d mg of oxygen/litre of waste water",cod);
    return 0;
}