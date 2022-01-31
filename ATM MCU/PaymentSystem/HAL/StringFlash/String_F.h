/*
 * String_F.h
 *
 * Created: 1/31/2022 11:33:03 PM
 *  Author: Ahmed_Ayman
 */ 


#ifndef STRING_F_H_
#define STRING_F_H_

#include <stdlib.h>
#include <avr/pgmspace.h>
#include <stdio.h>

typedef enum {String_F_OK , String_F_NOK } String_F_Status_t;



String_F_Status_t String_F_PrintLine(char *  Str_F);



String_F_Status_t String_F_PrintTwoLines(char *  Str_F1 ,char  *  Str_F2);




#endif /* STRING_F_H_ */