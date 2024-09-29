/*
 * timer.c
 *
 *  Created on: Sep 27, 2024
 *      Author: BilH
 */

#include "timer.h"

#define TIMER_CYCLE 10
#define MAX_COUNTER 2

int timer_counter[10] = {0};
int timer_flag[10] = {0};

void set_timer(int index, int duration)
{
	if (index < 0 || index >= MAX_COUNTER) return;

	timer_counter[index] = duration / TIMER_CYCLE;
	timer_flag[index] = 0;
}

void timer_run()
{
	for (int i = 0; i < MAX_COUNTER; i++)
	{
		if (timer_counter[i] > 0) timer_counter[i]--;
		if (timer_counter[i] <= 0) timer_flag[i] = 1;
	}
}
