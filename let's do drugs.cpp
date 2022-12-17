#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<iostream>
#include<locale.h>


main(void)
{
    //let's do drugs it's a program for use educational no incentive to use drugs for everything here is just a program, Thanks. BY: VLG'S
    // sorry for English, i'm Brazilian and my English is a very very bad XD

    int select=0,marijuanaAmount,marijuanaTotalPrice, select_payment=0,marijuanaPriceAcresciment,password,cocaineamount,cocaineTotalPrice=0,cocaineTotalPriceAcresciment;
    int heroinAmount,heroinTotalPrice=0, heroinPriceTotalAcresciment;
    float money=0,troco=0;
    char confirm;

    printf("\n\tBuy your drugs!!!\n\t");
    printf("\n\t1- Marijuana\n\t2-Cocaine\n\t3-Heroin\n");
    printf("\n enter your purchase: ");
    scanf("%d",&select);
    system("clear||cls");

    switch(select)
    {
        case 1:
                
                printf("\n You select Marijuana, very nice choice\n");
                printf("\nthis a price for Marijuana $7 \n");   
                printf("\ninform the amount of Marijuana: ");
                scanf("%d",&marijuanaAmount);
                system("clear||cls");

                marijuanaTotalPrice =  marijuanaAmount* 7;

                printf("\n the total price of Marijuana was: %d",marijuanaTotalPrice);
              
                printf("\n\t1- Credit\n\t2-Debit\n\t3-Cash");
                printf("\n select your method of payment: ");
                scanf("%d",&select_payment);
                system("clear||cls");

                switch(select_payment)
                {
                    case 1:
                            printf("Nice bro, you selected credit but 6.38 porcent more will be charged to your account");

                            marijuanaPriceAcresciment=(marijuanaTotalPrice * 0.0638)+marijuanaTotalPrice; //

                            printf("\ntotal: $ %d ",marijuanaPriceAcresciment);
                            printf("\ninsert you password to coonfirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 2:
                            printf("\n Nice bro, you selected debit\n ");
                             printf("\ninsert you password to coonfirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 3 :
                     printf("\n Nice bro, you selected cash\n ");
                            printf("\ntell me how much money do you have: ");
                            scanf("%f",&money);
                            troco = marijuanaTotalPrice-money;
                            printf("%f",troco);  
                }
                break; 
        break;

        case 2:
                printf("\nYou select Cocaine, very nice choice\n");
                printf("\nthis a price for Marijuana $25\n");   
                printf("\ninform the amount of grams $25: ");
                scanf("%d",&cocaineamount);

                cocaineTotalPrice = cocaineamount * 25;
                
                system("clear||cls");

                 printf("\n\t1- Credit\n\t2-Debit\n\t3-Cash");
                printf("\n select your method of payment: ");
                scanf("%d",&select_payment);
                system("clear||cls");

                switch(select_payment)
                {
                    case 1:
                            printf("Nice bro, you selected credit but 6.38 porcent more will be charged to your account");

                            cocaineTotalPriceAcresciment=(cocaineTotalPrice * 0.0638)+cocaineTotalPrice; //

                            printf("\ntotal: $ %d ",cocaineTotalPriceAcresciment);
                            printf("\ninsert you password to coonfirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 2:
                            printf("\n Nice bro, you selected debit\n ");
                             printf("\ninsert you password to confirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 3 :
                     printf("\n Nice bro, you selected cash\n ");
                            printf("\ntell me how much money do you have: ");
                            scanf("%f",&money);
                            troco = cocaineTotalPrice - money;
                            printf("%f",troco); 
                }
                break; 
        break;

        case 3:
                printf("\n You select Heroin, very nice choice\n");
                printf("\nthis a price for heroin $30 \n");   
                printf("\ninform the amount of heroin: ");
                scanf("%d",&heroinAmount);
                system("clear||cls");

                heroinTotalPrice =  heroinAmount* 30;

                printf("\n the total price of heroin was: %d",heroinTotalPrice);
              
                printf("\n\t1- Credit\n\t2-Debit\n\t3-Cash");
                printf("\n select your method of payment: ");
                scanf("%d",&select_payment);
                system("clear||cls");

                switch(select_payment)
                {
                    case 1:
                            printf("Nice bro, you selected credit but 6.38 porcent more will be charged to your account");

                           heroinPriceTotalAcresciment =(heroinTotalPrice * 0.0638)+heroinTotalPrice; //

                            printf("\ntotal: $ %d ",heroinTotalPrice);
                            printf("\ninsert you password to coonfirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 2:
                            printf("\n Nice bro, you selected debit\n ");
                             printf("\ninsert you password to coonfirm you buy: ");
                            scanf("%d",&password);
                            system("clear||cls");
                            printf("\n%d\n" , password);
                            printf("\npassword is correct?(S OR N):  ");
                            scanf("%s",&confirm);
                            if(confirm == 'S'||confirm=='s')
                            {
                                system("clear||cls");
                                 printf("\nThanks your buy, bro :)");
                            }
                            else if(confirm == 'N'||confirm=='n')
                            {
                                password = 0;
                                printf("\ninsert you corret password: ");
                                scanf("%d",&password);
                                system("clear||cls");
                                printf("\nThanks your buy, bro :)");
                            }
                            break;

                    case 3 :
                     printf("\n Nice bro, you selected cash\n ");
                            printf("\ntell me how much money do you have: ");
                            scanf("%f",&money);
                            troco = heroinTotalPrice-money;
                            printf("%f",troco);
                }
                break; 

            break;
    }
}

