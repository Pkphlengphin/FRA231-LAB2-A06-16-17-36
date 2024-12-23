/*
 * DRV8825.h
 *
 *  Created on: Dec 6, 2024
 *      Author: beamk
 */

#ifndef INC_DRV8825_H_
#define INC_DRV8825_H_
#include "main.h"
#include "PWM.h"

typedef struct{

    GPIO_TypeDef *GPIO_M0;
	uint16_t GPIO_Pin_M0;
	GPIO_TypeDef *GPIO_M1;
	uint16_t GPIO_Pin_M1;
	GPIO_TypeDef *GPIO_M2;
	uint16_t GPIO_Pin_M2;

	GPIO_TypeDef *GPIO_DIR;
	uint16_t GPIO_Pin_DIR;
	GPIO_TypeDef *GPIO_EN;
	uint16_t GPIO_Pin_EN;

	TIM_HandleTypeDef *htimp; // Timer PWM
	uint16_t timp_chx;
	PWM pwm;

}DRV8825;

void DRV8825_init(DRV8825* drv,
                  TIM_HandleTypeDef* htimp,
                  uint16_t timp_chx,
                  GPIO_TypeDef *GPIO_M0,
                  uint16_t GPIO_Pin_M0,
                  GPIO_TypeDef *GPIO_M1,
                  uint16_t GPIO_Pin_M1,
                  GPIO_TypeDef *GPIO_M2,
                  uint16_t GPIO_Pin_M2,
                  GPIO_TypeDef *GPIO_DIR,
                  uint16_t GPIO_Pin_DIR,
                  GPIO_TypeDef *GPIO_EN,
                  uint16_t GPIO_Pin_EN);
void DRV8825_set_speed(DRV8825* drv, GPIO_PinState M0, GPIO_PinState M1, GPIO_PinState M2, GPIO_PinState DIR, GPIO_PinState EN,float freq);


#endif /* INC_DRV8825_H_ */
