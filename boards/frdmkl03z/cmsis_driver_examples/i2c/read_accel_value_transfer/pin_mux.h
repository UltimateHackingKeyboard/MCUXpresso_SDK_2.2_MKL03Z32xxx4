/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/* PORTB1 (number 13), J1[2]/D1/DEBUG_UART0_TX/CMP0_IN3/UART0_RX/I2C0_SDA */
#define BOARD_INITPINS_DEBUG_UART0_TX_PERIPHERAL                         LPUART0   /*!< Device name: LPUART0 */
#define BOARD_INITPINS_DEBUG_UART0_TX_SIGNAL                                  TX   /*!< LPUART0 signal: TX */
#define BOARD_INITPINS_DEBUG_UART0_TX_PIN_NAME                        LPUART0_TX   /*!< Pin name */
#define BOARD_INITPINS_DEBUG_UART0_TX_LABEL "J1[2]/D1/DEBUG_UART0_TX/CMP0_IN3/UART0_RX/I2C0_SDA" /*!< Label */
#define BOARD_INITPINS_DEBUG_UART0_TX_NAME                      "DEBUG_UART0_TX"   /*!< Identifier name */

/* PORTB2 (number 14), J1[1]/D0/DEBUG_UART0_RX/VREF_CAP/CMP_IN5/UART0_TX */
#define BOARD_INITPINS_DEBUG_UART0_RX_PERIPHERAL                         LPUART0   /*!< Device name: LPUART0 */
#define BOARD_INITPINS_DEBUG_UART0_RX_SIGNAL                                  RX   /*!< LPUART0 signal: RX */
#define BOARD_INITPINS_DEBUG_UART0_RX_PIN_NAME                        LPUART0_RX   /*!< Pin name */
#define BOARD_INITPINS_DEBUG_UART0_RX_LABEL "J1[1]/D0/DEBUG_UART0_RX/VREF_CAP/CMP_IN5/UART0_TX" /*!< Label */
#define BOARD_INITPINS_DEBUG_UART0_RX_NAME                      "DEBUG_UART0_RX"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

/* PORTB3 (number 17), J2[10]/D15/ACCEL_I2C_SCL/UART0_TX */
#define I2C0_INITPINS_ACCEL_I2C_SCL_PERIPHERAL                              I2C0   /*!< Device name: I2C0 */
#define I2C0_INITPINS_ACCEL_I2C_SCL_SIGNAL                                   SCL   /*!< I2C0 signal: SCL */
#define I2C0_INITPINS_ACCEL_I2C_SCL_PIN_NAME                            I2C0_SCL   /*!< Pin name */
#define I2C0_INITPINS_ACCEL_I2C_SCL_LABEL    "J2[10]/D15/ACCEL_I2C_SCL/UART0_TX"   /*!< Label */
#define I2C0_INITPINS_ACCEL_I2C_SCL_NAME                         "ACCEL_I2C_SCL"   /*!< Identifier name */

/* PORTB4 (number 18), J2[9]/D14/ACCEL_I2C_SDA/UART0_RX */
#define I2C0_INITPINS_ACCEL_I2C_SDA_PERIPHERAL                              I2C0   /*!< Device name: I2C0 */
#define I2C0_INITPINS_ACCEL_I2C_SDA_SIGNAL                                   SDA   /*!< I2C0 signal: SDA */
#define I2C0_INITPINS_ACCEL_I2C_SDA_PIN_NAME                            I2C0_SDA   /*!< Pin name */
#define I2C0_INITPINS_ACCEL_I2C_SDA_LABEL     "J2[9]/D14/ACCEL_I2C_SDA/UART0_RX"   /*!< Label */
#define I2C0_INITPINS_ACCEL_I2C_SDA_NAME                         "ACCEL_I2C_SDA"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void I2C0_InitPins(void);

/* PORTB3 (number 17), J2[10]/D15/ACCEL_I2C_SCL/UART0_TX */
#define I2C0_DEINITPINS_ACCEL_I2C_SCL_PERIPHERAL                             n/a   /*!< Device name: n/a */
#define I2C0_DEINITPINS_ACCEL_I2C_SCL_SIGNAL                            disabled   /*!< n/a signal: disabled */
#define I2C0_DEINITPINS_ACCEL_I2C_SCL_PIN_NAME   PTB3/IRQ_10/I2C0_SCL/LPUART0_TX   /*!< Pin name */
#define I2C0_DEINITPINS_ACCEL_I2C_SCL_LABEL  "J2[10]/D15/ACCEL_I2C_SCL/UART0_TX"   /*!< Label */
#define I2C0_DEINITPINS_ACCEL_I2C_SCL_NAME                       "ACCEL_I2C_SCL"   /*!< Identifier name */

/* PORTB4 (number 18), J2[9]/D14/ACCEL_I2C_SDA/UART0_RX */
#define I2C0_DEINITPINS_ACCEL_I2C_SDA_PERIPHERAL                             n/a   /*!< Device name: n/a */
#define I2C0_DEINITPINS_ACCEL_I2C_SDA_SIGNAL                            disabled   /*!< n/a signal: disabled */
#define I2C0_DEINITPINS_ACCEL_I2C_SDA_PIN_NAME   PTB4/IRQ_11/I2C0_SDA/LPUART0_RX   /*!< Pin name */
#define I2C0_DEINITPINS_ACCEL_I2C_SDA_LABEL   "J2[9]/D14/ACCEL_I2C_SDA/UART0_RX"   /*!< Label */
#define I2C0_DEINITPINS_ACCEL_I2C_SDA_NAME                       "ACCEL_I2C_SDA"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void I2C0_DeinitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
