/*
 * KeyPad.h
 *
 * Created: 5/5/2021 11:20:19 AM
 *  Author: Ahmed_Ayman
 */ 
# ifndef __KEYPAD_H__
#define __KEYPAD_H__


#include <stdint.h>
#include "HAL_GPIO.h"
#include "stdbool.h"

#include "KeyPad_Pins.h"

#if(!_USE_PULL_UP)

#define  WRIGHT_FIRST			GPIO_PIN_SET
#define  WRIGHT_SECOND			GPIO_PIN_RESET

#elif(_USE_PULL_UP)

#define  WRIGHT_FIRST			GPIO_PIN_RESET
#define  WRIGHT_SECOND			GPIO_PIN_SET


#endif


/*
 * brief  : this function used to return the pressed key 
 * param. : KeyPadInit pointer to the handler of keypad
 * return : pressed character 
 */
char KeyPad_GetPressedKey(KeyPad_t * KeyPad);

/*
 * brief  : this function used to initialize keypad
 * param. : KeyPadInit pointer to the handler of keypad
 * return : void 
 */
void KeyPad_Initialization(KeyPad_t * KeyPad);





#endif /*__KEYPAD_H__ */