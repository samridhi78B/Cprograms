#include <stdio.h>
int main() {
	struct book {
		float price;
		int pages;
	} Affraid, Mankind;

	scanf("%f", &Affraid.price);
	scanf("%d", &Affraid.pages);
	scanf("%f", &Mankind.price);
	scanf("%d", &Mankind.pages);

  printf("Price of book1 is: %.2f\n", Affraid.price);
	printf("Pages of book1 is: %d\n", Affraid.pages);
	printf("Price of book2 is: %.2f\n", Mankind.price);
	printf("Pages of book2 is: %d\n", Mankind.pages);
	return 0;
}
