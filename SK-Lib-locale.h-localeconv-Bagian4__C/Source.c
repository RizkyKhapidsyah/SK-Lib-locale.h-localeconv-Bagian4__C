#include <stdio.h>
#include <locale.h>
#include <conio.h>

/*	Source by CPPReference
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 
*/

int main(void){
	setlocale(LC_MONETARY, "en_IN.utf8");
	struct lconv* lc = localeconv();

	printf("Local Currency Symbol\t: %s\n", lc->currency_symbol);
	printf("International Currency Symbol\t: %s\n", lc->int_curr_symbol);

	_getch();
	return 0;

}