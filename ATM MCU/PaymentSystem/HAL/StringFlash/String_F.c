/*
 * String_F.c
 *
 * Created: 1/31/2022 11:32:48 PM
 *  Author: Ahmed_Ayman
 */ 
#include "String_F.h"




String_F_Status_t String_F_PrintLine(char const * Str_F)
{
	if (Str_F == NULL)
	{
		return String_F_NOK ; 
	}
		printf_P(PSTR("\n"));
		printf_P(PSTR("**************************************************************\n               " ));
		printf_P(Str_F);
		printf_P(PSTR("                \n"));		
		printf_P(PSTR("**************************************************************\n"));
		printf_P(PSTR("\n"));
		return   String_F_OK ;	
}



String_F_Status_t String_F_PrintTwoLines(char const *  Str_F1 ,char const *  Str_F2)
{
	if ((Str_F1 == NULL)||(Str_F2 == NULL))
	{
		return String_F_NOK ;
	}
	printf_P(PSTR("**************************************************************\n                " ));
	printf_P(Str_F1);	
	printf_P(PSTR("\n                "));	
	printf_P(Str_F2);
	printf_P(PSTR("\n"));
	printf_P(PSTR("**************************************************************\n"));
	return   String_F_OK ;
	
}


