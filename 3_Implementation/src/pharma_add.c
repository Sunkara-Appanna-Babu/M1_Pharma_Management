/**
 * @file pharma_add.c
 * @author Karthik S (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<pharma_operations.h>

void AddMedicine(int number,struct Medicine m[])
{
  char name[100];
  
  
  printf("Enter Medicine Id\n");
  scanf("%d",&(m[number].id));
  fflush(stdin);
  
  printf("Enter Medicine Name\n");
  scanf("%s",(m[number].medicneName));
  fflush(stdin);
  
  printf("Enter Company Name\n");
  fflush(stdin);
  scanf("%s",(m[number].Company));
  
  printf("Enter Manufactured Date\n");
  fflush(stdin);
  scanf("%s",(m[number].Mfg_Date));
  
  printf("Enter Expiry Date\n");
  fflush(stdin);
  scanf("%s",(m[number].Exp_Date));
  
  printf("Enter Quantity\n");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  
  printf("Enter Price\n");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  
  printf("Medicine with id %d Added Successfully\n",m[number].id);
}

