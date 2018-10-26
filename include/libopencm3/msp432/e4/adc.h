/** @defgroup adc_defines
 *
 * @ingroup MSP432E4xx_defines
 *
 * @brief Defined Constants and Types for the MSP432E4 ADC
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

#ifndef MSP432E4_ADC_H
#define MSP432E4_ADC_H

/**@{*/

#include <libopencm3/cm3/common.h>
#include <libopencm3/msp432/e4/memorymap.h>
#include <stdbool.h>

/** @defgroup adc_reg_base ADC Register Base Addresses
 * @brief ADC Register Base Addresses
@{*/
/** ADC0 Base Address */
#define ADC0		ADC0_BASE
/** ADC1 Base Address */
#define ADC1		ADC1_BASE
/**@}*/

/** @defgroup adc_registers ADC Registers
 * @brief ADC Registers
@{*/
/** ADC Active Sample Sequencer */
#define ADC_ACTSS(adc_base)				MMIO32((adc_base) + 0x000)
/** ADC Raw Interrupt Status */
#define ADC_RIS(adc_base)				MMIO32((adc_base) + 0x004)
/** ADC Interrupt Mask */
#define ADC_IM(adc_base)				MMIO32((adc_base) + 0x008)
/** ADC Interrupt Status and Clear */
#define ADC_ISC(adc_base)				MMIO32((adc_base) + 0x00C)
/** ADC Overflow Status */
#define ADC_OSTAT(adc_base)				MMIO32((adc_base) + 0x010)
/** ADC Event Multiplexer Select */
#define ADC_EMUX(adc_base)				MMIO32((adc_base) + 0x014)
/** ADC Underflow Status */
#define ADC_USTAT(adc_base)				MMIO32((adc_base) + 0x018)
/** ADC Trigger Source Select */
#define ADC_TSSEL(adc_base)				MMIO32((adc_base) + 0x01C)
/** ADC Sample Sequencer Priority */
#define ADC_SSPRI(adc_base)				MMIO32((adc_base) + 0x020)
/** ADC Sample Phase Control */
#define ADC_SPC(adc_base)				MMIO32((adc_base) + 0x024)
/** ADC Processor Sample Sequence Initiate */
#define ADC_PSSI(adc_base)				MMIO32((adc_base) + 0x028)
/** ADC Sample Averaging Control */
#define ADC_SAC(adc_base)				MMIO32((adc_base) + 0x030)
/** ADC Digital Comparator Interrupt Status and Clear */
#define ADC_DCISC(adc_base)				MMIO32((adc_base) + 0x034)
/** ADC Control */
#define ADC_CTL(adc_base)				MMIO32((adc_base) + 0x038)
/** ADC Sample Sequence Input Multiplexer Select 0 */
#define ADC_SSMUX0(adc_base)			MMIO32((adc_base) + 0x040)
/** ADC Sample Sequence Control 0 */
#define ADC_SSCTL0(adc_base)			MMIO32((adc_base) + 0x044)
/** ADC Sample Sequence Result FIFO 0 */
#define ADC_SSFIFO0(adc_base)			MMIO32((adc_base) + 0x048)
/** ADC Sample Sequence FIFO 0 Status */
#define ADC_SSFSTAT0(adc_base)			MMIO32((adc_base) + 0x04C)
/** ADC Sample Sequence 0 Operation */
#define ADC_SSOP0(adc_base)				MMIO32((adc_base) + 0x050)
/** ADC Sample Sequence 0 Digital Comparator Select */
#define ADC_SSDC0(adc_base)				MMIO32((adc_base) + 0x054)
/** ADC Sample Sequence Extended Input Multiplexer Select 0 */
#define ADC_SSEMUX0(adc_base)			MMIO32((adc_base) + 0x058)
/** ADC Sample Sequence 0 Sample and Hold Time */
#define ADC_SSTSH0(adc_base)			MMIO32((adc_base) + 0x05C)
/** ADC Sample Sequence Input Multiplexer Select 1 */
#define ADC_SSMUX1(adc_base)			MMIO32((adc_base) + 0x060)
/** ADC Sample Sequence Control 1 */
#define ADC_SSCTL1(adc_base)			MMIO32((adc_base) + 0x064)
/** ADC Sample Sequence Result FIFO 1 */
#define ADC_SSFIFO1(adc_base)			MMIO32((adc_base) + 0x068)
/** ADC Sample Sequence FIFO 1 Status */
#define ADC_SSFSTAT1(adc_base)			MMIO32((adc_base) + 0x06C)
/** ADC Sample Sequence 1 Operation */
#define ADC_SSOP1(adc_base)				MMIO32((adc_base) + 0x070)
/** ADC Sample Sequence 1 Digital Comparator Select */
#define ADC_SSDC1(adc_base)				MMIO32((adc_base) + 0x074)
/** ADC Sample Sequence Extended Input Multiplexer Select 1 */
#define ADC_SSEMUX1(adc_base)			MMIO32((adc_base) + 0x078)
/** ADC Sample Sequence 1 Sample and Hold Time */
#define ADC_SSTSH1(adc_base)			MMIO32((adc_base) + 0x07C)
/** ADC Sample Sequence Input Multiplexer Select 2 */
#define ADC_SSMUX2(adc_base)			MMIO32((adc_base) + 0x080)
/** ADC Sample Sequence Control 2 */
#define ADC_SSCTL2(adc_base)			MMIO32((adc_base) + 0x084)
/** ADC Sample Sequence Result FIFO 2 */
#define ADC_SSFIFO2(adc_base)			MMIO32((adc_base) + 0x088)
/** ADC Sample Sequence FIFO 2 Status */
#define ADC_SSFSTAT2(adc_base)			MMIO32((adc_base) + 0x08C)
/** ADC Sample Sequence 2 Operation */
#define ADC_SSOP2(adc_base)				MMIO32((adc_base) + 0x090)
/** ADC Sample Sequence 2 Digital Comparator Select */
#define ADC_SSDC2(adc_base)				MMIO32((adc_base) + 0x094)
/** ADC Sample Sequence Extended Input Multiplexer Select 2 */
#define ADC_SSEMUX2(adc_base)			MMIO32((adc_base) + 0x098)
/** ADC Sample Sequence 2 Sample and Hold Time */
#define ADC_SSTSH2(adc_base)			MMIO32((adc_base) + 0x09C)
/** ADC Sample Sequence Input Multiplexer Select 3 */
#define ADC_SSMUX3(adc_base)			MMIO32((adc_base) + 0x0A0)
/** ADC Sample Sequence Control 3 */
#define ADC_SSCTL3(adc_base)			MMIO32((adc_base) + 0x0A4)
/** ADC Sample Sequence Result FIFO 3 */
#define ADC_SSFIFO3(adc_base)			MMIO32((adc_base) + 0x0A8)
/** ADC Sample Sequence FIFO 3 Status */
#define ADC_SSFSTAT3(adc_base)			MMIO32((adc_base) + 0x0AC)
/** ADC Sample Sequence 3 Operation */
#define ADC_SSOP3(adc_base)				MMIO32((adc_base) + 0x0B0)
/** ADC Sample Sequence 3 Digital Comparator Select */
#define ADC_SSDC3(adc_base)				MMIO32((adc_base) + 0x0B4)
/** ADC Sample Sequence Extended Input Multiplexer Select 3 */
#define ADC_SSEMUX3(adc_base)			MMIO32((adc_base) + 0x0B8)
/** ADC Sample Sequence 3 Sample and Hold Time */
#define ADC_SSTSH3(adc_base)			MMIO32((adc_base) + 0x0BC)
/** ADC Digital Comparator Reset Initial Conditions */
#define ADC_DCRIC(adc_base)				MMIO32((adc_base) + 0xD00)
/** ADC Digital Comparator Control 0 */
#define ADC_DCCTL0(adc_base)			MMIO32((adc_base) + 0xE00)
/** ADC Digital Comparator Control 1 */
#define ADC_DCCTL1(adc_base)			MMIO32((adc_base) + 0xE04)
/** ADC Digital Comparator Control 2 */
#define ADC_DCCTL2(adc_base)			MMIO32((adc_base) + 0xE08)
/** ADC Digital Comparator Control 3 */
#define ADC_DCCTL3(adc_base)			MMIO32((adc_base) + 0xE0C)
/** ADC Digital Comparator Control 4 */
#define ADC_DCCTL4(adc_base)			MMIO32((adc_base) + 0xE10)
/** ADC Digital Comparator Control 5 */
#define ADC_DCCTL5(adc_base)			MMIO32((adc_base) + 0xE14)
/** ADC Digital Comparator Control 6 */
#define ADC_DCCTL6(adc_base)			MMIO32((adc_base) + 0xE18)
/** ADC Digital Comparator Control 7 */
#define ADC_DCCTL7(adc_base)			MMIO32((adc_base) + 0xE1C)
/** ADC Digital Comparator Range 0 */
#define ADC_DCCMP0(adc_base)			MMIO32((adc_base) + 0xE40)
/** ADC Digital Comparator Range 1 */
#define ADC_DCCMP1(adc_base)			MMIO32((adc_base) + 0xE44)
/** ADC Digital Comparator Range 2 */
#define ADC_DCCMP2(adc_base)			MMIO32((adc_base) + 0xE48)
/** ADC Digital Comparator Range 3 */
#define ADC_DCCMP3(adc_base)			MMIO32((adc_base) + 0xE4C)
/** ADC Digital Comparator Range 4 */
#define ADC_DCCMP4(adc_base)			MMIO32((adc_base) + 0xE50)
/** ADC Digital Comparator Range 5 */
#define ADC_DCCMP5(adc_base)			MMIO32((adc_base) + 0xE54)
/** ADC Digital Comparator Range 6 */
#define ADC_DCCMP6(adc_base)			MMIO32((adc_base) + 0xE58)
/** ADC Digital Comparator Range 7 */
#define ADC_DCCMP7(adc_base)			MMIO32((adc_base) + 0xE5C)
/** ADC Peripheral Properties */
#define ADC_PP(adc_base)				MMIO32((adc_base) + 0xFC0)
/** ADC Peripheral Configuration */
#define ADC_PC(adc_base)				MMIO32((adc_base) + 0xFC4)
/** ADC Clock Configuration */
#define ADC_CC(adc_base)				MMIO32((adc_base) + 0xFC8)
/**@}*/

/** @defgroup adc_actss_values ADC_ACTSS Values
 * @brief ADC Active Sample Sequencer Register Values
@{*/
/** ADC Busy */
#define ADC_ACTSS_BUSY		(1 << 16)
/** SS3 DMA Enable */
#define ADC_ACTSS_ADEN3		(1 << 11)
/** SS2 DMA Enable */
#define ADC_ACTSS_ADEN2		(1 << 10)
/** SS1 DMA Enable */
#define ADC_ACTSS_ADEN1		(1 << 9)
/** SS1 DMA Enable */
#define ADC_ACTSS_ADEN0		(1 << 8)
/** SS3 Enable */
#define ADC_ACTSS_ASEN3		(1 << 3)
/** SS2 Enable */
#define ADC_ACTSS_ASEN2		(1 << 2)
/** SS1 Enable */
#define ADC_ACTSS_ASEN1		(1 << 1)
/** SS0 Enable */
#define ADC_ACTSS_ASEN0		(1 << 0)
/**@}*/

/** @defgroup adc_ris_values ADC_RIS Values
 * @brief ADC Raw Interrupt Status Register Values
@{*/
/** Digital Comparator Raw Interrupt Status */
#define ADC_RIS_INRDC		(1 << 16)
/** SS3 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR3		(1 << 11)
/** SS2 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR2		(1 << 10)
/** SS1 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR1		(1 << 9)
/** SS0 DMA Raw Interrupt Status */
#define ADC_RIS_DMAINR0		(1 << 8)
/** SS3 Raw Interrupt Status */
#define ADC_RIS_INR3		(1 << 3)
/** SS2 Raw Interrupt Status */
#define ADC_RIS_INR2		(1 << 2)
/** SS1 Raw Interrupt Status */
#define ADC_RIS_INR1		(1 << 1)
/** SS0 Raw Interrupt Status */
#define ADC_RIS_INR0		(1 << 0)
/**@}*/

/** @defgroup adc_im_values ADC_IM Values
 * @brief ADC Interrupt Mask Register Values
@{*/
/** Digital Comparator Interrupt on SS3 */
#define ADC_IM_DCONSS3		(1 << 19)
/** Digital Comparator Interrupt on SS2 */
#define ADC_IM_DCONSS2		(1 << 18)
/** Digital Comparator Interrupt on SS1 */
#define ADC_IM_DCONSS1		(1 << 17)
/** Digital Comparator Interrupt on SS0 */
#define ADC_IM_DCONSS0		(1 << 16)
/** SS3 DMA Interrupt Mask */
#define ADC_IM_DMAMASK3		(1 << 11)
/** SS2 DMA Interrupt Mask */
#define ADC_IM_DMAMASK2		(1 << 10)
/** SS1 DMA Interrupt Mask */
#define ADC_IM_DMAMASK1		(1 << 9)
/** SS0 DMA Interrupt Mask */
#define ADC_IM_DMAMASK0		(1 << 8)
/** SS3 Interrupt Mask */
#define ADC_IM_MASK3		(1 << 3)
/** SS2 Interrupt Mask */
#define ADC_IM_MASK2		(1 << 2)
/** SS1 Interrupt Mask */
#define ADC_IM_MASK1		(1 << 1)
/** SS0 Interrupt Mask */
#define ADC_IM_MASK0		(1 << 0)
/**@}*/

/** @defgroup adc_isc_values ADC_ISC Values
 * @brief ADC Interrupt Status and Clear Register Values
@{*/
/** Digital Comparator Interrupt Status on SS3 */
#define ADC_ISC_DCINSS3		(1 << 19)
/** Digital Comparator Interrupt Status on SS2 */
#define ADC_ISC_DCINSS2		(1 << 18)
/** Digital Comparator Interrupt Status on SS1 */
#define ADC_ISC_DCINSS1		(1 << 17)
/** Digital Comparator Interrupt Status on SS0 */
#define ADC_ISC_DCINSS0		(1 << 16)
/** SS3 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN3		(1 << 11)
/** SS2 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN2		(1 << 10)
/** SS1 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN1		(1 << 9)
/** SS0 DMA Interrupt Status and Clear */
#define ADC_ISC_DMAIN0		(1 << 8)
/** SS3 Interrupt Status and Clear */
#define ADC_ISC_IN3			(1 << 3)
/** SS2 Interrupt Status and Clear */
#define ADC_ISC_IN2			(1 << 2)
/** SS1 Interrupt Status and Clear */
#define ADC_ISC_IN1			(1 << 1)
/** SS0 Interrupt Status and Clear */
#define ADC_ISC_IN0			(1 << 0)
/**@}*/

/** @defgroup adc_ostat_values ADC_OSTAT Values
 * @brief ADC Overflow Status Register Values
@{*/
/** SS3 FIFO Overflow */
#define ADC_OSTAT_OV3		(1 << 3)
/** SS2 FIFO Overflow */
#define ADC_OSTAT_OV2		(1 << 2)
/** SS1 FIFO Overflow */
#define ADC_OSTAT_OV1		(1 << 1)
/** SS0 FIFO Overflow */
#define ADC_OSTAT_OV0		(1 << 0)
/**@}*/

/* TODO */
/** @defgroup adc_emux_values ADC_EMUX Values
 * @brief ADC Event Multiplexer Select Register Values
@{*/
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**  */
#define ADC_EMUX_   (1 << )
/**@}*/

/** @defgroup adc_ustat_values ADC_USTAT Values
 * @brief ADC Underflow Status Register Values
@{*/
/** SS3 FIFO Underflow */
#define ADC_USTAT_UV3		(1 << )
/** SS2 FIFO Underflow */
#define ADC_USTAT_UV2		(1 << )
/** SS1 FIFO Underflow */
#define ADC_USTAT_UV1		(1 << )
/** SS0 FIFO Underflow */
#define ADC_USTAT_UV0		(1 << )
/**@}*/

/* TODO */
/** @defgroup adc_tssel_values ADC_TSSEL Values
 * @brief ADC Trigger Source Select Register Values
@{*/
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**  */
#define ADC_TSSEL_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc__values ADC_SSPRI Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**  */
#define ADC_SSPRI_   (1 << )
/**@}*/

/** @defgroup adc_spc_values ADC_SPC Values
 * @brief ADC Sample Phase Control Register Values
@{*/
/** Phase Lag */
#define ADC_SPC_PHASE				(0xF)
/** Phase Lag - Concurrent */
#define ADC_SPC_PHASE_CONCURRENT	(0x0)
/** Phase Lag - 1 ADC clock */
#define ADC_SPC_LAG_1				(0x1)
/** Phase Lag - 2 ADC clocks */
#define ADC_SPC_LAG_2				(0x2)
/** Phase Lag - 3 ADC clocks */
#define ADC_SPC_LAG_3				(0x3)
/** Phase Lag - 4 ADC clocks */
#define ADC_SPC_LAG_4				(0x4)
/** Phase Lag - 5 ADC clocks */
#define ADC_SPC_LAG_5				(0x5)
/** Phase Lag - 6 ADC clocks */
#define ADC_SPC_LAG_6				(0x6)
/** Phase Lag - 7 ADC clocks */
#define ADC_SPC_LAG_7				(0x7)
/** Phase Lag - 8 ADC clocks */
#define ADC_SPC_LAG_8				(0x8)
/** Phase Lag - 9 ADC clocks */
#define ADC_SPC_LAG_9				(0x9)
/** Phase Lag - 10 ADC clocks */
#define ADC_SPC_LAG_10				(0xA)
/** Phase Lag - 11 ADC clocks */
#define ADC_SPC_LAG_11				(0xB)
/** Phase Lag - 12 ADC clocks */
#define ADC_SPC_LAG_12				(0xC)
/** Phase Lag - 13 ADC clocks */
#define ADC_SPC_LAG_13				(0xD)
/** Phase Lag - 14 ADC clocks */
#define ADC_SPC_LAG_14				(0xE)
/** Phase Lag - 15 ADC clocks */
#define ADC_SPC_LAG_15				(0xF)
/**@}*/

/** @defgroup adc_pssi_values ADC_PSSI Values
 * @brief ADC Processor Sample Sequence Initiate Register Values
@{*/
/** Global Synchronize */
#define ADC_PSSI_GSYNC			(1 << )
/** Synchronize Wait */
#define ADC_PSSI_SYNCWAIT		(1 << )
/** SS3 Initiate */
#define ADC_PSSI_SS3			(1 << )
/** SS2 Initiate */
#define ADC_PSSI_SS2			(1 << )
/** SS1 Initiate */
#define ADC_PSSI_SS1			(1 << )
/** SS0 Initiate */
#define ADC_PSSI_SS0			(1 << )
/**@}*/

/** @defgroup adc_sac_values ADC_SAC Values
 * @brief ADC Sample Averaging Control Register Values
@{*/
/** Hardware Averaging Control */
#define ADC_SAC_AVG				(0x7)
/** Hardware Averaging Control - No hardware oversampling */
#define ADC_SAC_AVG_NO			(0x0)
/** Hardware Averaging Control - 2x hardware oversampling */
#define ADC_SAC_AVG_2			(0x1)
/** Hardware Averaging Control - 4x hardware oversampling */
#define ADC_SAC_AVG_4			(0x2)
/** Hardware Averaging Control - 8x hardware oversampling */
#define ADC_SAC_AVG_8			(0x3)
/** Hardware Averaging Control - 16x hardware oversampling */
#define ADC_SAC_AVG_16			(0x4)
/** Hardware Averaging Control - 32x hardware oversampling */
#define ADC_SAC_AVG_32			(0x5)
/** Hardware Averaging Control - 64x hardware oversampling */
#define ADC_SAC_AVG_64			(0x6)
/**@}*/

/** @defgroup adc_dcisc_values ADC_DCISC Values
 * @brief ADC Digital Comparator Interrupt Status and Clear Register Values
@{*/
/** Digital Comparator 7 Interrupt Status and Clear */
#define ADC_DCISC_DCINT7		(1 << 7)
/** Digital Comparator 6 Interrupt Status and Clear */
#define ADC_DCISC_DCINT6		(1 << 6)
/** Digital Comparator 5 Interrupt Status and Clear */
#define ADC_DCISC_DCINT5		(1 << 5)
/** Digital Comparator 4 Interrupt Status and Clear */
#define ADC_DCISC_DCINT4		(1 << 4)
/** Digital Comparator 3 Interrupt Status and Clear */
#define ADC_DCISC_DCINT3		(1 << 3)
/** Digital Comparator 2 Interrupt Status and Clear */
#define ADC_DCISC_DCINT2		(1 << 2)
/** Digital Comparator 1 Interrupt Status and Clear */
#define ADC_DCISC_DCINT1		(1 << 1)
/** Digital Comparator 0 Interrupt Status and Clear */
#define ADC_DCISC_DCINT0		(1 << 0)
/**@}*/

/** @defgroup adc_ctl_values ADC_CTL Values
 * @brief ADC Control Register Values
@{*/
/** Voltage Reference Select */
#define ADC_CTL_VREF			(1 << 0)
/**@}*/

/** @defgroup adc_ssmux0_values ADC_SSMUX0 Values
 * @brief ADC Sample Sequence Input Multiplexer Select 0 Register Values
@{*/
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**  */
#define ADC_SSMUX0_   (1 << )
/**@}*/

/** @defgroup adc_ssctl0_values ADC_SSCTL0 Values
 * @brief ADC Sample Sequence Control 0 Register Values
@{*/
/** 8th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS7		(1 << 31)
/** 8th Sample Interrupt Enable */
#define ADC_SSCTL0_IE7		(1 << 30)
/** 8th Sample is End of Sequence */
#define ADC_SSCTL0_END7		(1 << 29)
/** 8th Sample Differential Input Select */
#define ADC_SSCTL0_D7		(1 << 28)
/** 7th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS6		(1 << 27)
/** 7th Sample Interrupt Enable */
#define ADC_SSCTL0_IE6		(1 << 26)
/** 7th Sample is End of Sequence */
#define ADC_SSCTL0_END6		(1 << 25)
/** 7th Sample Differential Input Select */
#define ADC_SSCTL0_D6		(1 << 24)
/** 6th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS5		(1 << 23)
/** 6th Sample Interrupt Enable */
#define ADC_SSCTL0_IE5		(1 << 22)
/** 6th Sample is End of Sequence */
#define ADC_SSCTL0_END5		(1 << 21)
/** 6th Sample Differential Input Select */
#define ADC_SSCTL0_D5		(1 << 20)
/** 5th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS4		(1 << 19)
/** 5th Sample Interrupt Enable */
#define ADC_SSCTL0_IE4		(1 << 18)
/** 5th Sample is End of Sequence */
#define ADC_SSCTL0_END4		(1 << 17)
/** 5th Sample Differential Input Select */
#define ADC_SSCTL0_D4		(1 << 16)
/** 4th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS3		(1 << 15)
/** 4th Sample Interrupt Enable */
#define ADC_SSCTL0_IE3		(1 << 14)
/** 4th Sample is End of Sequence */
#define ADC_SSCTL0_END3		(1 << 13)
/** 4th Sample Differential Input Select */
#define ADC_SSCTL0_D3		(1 << 12)
/** 3th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS2		(1 << 11)
/** 3th Sample Interrupt Enable */
#define ADC_SSCTL0_IE2		(1 << 10)
/** 3th Sample is End of Sequence */
#define ADC_SSCTL0_END2		(1 << 9)
/** 3th Sample Differential Input Select */
#define ADC_SSCTL0_D2		(1 << 8)
/** 2th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS1		(1 << 7)
/** 2th Sample Interrupt Enable */
#define ADC_SSCTL0_IE1		(1 << 6)
/** 2th Sample is End of Sequence */
#define ADC_SSCTL0_END1		(1 << 5)
/** 2th Sample Differential Input Select */
#define ADC_SSCTL0_D1		(1 << 4)
/** 1th Sample Temp Sensor Select */
#define ADC_SSCTL0_TS0		(1 << 3)
/** 1th Sample Interrupt Enable */
#define ADC_SSCTL0_IE0		(1 << 2)
/** 1th Sample is End of Sequence */
#define ADC_SSCTL0_END0		(1 << 1)
/** 1th Sample Differential Input Select */
#define ADC_SSCTL0_D0		(1 << 0)
/**@}*/

/* TODO */
/** @defgroup adc_ssfifo_values ADC_SSFIFO Values
 * @brief ADC Sample Sequence Result FIFO x Register Values
@{*/
/**  */
#define ADC_SSFIFO_   (1 << )
/**  */
#define ADC_SSFIFO_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssfstat_values ADC_SSFSTAT Values
 * @brief ADC Sample Sequence FIFO x Status Register Values
@{*/
/**  */
#define ADC_SSFSTAT_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssop0_values ADC_SSOP0 Values
 * @brief ADC Sample Sequence 0 Operation Register Values
@{*/
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**  */
#define ADC_SSOP0_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssdc0_values ADC_SSDC0 Values
 * @brief ADC Sample Sequence 0 Digital Comparator Select Register Values
@{*/
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**  */
#define ADC_SSDC0_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssemux0_values ADC_SSEMUX0 Values
 * @brief ADC Sample Sequence Extended Input Multiplexer Select 0 Register Values
@{*/
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**  */
#define ADC_SSEMUX0_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_sstsh0_values ADC_SSTSH0 Values
 * @brief ADC Sample Sequence 0 Sample and Hold Time Register Values
@{*/
/**  */
#define ADC_SSTSH0_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssmux_values ADC_SSMUX Values
 * @brief ADC Sample Sequence Input Multiplexer Select x Register Values
@{*/
/**  */
#define ADC_SSMUX_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssctl_values ADC_SSCTL Values
 * @brief ADC Sample Sequence Control x Register Values
@{*/
/**  */
#define ADC_SSCTL_   (1 << )
/**@}*/

/* TODO */
/** @defgroup adc_ssop_values ADC_SSOP Values
 * @brief ADC Sample Sequence x Operation Register Values
@{*/
/**  */
#define ADC_SSOP1_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSDC1 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSDC1_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSEMUX1 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSEMUX1_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSTSH1 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSTSH1_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSMUX2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSMUX2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSCTL2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSCTL2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSFIFO2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSFIFO2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSFSTAT2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSFSTAT2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSOP2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSOP2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSDC2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSDC2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSEMUX2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSEMUX2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSTSH2 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSTSH2_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSMUX3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSMUX3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSCTL3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSCTL3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSFIFO3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSFIFO3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSFSTAT3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSFSTAT3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSOP3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSOP3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSDC3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSDC3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSEMUX3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSEMUX3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_SSTSH3 Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_SSTSH3_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_DCRIC Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_DCRIC_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_DCCTL Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_DCCTL_   (1 << )
/**@}*/

/** @defgroup adc__values ADC_DCCMP Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_DCCMP_   (1 << )
/**@}*/

/** @defgroup adc_pp_values ADC_PP Values
 * @brief ADC Peripheral Properties Register Values
@{*/
/**  */
#define ADC_PP_APSHT			(1 << )
/**  */
#define ADC_PP_TS				(1 << )
/**  */
#define ADC_PP_RSL_SHIFT		(18)
/**  */
#define ADC_PP_RSL				(0x1F << ADC_PP_RSL_SHIFT)
/**  */
#define ADC_PP_TYPE_SHIFT		(16)
/**  */
#define ADC_PP_TYPE				(0x3 << ADC_PP_TYPE_SHIFT)
/**  */
#define ADC_PP_TYPE_SAR			(0x0)
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )
/**  */
#define ADC_PP_   (1 << )

/**@}*/

/** @defgroup adc__values ADC_PC Values
 * @brief ADC  Register Values
@{*/
/**  */
#define ADC_PC_   (1 << )
/**@}*/

/** @defgroup adc_cc_values ADC_CC Values
 * @brief ADC Clock Configuration Register Values
@{*/
/** PLL VCO Clock Divisor Shift */
#define ADC_CC_CLKDIV_SHIFT		(4)
/** PLL VCO Clock Divisor Mask */
#define ADC_CC_CLKDIV_MASK		(0x3F)
/** PLL VCO Clock Divisor (Divisor = CLKDIV+1) */
#define ADC_CC_CLKDIV(x)		((x) << ADC_CC_CLKDIV_SHIFT)
/** Clock Configuration */
#define ADC_CC_CS				(0xF)
/** Clock Configuration - PLL VCO divided by CLKDIV */
#define ADC_CC_CS_PLL			(0x0)
/** Clock Configuration - Alternate clock source */
#define ADC_CC_CS_ALT			(0x1)
/** Clock Configuration - MOSC */
#define ADC_CC_CS_MOSC			(0x2)
/**@}*/

BEGIN_DECLS

END_DECLS

/**@}*/

#endif /* MSP432E4_ADC_H */
