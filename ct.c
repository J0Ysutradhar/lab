//3 Number question er answer:

#include <stdio.h>

int main() {
int discount_amount=5;
float total_cost, payable_cost;
int notebook, pen;
int notebook_price=45, pen_price=10;
printf("Enter the number of buy: ");
scanf("%d", &notebook);
printf("Enter the number od notebook of buy: ");
scanf("%d", &pen);
total_cost=((pen*pen_price)+(notebook*notebook_price));
payable_cost=  total_cost-((discount_amount/100.0)*total_cost);
printf("Your total cost %d", total_cost);
printf("You have to pay %.2f %f", payable_cost);

return 0;
}

//4 Number Question er answer

#include <stdio.h>


int main() {
    int days;
    printf("Enter total days of borrow: ");
    scanf("%d", &days);
    (days>7)?printf("You have to fine %d", (days-7)*10):(printf("You have retuned under 7 days you don't have to fine"));
    return 0;
}
