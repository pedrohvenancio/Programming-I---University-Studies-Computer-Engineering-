#include <stdio.h>
#include <stdlib.h>

int main() {
int codigo=1, n=0, i;
float pre_an, pre_no;
float media_an = 0;
float media_no = 0;
float soma_no = 0;
float soma_an = 0;
printf("Register products?\n1-YES\n2-NO\n");
scanf("%d", &n);
if (n == 1) {
for (i = 0; codigo > 0; i++){
printf("Product code?");
scanf("%d", &codigo);
if (codigo > 0){
printf("Product price?");
scanf("%f", &pre_an);
pre_no = (pre_an * 0.2) + pre_an;
soma_an += pre_an;
soma_no += pre_no;
printf("The product with code %d is valid R$%.2f\n\n", codigo, pre_no);
}
}
media_an = soma_an/(i-1);
media_no = soma_no/(i-1);
printf("The average of the old product values is: %.2f\nThe average of the new product values is: %.2f\n", media_an, media_no);
} else {
printf("Operation cancelled!");
}
return 0;
}
