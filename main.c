#include <stdio.h>

int main()

{

int item, qty;

float price, total, vat, paid, change;

printf("Enter item number: ");

scanf("%d", &item);

printf("Enter quantity: ");

scanf("%d", &qty);

if (item == 1)

{

price = 90;

}

else if (item == 2)

{

price = 300;

}

else if (item == 3)

{ price = 150;

}

else if (item == 4)

{

price = 150;

}

else if (item == 5)

{

price = 70;

}

else if (item == 6)

{

 price = 40;

}

else

{

printf("Invalid item\n");

}

total = qty * price;

vat = total * 0.16;

}



