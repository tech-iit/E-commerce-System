
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
struct item_details
{
    char item_name[100];
    int quantity;
    char seller_id[100];
    double price;
   char detail[100];

};

typedef struct item_details Item;

int main()
{     int found=0;
                 char str[99];
                char search[100];
                char line[120];
                int enter;
                printf("ENTER 1 IF U ARE SELLER ELSE whatever : ");
                scanf("%d",&enter);
printf("\n");
if(enter==1)
         {
             FILE *f;
             f = fopen("project.txt", "r+");
             printf("type ur id : ");
            
    scanf("%s",search);
            printf("\n\n");
        while(fgets(line, 120, f) != NULL)
        {   
           if(strlen(line)>0)
           {
                Item first_item;
                int i,pos=0;
                                    
                for(i = 0; line[i] != '|'; i++)
                {
                    first_item.item_name[pos++] = line[i];
                }
                 first_item.item_name[pos] = '\0';
                char tmp[20];
                pos = 0;
                i++;
                for(; line[i] != '|'; i++)
                {
                    tmp[pos++] = line[i];
                }
                 tmp[pos] = '\0';
                first_item.price = atoi(tmp);

                char chm[20];
                pos = 0;
                i++;

                for(; line[i] != '|'; i++)
                {
                    chm[pos++] = line[i];
                }
                chm[pos] = '\0';
                first_item.quantity = atoi(chm);
                pos=0;
               i++;
                for(; line[i] != '|'; i++)
                {

                first_item.detail[pos++] = line[i];

                }
                 first_item.detail[pos] = '\0';
                 pos = 0;
                  i++;
                for(; line[i] != '.'; i++)
                {
                    first_item.seller_id[pos++] = line[i];
                }
                first_item.seller_id[pos++] = '\0';

                if (strcmp(first_item.seller_id,search)==0)
                {
                   printf("item name = %s  ", first_item.item_name);
                    printf("detail : %s\n\n\n", first_item.detail);
                    printf("price = %f\n\n\n", first_item.price);
                    printf("quantity = %d\n", first_item.quantity);
                         printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
                         found++;
                }
     
            }
            
        }
        if(found==0)
        {
            printf("INVALID SELLER ID");
        }
        
        
fclose(f);
    }


       else
       { int founde=0;
         char search[100];
       double amount=0;
      int type,put_value,j;
         
         
         
       
        for(j=0;j<100;j++)
        {
            char line[100];
         FILE *f;
         f = fopen("project.txt", "r+");
            printf("IF U WANT TO BUY MORE TYPE 1 ELSE WHATEVER :");
            scanf("%d",&put_value);
            printf("\n");

            if(put_value==1)
            {
                printf("search item : ");
          int g=0;
scanf("%s",search);
             printf("\n\n");
        while(fgets(line, 120, f) != NULL)
        {   
           if(strlen(line)>0)
           {
                Item first_item;
                int i,pos=0;
                                    
                for(i = 0; line[i] != '|'; i++)
                {
                    first_item.item_name[pos++] = line[i];
                }
                 first_item.item_name[pos] = '\0';
                char tmp[20];
                pos = 0;
                i++;
                for(; line[i] != '|'; i++)
                {
                    tmp[pos++] = line[i];
                }
                 tmp[pos] = '\0';
                first_item.price = atoi(tmp);

                char chm[20];
                pos = 0;
                i++;

                for(; line[i] != '|'; i++)
                {
                    chm[pos++] = line[i];
                }
                chm[pos] = '\0';
                first_item.quantity = atoi(chm);

   
               pos=0;
               i++;
                for(; line[i] != '|'; i++)
                {

                first_item.detail[pos++] = line[i];

                }
                 first_item.detail[pos] = '\0';



                 pos = 0;
               i++;
                for(; line[i] != '.'; i++)
                {
                    first_item.seller_id[pos++] = line[i];
                }
                first_item.seller_id[pos] = '\0';
                

                if (strcmp(first_item.item_name,search)==0)
                {
                    printf("item name = %s  ", first_item.item_name);
                    printf("detail : %s\n\n\n", first_item.detail);
                    printf("price = %f\n\n\n", first_item.price);
                    printf("quantity = %d\n\n\n", first_item.quantity);
                    printf("Seller id = %s\n\n", first_item.seller_id);
                    printf("if u want to buy this type 1 : ");
                    scanf("%d",&type);
                    printf("\n\n");
                    if(type==1)
                    {
                        printf("quantity of this product : ");
                        int x;
                        scanf("%d",&x);
                        amount= amount + ((double)x*first_item.price)  ;
                     printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
                         printf("\n\n");
                    }
                    
                    else
                    {
                         continue;
                    }
                    founde++;
                }
                
            }
            
            continue;
        }
            }
          
            else{break;}
if(founde==0)
{
    printf("NOT FOUND \n");
}
            fclose(f);
        }
        if(founde>=1)
        {
 printf("TOTAL AMOUNT = %f",amount);}}
 printf("\n\n");
  printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
 return 0;
}