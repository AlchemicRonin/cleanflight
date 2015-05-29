/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "CRAZE" // Crazepony
#define USE_HARDWARE_REVISION_DETECTION

#define LED0_GPIO GPIOA
#define LED0_PIN Pin_11 // PC11 (LED)
#define LED0
#define LED0_PERIPHERAL RCC_APB2Periph_GPIOA
#define LED1_GPIO GPIOA
#define LED1_PIN Pin_8 // PC8 (LED)
#define LED1
#define LED1_PERIPHERAL RCC_APB2Periph_GPIOA
#define LED2_GPIO GPIOB
#define LED2_PIN Pin_1 // PC1 (LED)
#define LED2
#define LED2_PERIPHERAL RCC_APB2Periph_GPIOB
#define LED3_GPIO GPIOB
#define LED3_PIN Pin_3 // PC3 (LED)
#define LED3
#define LED3_PERIPHERAL 

#define ACC
#define USE_ACC_MPU6050

#define GYRO
#define USE_GYRO_MPU6050

//#define BARO
//#define USE_BARO_MS5611

#define USE_ADC
#define CURRENT_METER_ADC_GPIO      GPIOB
#define CURRENT_METER_ADC_GPIO_PIN  GPIO_Pin_1
#define CURRENT_METER_ADC_CHANNEL   ADC_Channel_9

#define VBAT_ADC_GPIO               GPIOA
#define VBAT_ADC_GPIO_PIN           GPIO_Pin_0
#define VBAT_ADC_CHANNEL            ADC_Channel_0

#define RSSI_ADC_GPIO               GPIOA
#define RSSI_ADC_GPIO_PIN           GPIO_Pin_1
#define RSSI_ADC_CHANNEL            ADC_Channel_1

#define BRUSHED_MOTORS

//#define USE_VCP
#define USE_USART1
//#define USE_USART2
//#define USE_SOFTSERIAL1
#define SERIAL_PORT_COUNT 1

//#define SOFTSERIAL_1_TIMER TIM3
//#define SOFTSERIAL_1_TIMER_TX_HARDWARE 1 // PWM 2
//#define SOFTSERIAL_1_TIMER_RX_HARDWARE 2 // PWM 3

#define USE_I2C
#define I2C_DEVICE (I2CDEV_2)

#define SOFT_I2C // enable to test software i2c
//#define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
#define SOFT_I2C_PB67

#define SERIAL_RX
#define USE_SERVOS

//#define SPEKTRUM_BIND
// USART2, PA3
//#define BIND_PORT  GPIOA
//#define BIND_PIN   Pin_3

// Since the CJMCU PCB has holes for 4 motors in each corner we can save same flash space by disabling support for other mixers.
//#define USE_QUAD_MIXER_ONLY

#if (FLASH_SIZE > 256)
#define BLACKBOX
#endif