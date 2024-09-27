/*
 * timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: BilH
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

int timer_counter[10];
int timer_flag[10];

void set_timer(int index, int duration);
void timer_run();

#endif /* INC_TIMER_H_ */
