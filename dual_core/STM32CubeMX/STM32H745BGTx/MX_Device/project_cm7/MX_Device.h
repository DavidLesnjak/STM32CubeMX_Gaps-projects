/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 15/04/2024 14:58:31
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1

/* Pins */

/* ETH_COL */
#define MX_ETH_COL_Pin                          PH3
#define MX_ETH_COL_GPIO_Pin                     GPIO_PIN_3
#define MX_ETH_COL_GPIOx                        GPIOH
#define MX_ETH_COL_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_COL_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_COL_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_COL_GPIO_AF                      GPIO_AF11_ETH

/* ETH_CRS */
#define MX_ETH_CRS_Pin                          PA0
#define MX_ETH_CRS_GPIO_Pin                     GPIO_PIN_0
#define MX_ETH_CRS_GPIOx                        GPIOA
#define MX_ETH_CRS_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_CRS_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_CRS_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD2 */
#define MX_ETH_RXD2_Pin                         PB0
#define MX_ETH_RXD2_GPIO_Pin                    GPIO_PIN_0
#define MX_ETH_RXD2_GPIOx                       GPIOB
#define MX_ETH_RXD2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD2_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD2_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD2_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD3 */
#define MX_ETH_RXD3_Pin                         PB1
#define MX_ETH_RXD3_GPIO_Pin                    GPIO_PIN_1
#define MX_ETH_RXD3_GPIOx                       GPIOB
#define MX_ETH_RXD3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD3_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD3_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD3_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RX_CLK */
#define MX_ETH_RX_CLK_Pin                       PA1
#define MX_ETH_RX_CLK_GPIO_Pin                  GPIO_PIN_1
#define MX_ETH_RX_CLK_GPIOx                     GPIOA
#define MX_ETH_RX_CLK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_RX_CLK_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_RX_CLK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_CLK_GPIO_AF                   GPIO_AF11_ETH

/* ETH_RX_DV */
#define MX_ETH_RX_DV_Pin                        PA7
#define MX_ETH_RX_DV_GPIO_Pin                   GPIO_PIN_7
#define MX_ETH_RX_DV_GPIOx                      GPIOA
#define MX_ETH_RX_DV_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RX_DV_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RX_DV_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_DV_GPIO_AF                    GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                         PB12
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_12
#define MX_ETH_TXD0_GPIOx                       GPIOB
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                         PB13
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD1_GPIOx                       GPIOB
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD2 */
#define MX_ETH_TXD2_Pin                         PC2
#define MX_ETH_TXD2_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_TXD2_GPIOx                       GPIOC
#define MX_ETH_TXD2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD2_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD2_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD2_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD3 */
#define MX_ETH_TXD3_Pin                         PE2
#define MX_ETH_TXD3_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_TXD3_GPIOx                       GPIOE
#define MX_ETH_TXD3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD3_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD3_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD3_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TX_CLK */
#define MX_ETH_TX_CLK_Pin                       PC3
#define MX_ETH_TX_CLK_GPIO_Pin                  GPIO_PIN_3
#define MX_ETH_TX_CLK_GPIOx                     GPIOC
#define MX_ETH_TX_CLK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_TX_CLK_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_TX_CLK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_CLK_GPIO_AF                   GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                        PB11
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                      GPIOB
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH

#endif  /* MX_DEVICE_H__ */
