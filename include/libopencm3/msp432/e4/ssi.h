/** @defgroup ssi_defines Quad Synchronous Serial Interface Defines
 *
 * @ingroup MSP432E4xx_defines
 *
 * @brief Defined Constants and Types for the MSP432E4 SSI
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

#ifndef MSP432E4_SSI_H
#define MSP432E4_SSI_H

/**@{*/

#include <libopencm3/cm3/common.h>
#include <libopencm3/msp432/e4/memorymap.h>
#include <stdbool.h>

/** @defgroup ssi_reg_base SSI Register Base Addresses
 * @brief SSI Register Base Addresses
@{*/
/** SSI0 Base Address */
#define SSI0				SSI0_BASE
/** SSI1 Base Address */
#define SSI1				SSI1_BASE
/** SSI2 Base Address */
#define SSI2				SSI2_BASE
/** SSI3 Base Address */
#define SSI3				SSI3_BASE
/**@}*/

/** @defgroup ssi_registers SSI Registers
 * @brief SSI Registers
@{*/
/** SSI Control 0 */
#define SSI_CR0(ssi_base)				MMIO32((ssi_base) + 0x000)
/** SSI Control 1 */
#define SSI_CR1(ssi_base)				MMIO32((ssi_base) + 0x004)
/** SSI Data */
#define SSI_DR(ssi_base)				MMIO32((ssi_base) + 0x008)
/** SSI Status */
#define SSI_SR(ssi_base)				MMIO32((ssi_base) + 0x00C)
/** SSI Clock Prescale */
#define SSI_CPSR(ssi_base)				MMIO32((ssi_base) + 0x010)
/** SSI Interrupt Mask */
#define SSI_IM(ssi_base)				MMIO32((ssi_base) + 0x014)
/** SSI Raw Interrupt Status */
#define SSI_RIS(ssi_base)				MMIO32((ssi_base) + 0x018)
/** SSI Masked Interrupt Status */
#define SSI_MIS(ssi_base)				MMIO32((ssi_base) + 0x01C)
/** SSI Interrupt Clear */
#define SSI_ICR(ssi_base)				MMIO32((ssi_base) + 0x020)
/** SSI DMA Control */
#define SSI_DMACTL(ssi_base)			MMIO32((ssi_base) + 0x024)
/** SSI Peripheral Properties */
#define SSI_PP(ssi_base)				MMIO32((ssi_base) + 0xFC0)
/** SSI Clock Configuration */
#define SSI_CC(ssi_base)				MMIO32((ssi_base) + 0xFC8)

/** SSI Peripheral Identification 4 */
#define SSI_PERIPH_ID4(ssi_base)		MMIO32((ssi_base) + 0xFD0)
/** SSI Peripheral Identification 5 */
#define SSI_PERIPH_ID5(ssi_base)		MMIO32((ssi_base) + 0xFD4)
/** SSI Peripheral Identification 6 */
#define SSI_PERIPH_ID6(ssi_base)		MMIO32((ssi_base) + 0xFD8)
/** SSI Peripheral Identification 7 */
#define SSI_PERIPH_ID7(ssi_base)		MMIO32((ssi_base) + 0xFDC)
/** SSI Peripheral Identification 0 */
#define SSI_PERIPH_ID0(ssi_base)		MMIO32((ssi_base) + 0xFE0)
/** SSI Peripheral Identification 1 */
#define SSI_PERIPH_ID1(ssi_base)		MMIO32((ssi_base) + 0xFE4)
/** SSI Peripheral Identification 2 */
#define SSI_PERIPH_ID2(ssi_base)		MMIO32((ssi_base) + 0xFE8)
/** SSI Peripheral Identification 3 */
#define SSI_PERIPH_ID3(ssi_base)		MMIO32((ssi_base) + 0xFEC)

/** SSI PrimeCell Identification 0 */
#define SSI_PCELL_ID0(ssi_base)			MMIO32((ssi_base) + 0xFF0)
/** SSI PrimeCell Identification 1 */
#define SSI_PCELL_ID1(ssi_base)			MMIO32((ssi_base) + 0xFF4)
/** SSI PrimeCell Identification 2 */
#define SSI_PCELL_ID2(ssi_base)			MMIO32((ssi_base) + 0xFF8)
/** SSI PrimeCell Identification 3 */
#define SSI_PCELL_ID3(ssi_base)			MMIO32((ssi_base) + 0xFFC)
/**@}*/

/** @defgroup ssi_cr0_values SSI_CR0 Values
 * @brief SSI Control 0 Register Values
@{*/
/** Serial Clock Rate Shift */
#define SSI_CR0_SCR_SHIFT		(8)
/** Serial Clock Rate Mask */
#define SSI_CR0_SCR_MASK		(0xFF)
/** Serial Clock Rate */
#define SSI_CR0_SCR(x)			(((x) & SSI_CR0_SCR_MASK) << SSI_CR0_SCR_SHIFT)
/** Serial Clock Phase */
#define SSI_CR0_SPH				(1 << 7)
/** Serial Clock Polarity */
#define SSI_CR0_SPO				(1 << 6)
/** Frame Format Select Shift */
#define SSI_CR0_FRF_SHIFT		(4)
/** Frame Format Select */
#define SSI_CR0_FRF				(0x3 << SSI_CR0_FRF_SHIFT)
/** Frame Format Select - Freescale SPI Frame Format */
#define SSI_CR0_FRF_FREESCALE	(0x0)
/** Frame Format Select - Texas Instruments Synchronous Serial Frame Format */
#define SSI_CR0_FRF_TEXAS		(0x1 << SSI_CR0_FRF_SHIFT)
/** Data Size Select */
#define SSI_CR0_DSS				(0xF)
/** Data Size Select - 4-bit data */
#define SSI_CR0_DSS_4			(0x3)
/** Data Size Select - 5-bit data */
#define SSI_CR0_DSS_5			(0x4)
/** Data Size Select - 6-bit data */
#define SSI_CR0_DSS_6			(0x5)
/** Data Size Select - 7-bit data */
#define SSI_CR0_DSS_7			(0x6)
/** Data Size Select - 8-bit data */
#define SSI_CR0_DSS_8			(0x7)
/** Data Size Select - 9-bit data */
#define SSI_CR0_DSS_9			(0x8)
/** Data Size Select - 10-bit data */
#define SSI_CR0_DSS_10			(0x9)
/** Data Size Select - 11-bit data */
#define SSI_CR0_DSS_11			(0xA)
/** Data Size Select - 13-bit data */
#define SSI_CR0_DSS_13			(0xC)
/** Data Size Select - 14-bit data */
#define SSI_CR0_DSS_14			(0xD)
/** Data Size Select - 15-bit data */
#define SSI_CR0_DSS_15			(0xE)
/** Data Size Select - 16-bit data */
#define SSI_CR0_DSS_16			(0xF)
/**@}*/

/** @defgroup ssi_cr1_values SSI_CR1 Values
 * @brief SSI Control 1 Register Values
@{*/
/** Stop Frame */
#define SSI_CR1_EOM				(1 << 11)
/** FSS Hold Frame */
#define SSI_CR1_FSSHLDFRM		(1 << 10)
/** High Speed Clock Enable */
#define SSI_CR1_HSCLKEN			(1 << 9)
/** Direction of Operation */
#define SSI_CR1_DIR				(1 << 8)
/** Mode Shift */
#define SSI_CR1_MODE_SHIFT		(6)
/** Mode */
#define SSI_CR1_MODE			(0x3 << SSI_CR1_MODE_SHIFT)
/** Mode - Legacy SSI Mode */
#define SSI_CR1_MODE_LEGACY		(0x0)
/** Mode - Bi-SSI Mode */
#define SSI_CR1_MODE_BI			(0x1 << SSI_CR1_MODE_SHIFT)
/** Mode - Quad-SSI Mode */
#define SSI_CR1_MODE_QUAD		(0x2 << SSI_CR1_MODE_SHIFT)
/** Mode - Advanced SSI Mode with 8-bit Packet Size */
#define SSI_CR1_MODE_ADVANCED	(0x3 << SSI_CR1_MODE_SHIFT)
/** Master/Slave Select */
#define SSI_CR1_MS				(1 << 2)
/** Synchronous Serial Port Enable */
#define SSI_CR1_SSE				(1 << 1)
/** Loopback Mode */
#define SSI_CR1_LBM				(1 << 0)
/**@}*/

/** @defgroup ssi_dr_values SSI_DR Values
 * @brief SSI Data Register Values
@{*/
/** Receive/Transmit Data Mask */
#define SSI_DR_DATA_MASK		(0xFFFF)
/** Receive/Transmit Data */
#define SSI_DR_DATA(x)			((x) & SSI_DR_DATA_MASK)
/**@}*/

/** @defgroup ssi_sr_values SSI_SR Values
 * @brief SSI Status Register Values
@{*/
/** Busy Bit */
#define SSI_SR_BSY				(1 << 4)
/** Receive FIFO Full */
#define SSI_SR_RFF				(1 << 3)
/** Receive FIFO Not Empty */
#define SSI_SR_RNE				(1 << 2)
/** Transmit FIFO Not Full */
#define SSI_SR_TNF				(1 << 1)
/** Transmit FIFO Empty */
#define SSI_SR_TFE				(1 << 0)
/**@}*/

/** @defgroup ssi_cpsr_values SSI_CPSR Values
 * @brief SSI Clock Prescale Register Values
@{*/
/** Clock Prescale Divisor Mask */
#define SSI_CPSR_CPSDVSR_MASK	(0xFF)
/** Clock Prescale Divisor */
#define SSI_CPSR_CPSDVSR(x)		((x) & SSI_CPSR_CPSDVSR_MASK)
/**@}*/

/** @defgroup ssi_im_values SSI_IM Values
 * @brief SSI Interrupt Mask Register Values
@{*/
/** End of Transmit Interrupt Mask */
#define SSI_IM_EOTIM			(1 << 6)
/** Transmit DMA Interrupt Mask */
#define SSI_IM_DMATXIM			(1 << 5)
/** Receive DMA Interrupt Mask */
#define SSI_IM_DMARXIM			(1 << 4)
/** Transmit FIFO Interrupt Mask */
#define SSI_IM_TXIM				(1 << 3)
/** Receive FIFO Interrupt Mask */
#define SSI_IM_RXIM				(1 << 2)
/** Receive Time-Out Interrupt Mask */
#define SSI_IM_RTIM				(1 << 1)
/** Receive Overrun Interrupt Mask */
#define SSI_IM_RORIM			(1 << 0)
/**@}*/

/** @defgroup ssi_ris_values SSI_RIS Values
 * @brief SSI Raw Interrupt Status Register Values
@{*/
/** End of Transmit Raw Interrupt Status */
#define SSI_RIS_EOTRIS			(1 << 6)
/** Transmit DMA Raw Interrupt Status */
#define SSI_RIS_DMATXRIS		(1 << 5)
/** Receive DMA Raw Interrupt Status */
#define SSI_RIS_DMARXRIS		(1 << 4)
/** Transmit FIFO Raw Interrupt Status */
#define SSI_RIS_TXRIS			(1 << 3)
/** Receive FIFO Raw Interrupt Status */
#define SSI_RIS_RXRIS			(1 << 2)
/**Receive Time-Out Raw Interrupt Status  */
#define SSI_RIS_RTRIS			(1 << 1)
/** Receive Overrun Raw Interrupt Status */
#define SSI_RIS_RORRIS			(1 << 0)
/**@}*/

/** @defgroup ssi_mis_values SSI_MIS Values
 * @brief SSI Masked Interrupt Status Register Values
@{*/
/** End of Transmit Masked Interrupt Status */
#define SSI_MIS_EOTMIS			(1 << 6)
/** Transmit DMA Masked Interrupt Status */
#define SSI_MIS_DMATXMIS		(1 << 5)
/** Receive DMA Masked Interrupt Status */
#define SSI_MIS_DMARXMIS		(1 << 4)
/** Transmit FIFO Masked Interrupt Status */
#define SSI_MIS_TXMIS			(1 << 3)
/** Receive FIFO Masked Interrupt Status */
#define SSI_MIS_RXMIS			(1 << 2)
/** Receive Time-Out Masked Interrupt Status */
#define SSI_MIS_RTMIS			(1 << 1)
/** Receive Overrun Masked Interrupt Status */
#define SSI_MIS_RORMIS			(1 << 0)
/**@}*/

/** @defgroup ssi_icr_values SSI_ICR Values
 * @brief SSI Interrupt Clear Register Values
@{*/
/** End of Transmit Interrupt Clear */
#define SSI_ICR_EOTIC			(1 << 6)
/** Transmit DMA Interrupt Clear */
#define SSI_ICR_DMATXIC			(1 << 5)
/** Receive DMA Interrupt Clear */
#define SSI_ICR_DMARXIC			(1 << 4)
/** Receive Time-Out Interrupt Clear */
#define SSI_ICR_RTIC			(1 << 1)
/** Receive Overrun Interrupt Clear */
#define SSI_ICR_RORIC			(1 << 0)
/**@}*/

/** @defgroup ssi_dmactl_values SSI_DMACTL Values
 * @brief SSI DMA Control Register Values
@{*/
/** Transmit DMA Enable */
#define SSI_DMACTL_TXDMAE		(1 << 1)
/** Receive DMA Enable */
#define SSI_DMACTL_RXDMAE		(1 << 0)
/**@}*/

/** @defgroup ssi_pp_values SSI_PP Values
 * @brief SSI Peripheral Properties Register Values
@{*/
/**  SSInFss Hold Frame Capability */
#define SSI_PP_FSSHLDFRM						(1 << 3)
/** Supported Mode Shift */
#define SSI_PP_MODE_SHIFT						(1)
/** Supported Mode */
#define SSI_PP_MODE								(0x3 << SSI_PP_MODE_SHIFT)
/** Supported Mode - Only Legacy */
#define SSI_PP_MODE_LEGACY						(0x0)
/** Supported Mode - Legacy, Advanced and Bi */
#define SSI_PP_MODE_LEGACY_ADVANCED_BI			(0x1 << SSI_PP_MODE_SHIFT)
/** Supported Mode - Legacy, Advanced, Bi and Quad */
#define SSI_PP_MODE_LEGACY_ADVANCED_BI_QUAD		(0x2 << SSI_PP_MODE_SHIFT)
/** High Speed Capability */
#define SSI_PP_HSCLK							(1 << 0)
/**@}*/

/** @defgroup ssi_cc_values SSI_CC Values
 * @brief SSI Clock Configuration Register Values
@{*/
/** Baud Clock Source */
#define SSI_CC_CS				(0xF)
/** Baud Clock Source - System clock */
#define SSI_CC_CS_SYSCLK		(0x0)
/** Baud Clock Source - Alternate clock source */
#define SSI_CC_CS_ALTERNATE		(0x5)
/**@}*/

/** @brief SSI Mode Definitions */
enum ssi_mode {
	SSI_MODE_LEGACY,	/**< Legacy SSI mode */
	SSI_MODE_BI,		/**< Bi-SSI mode */
	SSI_MODE_QUAD,		/**< Quad-SSI Mode */
	SSI_MODE_ADVANCED	/**< Advanced SSI Mode with 8-bit packet size */
};

BEGIN_DECLS

END_DECLS

/**@}*/

#endif /* MSP432E4_SSI_H */
