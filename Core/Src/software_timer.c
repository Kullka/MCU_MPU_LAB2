/*
 * software_timer.c
 *
 *  Created on: Oct 11, 2022
 *      Author: TechCare
 */

#include "software_timer.h"

int timer0Counter;
int timer0Flag;
int TIMER_CYCLE = 10;

void set_timer0(int duration) {
	timer0Counter = duration/TIMER_CYCLE;
	timer0Flag = 0;
}

void timer0_run() {
	if (timer0Counter>0) {
		timer0Counter--;
		if (timer0Counter==0)	timer0Flag = 1;
	}
}
