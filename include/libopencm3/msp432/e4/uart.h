/** @defgroup qssi_defines Quad Synchronous Serial Interface Defines
 *
 * @ingroup MSP432E4xx_defines
 *
 * @brief Defined Constants and Types for the MSP432E4 QSSI
 *
 * @version 1.0.0
 *
 * @date TODO
 *
 * LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2018 Dmitry Rezvanov <dmitry.rezvanov@yandex.ru>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MSP432E4_UART_H
#define MSP432E4_UART_H

/**@{*/

#include <libopencm3/cm3/common.h>
#include <libopencm3/msp432/e4/memorymap.h>
#include <stdbool.h>

/** @defgroup uart_reg_base UART Register Base Addresses
 * @brief UART Register Base Addresses
@{*/
/** UART0 Base Address */
#define UART0				UART0_BASE
/** UART1 Base Address */
#define UART1				UART1_BASE
/** UART2 Base Address */
#define UART2				UART2_BASE
/** UART3 Base Address */
#define UART3				UART3_BASE
/** UART4 Base Address */
#define UART4				UART4_BASE
/** UART5 Base Address */
#define UART5				UART5_BASE
/** UART6 Base Address */
#define UART6				UART6_BASE
/** UART7 Base Address */
#define UART7				UART7_BASE
/**@}*/

/** @defgroup uart_registers UART Registers
 * @brief UART Registers
@{*/
/** UART Data */
#define UART_DR(uart_base)				MMIO32((uart_base) + 0x000)
/** UART Receive Status/Error Clear */
#define UART_RSR_ECR(uart_base)			MMIO32((uart_base) + 0x004)
/** UART Flag */
#define UART_FR(uart_base)				MMIO32((uart_base) + 0x018)
/** UART IrDA Low-Power Register */
#define UART_ILPR(uart_base)			MMIO32((uart_base) + 0x020)
/** UART Integer Baud-Rate Divisor */
#define UART_IBRD(uart_base)			MMIO32((uart_base) + 0x024)
/** UART Fractional Baud-Rate Divisor */
#define UART_FBRD(uart_base)			MMIO32((uart_base) + 0x028)
/** UART Line Control */
#define UART_LCRH(uart_base)			MMIO32((uart_base) + 0x02C)
/** UART Control */
#define UART_CTL(uart_base)				MMIO32((uart_base) + 0x030)
/** UART Interrupt FIFO Level Select */
#define UART_IFLS(uart_base)			MMIO32((uart_base) + 0x034)
/** UART Interrupt Mask */
#define UART_IM(uart_base)				MMIO32((uart_base) + 0x038)
/** UART Raw Interrupt Status */
#define UART_RIS(uart_base)				MMIO32((uart_base) + 0x03C)
/** UART Masked Interrupt Status */
#define UART_MIS(uart_base)				MMIO32((uart_base) + 0x040)
/** UART Interrupt Clear */
#define UART_ICR(uart_base)				MMIO32((uart_base) + 0x044)
/** UART DMA Control */
#define UART_DMACTL(uart_base)			MMIO32((uart_base) + 0x048)
/** UART 9-Bit Self Address */
#define UART_9BITADDR(uart_base)		MMIO32((uart_base) + 0x0A4)
/** UART 9-Bit Self Address Mask */
#define UART_9BITAMASK(uart_base)		MMIO32((uart_base) + 0x0A8)
/** UART Peripheral Properties */
#define UART_PP(uart_base)				MMIO32((uart_base) + 0xFC0)
/** UART Clock Configuration */
#define UART_CC(uart_base)				MMIO32((uart_base) + 0xFC8)

/** UART Peripheral Identification 4 */
#define UART_PERIPH_ID4(uart_base)		MMIO32((uart_base) + 0xFD0)
/** UART Peripheral Identification 5 */
#define UART_PERIPH_ID5(uart_base)		MMIO32((uart_base) + 0xFD4)
/** UART Peripheral Identification 6 */
#define UART_PERIPH_ID6(uart_base)		MMIO32((uart_base) + 0xFD8)
/** UART Peripheral Identification 7 */
#define UART_PERIPH_ID7(uart_base)		MMIO32((uart_base) + 0xFDC)
/** UART Peripheral Identification 0 */
#define UART_PERIPH_ID0(uart_base)		MMIO32((uart_base) + 0xFE0)
/** UART Peripheral Identification 1 */
#define UART_PERIPH_ID1(uart_base)		MMIO32((uart_base) + 0xFE4)
/** UART Peripheral Identification 2 */
#define UART_PERIPH_ID2(uart_base)		MMIO32((uart_base) + 0xFE8)
/** UART Peripheral Identification 3 */
#define UART_PERIPH_ID3(uart_base)		MMIO32((uart_base) + 0xFEC)

/** UART PrimeCell Identification 0 */
#define UART_PCELL_ID0(uart_base)		MMIO32((uart_base) + 0xFF0)
/** UART PrimeCell Identification 1 */
#define UART_PCELL_ID1(uart_base)		MMIO32((uart_base) + 0xFF4)
/** UART PrimeCell Identification 2 */
#define UART_PCELL_ID2(uart_base)		MMIO32((uart_base) + 0xFF8)
/** UART PrimeCell Identification 3 */
#define UART_PCELL_ID3(uart_base)		MMIO32((uart_base) + 0xFFC)
/**@}*/

/** @defgroup uart_dr_values UART_DR Values
 * @brief UART Data Register Values
@{*/
/** Overrun Error */
#define UART_DR_OE				(1 << 11)
/** Break Error */
#define UART_DR_BE				(1 << 10)
/** Parity Error */
#define UART_DR_PE				(1 << 9)
/** Framing Error */
#define UART_DR_FE				(1 << 8)
/** Data Transmitted or Received Mask */
#define UART_DR_DATA_MASK		(0xFF)
/** Data Transmitted or Received */
#define UART_DR_DATA(x)			((x) & UART_DR_DATA_MASK)
/**@}*/

/** @defgroup uart_rsr_ecr_values UART_RSR_ECR Values
 * @brief UART Receive Status/Error Clear Register Values
@{*/
/** Overrun Error */
#define UART_RSR_ECR_OE			(1 << 3)
/** Break Error */
#define UART_RSR_ECR_BE			(1 << 2)
/** Parity Error */
#define UART_RSR_ECR_PE			(1 << 1)
/** Framing Error */
#define UART_RSR_ECR_FE			(1 << 0)
/**@}*/

/** @defgroup uart_fr_values UART_FR Values
 * @brief UART Flag Register Values
@{*/
/** Ring Indicator */
#define UART_FR_RI				(1 << 8)
/** Transmit FIFO Empty */
#define UART_FR_TXFE			(1 << 7)
/** Receive FIFO Full */
#define UART_FR_RXFF			(1 << 6)
/** Transmit FIFO Full */
#define UART_FR_TXFF			(1 << 5)
/** Receive FIFO Empty */
#define UART_FR_RXFE			(1 << 4)
/** Busy */
#define UART_FR_BUSY			(1 << 3)
/** Data Carrier Detect */
#define UART_FR_DCD				(1 << 2)
/** Data Set Ready */
#define UART_FR_DSR				(1 << 1)
/** Clear To Send */
#define UART_FR_CTS				(1 << 0)
/**@}*/

/** @defgroup uart_ilpr_values UART_ILPR Values
 * @brief UART IrDA Low-Power Register Register Values
@{*/
/** IrDA Low-Power Divisor Mask */
#define UART_ILPR_ILPDVSR_MASK		(0xFF)
/** IrDA Low-Power Divisor */
#define UART_ILPR_ILPDVSR(x)		((x) & UART_ILPR_ILPDVSR_MASK)
/**@}*/

/** @defgroup uart_ibrd_values UART_IBRD Values
 * @brief UART Integer Baud-Rate Divisor Register Values
@{*/
/** Integer Baud-Rate Divisor Mask */
#define UART_IBRD_DIVINT_MASK		(0xFFFF)
/** Integer Baud-Rate Divisor */
#define UART_IBRD_DIVINT(x)			((x) & UART_IBRD_DIVINT_MASK)
/**@}*/

/** @defgroup uart_fbrd_values UART_FBRD Values
 * @brief UART Fractional Baud-Rate Divisor Register Values
@{*/
/** Fractional Baud-Rate Divisor Mask */
#define UART_FBRD_DIVFRAC_MASK		(0x3F)
/** Fractional Baud-Rate Divisor */
#define UART_FBRD_DIVFRAC(x)		((x) & UART_FBRD_DIVFRAC_MASK)
/**@}*/

/** @defgroup uart_lcrh_values UART_LCRH Values
 * @brief UART Line Control Register Values
@{*/
/** Stick Parity Select */
#define UART_LCRH_SPS			(1 << 7)
/** Word Length Shift */
#define UART_LCRH_WLEN_SHIFT	(5)
/** Word Length */
#define UART_LCRH_WLEN			(0x3 << UART_LCRH_WLEN_SHIFT)
/** Word Length - 5 bits */
#define UART_LCRH_WLEN_5		(0x0)
/** Word Length - 6 bits */
#define UART_LCRH_WLEN_6		(0x1 << UART_LCRH_WLEN_SHIFT)
/** Word Length - 7 bits */
#define UART_LCRH_WLEN_7		(0x2 << UART_LCRH_WLEN_SHIFT)
/** Word Length - 8 bits */
#define UART_LCRH_WLEN_8		(0x3 << UART_LCRH_WLEN_SHIFT)
/** Enable FIFOs */
#define UART_LCRH_FEN			(1 << 4)
/** Two Stop Bits Select */
#define UART_LCRH_STP2			(1 << 3)
/** Even Parity Select */
#define UART_LCRH_EPS			(1 << 2)
/** Parity Enable */
#define UART_LCRH_PEN			(1 << 1)
/** Send Break */
#define UART_LCRH_BRK			(1 << 0)
/**@}*/

/** @defgroup uart_ctl_values UART_CTL Values
 * @brief UART Control Register Values
@{*/
/** Enable Clear To Send */
#define UART_CTL_CTSEN			(1 << 15)
/** Enable Request to Send */
#define UART_CTL_RTSEN			(1 << 14)
/** Request to Send */
#define UART_CTL_RTS			(1 << 11)
/** Data Terminal Ready */
#define UART_CTL_DTR			(1 << 10)
/** Receive Enable */
#define UART_CTL_RXE			(1 << 9)
/** Transmit Enable */
#define UART_CTL_TXE			(1 << 8)
/** Loop Back Enable */
#define UART_CTL_LBE			(1 << 7)
/** High-Speed Enable */
#define UART_CTL_HSE			(1 << 5)
/** End of Transmission */
#define UART_CTL_EOT			(1 << 4)
/** ISO 7816 Smart Card Support */
#define UART_CTL_SMART			(1 << 3)
/** SIR Low-Power Mode */
#define UART_CTL_SIRLP			(1 << 2)
/** SIR Enable */
#define UART_CTL_SIREN			(1 << 1)
/** UART Enable */
#define UART_CTL_UARTEN			(1 << 0)
/**@}*/

/** @defgroup uart_ifls_values UART_IFLS Values
 * @brief UART Interrupt FIFO Level Select Register Values
@{*/
/** Receive Interrupt FIFO Level Select Shift */
#define UART_IFLS_RXIFLSEL_SHIFT		(3)
/** Receive Interrupt FIFO Level Select */
#define UART_IFLS_RXIFLSEL				(0x7 << UART_IFLS_RXIFLSEL_SHIFT)
/** Receive Interrupt FIFO Level Select - equal or above 1/8 full */
#define UART_IFLS_RXIFLSEL_1_DIV_8		(0x0)
/** Receive Interrupt FIFO Level Select - equal or above 1/4 full */
#define UART_IFLS_RXIFLSEL_1_DIV_4		(0x1 << UART_IFLS_RXIFLSEL_SHIFT)
/** Receive Interrupt FIFO Level Select - equal or above 1/2 full */
#define UART_IFLS_RXIFLSEL_1_DIV_2		(0x2 << UART_IFLS_RXIFLSEL_SHIFT)
/** Receive Interrupt FIFO Level Select - equal or above 3/4 full */
#define UART_IFLS_RXIFLSEL_3_DIV_4		(0x3 << UART_IFLS_RXIFLSEL_SHIFT)
/** Receive Interrupt FIFO Level Select - equal or above 7/8 full */
#define UART_IFLS_RXIFLSEL_7_DIV_8		(0x4 << UART_IFLS_RXIFLSEL_SHIFT)
/** Transmit Interrupt FIFO Level Select */
#define UART_IFLS_TXIFLSEL				(0x7)
/** Transmit Interrupt FIFO Level Select - less or equal 7/8 empty */
#define UART_IFLS_TXIFLSEL_7_DIV_8		(0x0)
/** Transmit Interrupt FIFO Level Select - less or equal 3/4 empty */
#define UART_IFLS_TXIFLSEL_3_DIV_4		(0x1)
/** Transmit Interrupt FIFO Level Select - less or equal 1/2 empty */
#define UART_IFLS_TXIFLSEL_1_DIV_2		(0x2)
/** Transmit Interrupt FIFO Level Select - less or equal 1/4 empty */
#define UART_IFLS_TXIFLSEL_1_DIV_4		(0x3)
/** Transmit Interrupt FIFO Level Select - less or equal 1/8 empty */
#define UART_IFLS_TXIFLSEL_1_DIV_8		(0x4)
/**@}*/

/** @defgroup uart_im_values UART_IM Values
 * @brief UART Interrupt Mask Register Values
@{*/
/** Transmit DMA Interrupt Mask */
#define UART_IM_DMATXIM			(1 << 17)
/** Receive DMA Interrupt Mask */
#define UART_IM_DMARXIM			(1 << 16)
/** 9-Bit Mode Interrupt Mask */
#define UART_IM_9BITIM			(1 << 12)
/** End of Transmission Interrupt Mask */
#define UART_IM_EOTIM			(1 << 11)
/** Overrun Error Interrupt Mask */
#define UART_IM_OEIM			(1 << 10)
/** Break Error Interrupt Mask */
#define UART_IM_BEIM			(1 << 9)
/** Parity Error Interrupt Mask */
#define UART_IM_PEIM			(1 << 8)
/** Framing Error Interrupt Mask */
#define UART_IM_FEIM			(1 << 7)
/** Receive Time-Out Interrupt Mask */
#define UART_IM_RTIM			(1 << 6)
/** Transmit Interrupt Mask */
#define UART_IM_TXIM			(1 << 5)
/** Receive Interrupt Mask */
#define UART_IM_RXIM			(1 << 4)
/** Data Set Ready Modem Interrupt Mask */
#define UART_IM_DSRIM			(1 << 3)
/** Data Carrier Detect Modem Interrupt Mask */
#define UART_IM_DCDIM			(1 << 2)
/** Clear to Send Modem Interrupt Mask */
#define UART_IM_CTSIM			(1 << 1)
/** Ring Indicator Modem Interrupt Mask */
#define UART_IM_RIIM			(1 << 0)
/**@}*/

/** @defgroup uart_ris_values UART_RIS Values
 * @brief UART Raw Interrupt Status Register Values
@{*/
/** Transmit DMA Raw Interrupt Status */
#define UART_RIS_DMATXRIS		(1 << 17)
/** Receive DMA Raw Interrupt Status */
#define UART_RIS_DMARXRIS		(1 << 16)
/** 9-Bit Mode Raw Interrupt Status */
#define UART_RIS_9BITRIS		(1 << 12)
/** End of Transmission Raw Interrupt Status */
#define UART_RIS_EOTRIS			(1 << 11)
/** Overrun Error Raw Interrupt Status */
#define UART_RIS_OERIS			(1 << 10)
/** Break Error Raw Interrupt Status */
#define UART_RIS_BERIS			(1 << 9)
/** Parity Error Raw Interrupt Status */
#define UART_RIS_PERIS			(1 << 8)
/** Framing Error Raw Interrupt Status */
#define UART_RIS_FERIS			(1 << 7)
/** Receive Time-Out Raw Interrupt Status */
#define UART_RIS_RTRIS			(1 << 6)
/** Transmit Raw Interrupt Status */
#define UART_RIS_TXRIS			(1 << 5)
/** Receive Raw Interrupt Status */
#define UART_RIS_RXRIS			(1 << 4)
/** Data Set Ready Modem Raw Interrupt Status */
#define UART_RIS_DSRRIS			(1 << 3)
/** Data Carrier Detect Modem Raw Interrupt Status */
#define UART_RIS_DCDRIS			(1 << 2)
/** Clear to Send Modem Raw Interrupt Status */
#define UART_RIS_CTSRIS			(1 << 1)
/** Ring Indicator Modem Raw Interrupt Status */
#define UART_RIS_RIRIS			(1 << 0)
/**@}*/

/** @defgroup uart_mis_values UART_MIS Values
 * @brief UART Masked Interrupt Status Register Values
@{*/
/** Transmit DMA Masked Interrupt Status */
#define UART_MIS_DMATXMIS		(1 << 17)
/** Receive DMA Masked Interrupt Status */
#define UART_MIS_DMARXMIS		(1 << 16)
/** 9-Bit Mode Masked Interrupt Status */
#define UART_MIS_9BITMIS		(1 << 12)
/** End of Transmission Masked Interrupt Status */
#define UART_MIS_EOTMIS			(1 << 11)
/** Overrun Error Masked Interrupt Status */
#define UART_MIS_OEMIS			(1 << 10)
/** Break Error Masked Interrupt Status */
#define UART_MIS_BEMIS			(1 << 9)
/** Parity Error Masked Interrupt Status */
#define UART_MIS_PEMIS			(1 << 8)
/** Framing Error Masked Interrupt Status */
#define UART_MIS_FEMIS			(1 << 7)
/** Receive Time-Out Masked Interrupt Status */
#define UART_MIS_RTMIS			(1 << 6)
/** Transmit Masked Interrupt Status */
#define UART_MIS_TXMIS			(1 << 5)
/** Receive Masked Interrupt Status */
#define UART_MIS_RXMIS			(1 << 4)
/** Data Set Ready Modem Masked Interrupt Status */
#define UART_MIS_DSRMIS			(1 << 3)
/** Data Carrier Detect Modem Masked Interrupt Status */
#define UART_MIS_DCDMIS			(1 << 2)
/** Clear to Send Modem Masked Interrupt Status */
#define UART_MIS_CTSMIS			(1 << 1)
/** Ring Indicator Modem Masked Interrupt Status */
#define UART_MIS_RIMIS			(1 << 0)
/**@}*/

/** @defgroup uart_icr_values UART_ICR Values
 * @brief UART Interrupt Clear Register Values
@{*/
/** Transmit DMA Interrupt Clear */
#define UART_ICR_DMATXIC		(1 << 17)
/** Receive DMA Interrupt Clear */
#define UART_ICR_DMARXIC		(1 << 16)
/** 9-Bit Mode Interrupt Clear */
#define UART_ICR_9BITIC			(1 << 12)
/** End of Transmission Interrupt Clear */
#define UART_ICR_EOTIC			(1 << 11)
/** Overrun Error Interrupt Clear */
#define UART_ICR_OEIC			(1 << 10)
/** Break Error Interrupt Clear */
#define UART_ICR_BEIC			(1 << 9)
/** Parity Error Interrupt Clear */
#define UART_ICR_PEIC			(1 << 8)
/** Framing Error Interrupt Clear */
#define UART_ICR_FEIC			(1 << 7)
/** Receive Time-Out Interrupt Clear */
#define UART_ICR_RTIC			(1 << 6)
/** Transmit Interrupt Clear */
#define UART_ICR_TXIC			(1 << 5)
/** Receive Interrupt Clear */
#define UART_ICR_RXIC			(1 << 4)
/** Data Set Ready Modem Interrupt Clear */
#define UART_ICR_DSRMIC			(1 << 3)
/** Data Carrier Detect Modem Interrupt Clear */
#define UART_ICR_DCDMIC			(1 << 2)
/** Clear to Send Modem Interrupt Clear */
#define UART_ICR_CTSMIC			(1 << 1)
/** Ring Indicator Modem Interrupt Clear */
#define UART_ICR_RIMIC			(1 << 0)
/**@}*/

/** @defgroup uart_dmactl_values UART_DMACTL Values
 * @brief UART DMA Control Register Values
@{*/
/** DMA on Error */
#define UART_DMACTL_DMAERR		(1 << 2)
/** Transmit DMA Enable */
#define UART_DMACTL_TXDMAE		(1 << 1)
/** Receive DMA Enable */
#define UART_DMACTL_RXDMAE		(1 << 0)
/**@}*/

/** @defgroup uart_9bitaddr_values UART_9BITADDR Values
 * @brief UART 9-Bit Self Address Register Values
@{*/
/** Enable 9-Bit Mode */
#define UART_9BITADDR_9BITEN		(1 << 15)
/** Self Address for 9-Bit Mode Mask */
#define UART_9BITADDR_ADDR_MASK		(0xFF)
/** Self Address for 9-Bit Mode */
#define UART_9BITADDR_ADDR(x)		((x) & UART_9BITADDR_ADDR_MASK)
/**@}*/

/** @defgroup uart_9bitamask_values UART_9BITAMASK Values
 * @brief UART 9-Bit Self Address Mask Register Values
@{*/
/** Self Address Mask for 9-Bit Mode Mask */
#define UART_9BITAMASK_MASK_MASK	(0xFF)
/** Self Address Mask for 9-Bit Mode */
#define UART_9BITAMASK_MASK(x)		((x) & UART_9BITAMASK_MASK_MASK)
/**@}*/

/** @defgroup uart_pp_values UART_PP Values
 * @brief UART Peripheral Properties Register Values
@{*/
/** Modem Support Extended */
#define UART_PP_MSE				(1 << 3)
/** Modem Support */
#define UART_PP_MS				(1 << 2)
/** 9-Bit Support */
#define UART_PP_NB				(1 << 1)
/** Smart Card Support */
#define UART_PP_SC				(1 << 0)
/**@}*/

/** @defgroup uart_cc_values UART_CC Values
 * @brief UART Clock Configuration Register Values
@{*/
/** UART Baud Clock Source */
#define UART_CC_CS				(0xF)
/**  */
#define UART_CC_CS_1
/**  */
#define UART_CC_CS_2
/**  */
#define UART_CC_CS_3
/**  */
#define UART_CC_CS_4
/**@}*/

/**@}*/

#endif /* MSP432E4_UART_H */
