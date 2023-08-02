#include <stdio.h>
#include <math.h>
#define BASE_TICKET_PRICE 100

int main(void){
    char weather;
    int day;
    double discount_rate, ticket_price;

    printf("Is weather 'R'ainy or 'S'hiny?\n");
    scanf("%c", &weather);
    printf("Enter the day of the week:\n");
    printf("Mon as 1, Tue as 2, Wed as 3, Thu as 4, Fri as 5, Sat as 6, Sun as 7.\n");
    scanf("%d", &day);

    discount_rate=0;
    ticket_price=0;

    switch(weather){
        case 'R':{
            if(day<6){
                discount_rate=0.3;
                ticket_price = BASE_TICKET_PRICE - (BASE_TICKET_PRICE * discount_rate);
                break;
            }
            else{
                discount_rate=0.2;
                ticket_price = BASE_TICKET_PRICE - (BASE_TICKET_PRICE * discount_rate);
                break;
            }
        }
        case 'S':{
            if(day<6){
                discount_rate=0.1;
                ticket_price = BASE_TICKET_PRICE - (BASE_TICKET_PRICE * discount_rate);
                break;
            }
            else{
                discount_rate=0;
                ticket_price = BASE_TICKET_PRICE - (BASE_TICKET_PRICE * discount_rate);
                break;
            }
        }
        default: return 0;
    }

    printf("The discount rate is %f and the ticket price is %f.\n",discount_rate, ticket_price);

    return 0;
}
