/*
 * DRV8825.c
 *
 *  Created on: Dec 6, 2024
 *      Author: beamk
 */
#include "DRV8825.h"
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
                  uint16_t GPIO_Pin_EN) {

    // Initialize GPIO pins for microstepping modes
    drv->GPIO_M0 = GPIO_M0;
    drv->GPIO_Pin_M0 = GPIO_Pin_M0;
    drv->GPIO_M1 = GPIO_M1;
    drv->GPIO_Pin_M1 = GPIO_Pin_M1;
    drv->GPIO_M2 = GPIO_M2;
    drv->GPIO_Pin_M2 = GPIO_Pin_M2;

    // Initialize GPIO pins for direction and enable
    drv->GPIO_DIR = GPIO_DIR;
    drv->GPIO_Pin_DIR = GPIO_Pin_DIR;
    drv->GPIO_EN = GPIO_EN;
    drv->GPIO_Pin_EN = GPIO_Pin_EN;

    // Initialize PWM timer and channel
    drv->htimp = htimp;
    drv->timp_chx = timp_chx;

    // Initialize PWM structure
	PWM_init(&(drv->pwm), htimp, timp_chx);

    // Set initial states for GPIO pins Full Step
    HAL_GPIO_WritePin(drv->GPIO_M0, drv->GPIO_Pin_M0, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(drv->GPIO_M1, drv->GPIO_Pin_M1, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(drv->GPIO_M2, drv->GPIO_Pin_M2, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(drv->GPIO_DIR, drv->GPIO_Pin_DIR, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(drv->GPIO_EN, drv->GPIO_Pin_EN, GPIO_PIN_SET); // Set to disable motor initially


}
void DRV8825_set_speed(DRV8825* drv, GPIO_PinState M0, GPIO_PinState M1, GPIO_PinState M2, GPIO_PinState DIR, GPIO_PinState EN,float freq){
    HAL_GPIO_WritePin(drv->GPIO_M0, drv->GPIO_Pin_M0, M0);
    HAL_GPIO_WritePin(drv->GPIO_M1, drv->GPIO_Pin_M1, M1);
    HAL_GPIO_WritePin(drv->GPIO_M2, drv->GPIO_Pin_M2, M2);
    HAL_GPIO_WritePin(drv->GPIO_DIR, drv->GPIO_Pin_DIR, DIR);
    HAL_GPIO_WritePin(drv->GPIO_EN, drv->GPIO_Pin_EN, EN);
    PWM_write_duty(&(drv->pwm), freq, 50);
}

