/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
int fun_y(int A , int B , int C , int D);
void fun_x(void);

int main(void)
{
  	fun_x();
	/*after calling func_x as an optimization
	 * no pushing of registers in stack
	 * i.e save beta3t elshar7 el kan by2ol 3laha
	 * amgod
	 */
	for(;;);
}

int fun_y(int A , int B , int C , int D)
{

	/*3amlt push ly r7 fel awl
	 * we ba3d 3amlt decrement lel sp b me2dar
	 * 20 3shan A- handle el stacking we subtract b 20
	 * 3shan 4 we 1 variable hay3mlo return variables we full descending
	 * trace it ya man :
080002be:   add     r7, sp, #0
080002c0:   str     r0, [r7, #12]
080002c2:   str     r1, [r7, #8]
080002c4:   str     r2, [r7, #4]
080002c6:   str     r3, [r7, #0]
	 */
	return A+B+C+D;
}

void fun_x(void)
{
	int ret = fun_y(1,2,3, 4);
	/*3aml lel arguments ka immediate value fel
	 * register men 30->r3 b tarteb el arguments
	 */
	printf("result=%i\n",ret);
}





