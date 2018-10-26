/** @defgroup i2c_defines Inter-Integrated Circuit Interface Defines
 *
 * @ingroup MSP432E4xx_defines
 *
 * @brief Defined Constants and Types for the MSP432E4 I2C
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

#ifndef MSP432E4_I2C_H
#define MSP432E4_I2C_H

/**@{*/

#include <libopencm3/cm3/common.h>
#include <libopencm3/msp432/e4/memorymap.h>
#include <stdbool.h>

/** @defgroup i2c_reg_base I2C Register Base Addresses
 * @brief I2C Register Base Addresses
@{*/
/** I2C0 Base Address */
#define I2C0				I2C0_BASE
/** I2C1 Base Address */
#define I2C1				I2C1_BASE
/** I2C2 Base Address */
#define I2C2				I2C2_BASE
/** I2C3 Base Address */
#define I2C3				I2C3_BASE
/** I2C4 Base Address */
#define I2C4				I2C4_BASE
/** I2C5 Base Address */
#define I2C5				I2C5_BASE
/** I2C6 Base Address */
#define I2C6				I2C6_BASE
/** I2C7 Base Address */
#define I2C7				I2C7_BASE
/** I2C8 Base Address */
#define I2C8				I2C8_BASE
/** I2C9 Base Address */
#define I2C9				I2C9_BASE
/**@}*/

/** @defgroup i2c_registers I2C Registers
 * @brief I2C Registers
@{*/
/** I2C Master Slave Address */
#define I2C_MSA(i2c_base)			MMIO32((i2c_base) + 0x000)
/** I2C Master Control/Status */
#define I2C_MCS(i2c_base)			MMIO32((i2c_base) + 0x004)
/** I2C Master Data */
#define I2C_MDR(i2c_base)			MMIO32((i2c_base) + 0x008)
/** I2C Master Timer Period */
#define I2C_MTPR(i2c_base)			MMIO32((i2c_base) + 0x00C)
/** I2C Master Interrupt Mask */
#define I2C_MIMR(i2c_base)			MMIO32((i2c_base) + 0x010)
/** I2C Master Raw Interrupt Status */
#define I2C_MRIS(i2c_base)			MMIO32((i2c_base) + 0x014)
/** I2C Master Masked Interrupt Status */
#define I2C_MMIS(i2c_base)			MMIO32((i2c_base) + 0x018)
/** I2C Master Interrupt Clear */
#define I2C_MICR(i2c_base)			MMIO32((i2c_base) + 0x01C)
/** I2C Master Configuration */
#define I2C_MCR(i2c_base)			MMIO32((i2c_base) + 0x020)
/** I2C Master Clock Low Time-out Count */
#define I2C_MCLKOCNT(i2c_base)		MMIO32((i2c_base) + 0x024)
/** I2C Master Bus Monitor */
#define I2C_MBMON(i2c_base)			MMIO32((i2c_base) + 0x02C)
/** I2C Master Burst Length */
#define I2C_MBLEN(i2c_base)			MMIO32((i2c_base) + 0x030)
/** I2C Master Burst Count */
#define I2C_MBCNT(i2c_base)			MMIO32((i2c_base) + 0x034)
/** I2C Slave Own Address */
#define I2C_SOAR(i2c_base)			MMIO32((i2c_base) + 0x800)
/** I2C Slave Control/Status */
#define I2C_SCSR(i2c_base)			MMIO32((i2c_base) + 0x804)
/** I2C Slave Data */
#define I2C_SDR(i2c_base)			MMIO32((i2c_base) + 0x808)
/** I2C Slave Interrupt Mask */
#define I2C_SIMR(i2c_base)			MMIO32((i2c_base) + 0x80C)
/** I2C Slave Raw Interrupt Status */
#define I2C_SRIS(i2c_base)			MMIO32((i2c_base) + 0x810)
/** I2C Slave Masked Interrupt Status */
#define I2C_SMIS(i2c_base)			MMIO32((i2c_base) + 0x814)
/** I2C Slave Interrupt Clear */
#define I2C_SICR(i2c_base)			MMIO32((i2c_base) + 0x818)
/** I2C Slave Own Address 2 */
#define I2C_SOAR2(i2c_base)			MMIO32((i2c_base) + 0x81C)
/** I2C Slave ACK Control */
#define I2C_SACKCTL(i2c_base)		MMIO32((i2c_base) + 0x820)
/** I2C FIFO Data */
#define I2C_FIFODATA(i2c_base)		MMIO32((i2c_base) + 0xF00)
/** I2C FIFO Control */
#define I2C_FIFOCTL(i2c_base)		MMIO32((i2c_base) + 0xF04)
/** I2C FIFO Status */
#define I2C_FIFOSTATUS(i2c_base)	MMIO32((i2c_base) + 0xF08)
/** I2C Peripheral Properties */
#define I2C_PP(i2c_base)			MMIO32((i2c_base) + 0xFC0)
/** I2C Peripheral Configuration */
#define I2C_PC(i2c_base)			MMIO32((i2c_base) + 0xFC4)
/**@}*/

/** @defgroup i2c_msa_values I2C_MSA Values
 * @brief I2C Master Slave Address Register Values
@{*/
/** I2C Slave Address Shift */
#define I2C_MSA_SA_SHIFT		(1)
/** I2C Slave Address Mask */
#define I2C_MSA_SA_MASK			(0x7F)
/** I2C Slave Address */
#define I2C_MSA_SA(x)			(((x) & I2C_MSA_SA_MASK) << I2C_MSA_SA_SHIFT)
/** Receive/Send */
#define I2C_MSA_RS				(1 << 0)
/**@}*/

/** @defgroup i2c_mcs_values I2C_MCS Values
 * @brief I2C Master Control/Status Register Values
@{*/
/** DMA RX Active Status */
#define I2C_MCS_RO_ACTDMARX		(1 << 31)
/** DMA TX Active Status */
#define I2C_MCS_RO_ACTDMATX		(1 << 30)
/** Clock Time-out Error */
#define I2C_MCS_RO_CLKTO		(1 << 7)
/** Bus Busy */
#define I2C_MCS_RO_BUSBSY		(1 << 6)
/** I2C Idle */
#define I2C_MCS_RO_IDLE			(1 << 5)
/** Arbitration Lost */
#define I2C_MCS_RO_ARBLST		(1 << 4)
/** Acknowledge Data */
#define I2C_MCS_RO_DATACK		(1 << 3)
/** Acknowledge Address */
#define I2C_MCS_RO_ADRACK		(1 << 2)
/** Error */
#define I2C_MCS_RO_ERROR		(1 << 1)
/** I2C Busy */
#define I2C_MCS_RO_BUSY			(1 << 0)
/** Burst Enable */
#define I2C_MCS_WO_BURST		(1 << 6)
/** Quick Command */
#define I2C_MCS_WO_QCMD			(1 << 5)
/** High-Speed Enable */
#define I2C_MCS_WO_HS			(1 << 4)
/** Data Acknowledge Enable */
#define I2C_MCS_WO_ACK			(1 << 3)
/** Generate STOPs */
#define I2C_MCS_WO_STOP			(1 << 2)
/** Generate START */
#define I2C_MCS_WO_START		(1 << 1)
/** I2C Master Enable */
#define I2C_MCS_WO_RUN			(1 << 0)
/**@}*/

/** @defgroup i2c_mdr_values I2C_MDR Values
 * @brief I2C Master Data Register Values
@{*/
/** I2C Data Mask */
#define I2C_MDR_DATA_MASK		(0xFF)
/** I2C Data */
#define I2C_MDR_DATA(x)			((x) & I2C_MDR_DATA_MASK)
/**@}*/

/** @defgroup i2c_mtpr_values I2C_MTPR Values
 * @brief I2C Master Timer Period Register Values
@{*/
/** Glitch Suppression Pulse Width Shift */
#define I2C_MTPR_PULSEL_SHIFT	(16)
/** Glitch Suppression Pulse Width */
#define I2C_MTPR_PULSEL			(0x7 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - Bypass */
#define I2C_MTPR_PULSEL_BYPASS	(0x0)
/** Glitch Suppression Pulse Width - 1 clock */
#define I2C_MTPR_PULSEL_1		(0x1 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 2 clocks */
#define I2C_MTPR_PULSEL_2		(0x2 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 3 clocks */
#define I2C_MTPR_PULSEL_3		(0x3 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 4 clocks */
#define I2C_MTPR_PULSEL_4		(0x4 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 8 clocks */
#define I2C_MTPR_PULSEL_8		(0x5 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 16 clocks */
#define I2C_MTPR_PULSEL_16		(0x6 << I2C_MTPR_PULSEL_SHIFT)
/** Glitch Suppression Pulse Width - 31 clocks */
#define I2C_MTPR_PULSEL_31		(0x7 << I2C_MTPR_PULSEL_SHIFT)
/** High-Speed Enable */
#define I2C_MTPR_HS				(1 << 7)
/** Timer Period Mask */
#define I2C_MTPR_TPR_MASK		(0x7F)
/** Timer Period */
#define I2C_MTPR_TPR(x)			((x) & I2C_MTPR_TPR_MASK)
/**@}*/

/** @defgroup i2c_mimr_values I2C_MIMR Values
 * @brief I2C Master Interrupt Mask Register Values
@{*/
/** Receive FIFO Full Interrupt Mask */
#define I2C_MIMR_RXFFIM			(1 << 11)
/** Transmit FIFO Empty Interrupt Mask */
#define I2C_MIMR_TXFEIM			(1 << 10)
/** Receive FIFO Request Interrupt Mask */
#define I2C_MIMR_RXIM			(1 << 9)
/** Transmit FIFO Request Interrupt Mask */
#define I2C_MIMR_TXIM			(1 << 8)
/** Arbitration Lost Interrupt Mask */
#define I2C_MIMR_ARBLOSTIM		(1 << 7)
/** STOP Detection Interrupt Mask */
#define I2C_MIMR_STOPIM			(1 << 6)
/** START Detection Interrupt Mask */
#define I2C_MIMR_STARTIM		(1 << 5)
/** Address/Data NACK Interrupt Mask */
#define I2C_MIMR_NACKIM			(1 << 4)
/** Transmit DMA Interrupt Mask */
#define I2C_MIMR_DMATXIM		(1 << 3)
/** Receive DMA Interrupt Mask */
#define I2C_MIMR_DMARXIM		(1 << 2)
/** Clock Time-out Interrupt Mask */
#define I2C_MIMR_CLKIM			(1 << 1)
/** Master Interrupt Mask */
#define I2C_MIMR_IM				(1 << 0)
/**@}*/

/** @defgroup i2c_mris_values I2C_MRIS Values
 * @brief I2C Master Raw Interrupt Status Register Values
@{*/
/** Receive FIFO Full Raw Interrupt Status */
#define I2C_MRIS_RXFFRIS		(1 << 11)
/** Transmit FIFO Empty Raw Interrupt Status */
#define I2C_MRIS_TXFERIS		(1 << 10)
/** Receive FIFO Request Raw Interrupt Status */
#define I2C_MRIS_RXRIS			(1 << 9)
/** Transmit Request Raw Interrupt Status */
#define I2C_MRIS_TXRIS			(1 << 8)
/** Arbitration Lost Raw Interrupt Status */
#define I2C_MRIS_ARBLOSTRIS		(1 << 7)
/** STOP Detection Raw Interrupt Status */
#define I2C_MRIS_STOPRIS		(1 << 6)
/** START Detection Raw Interrupt Status */
#define I2C_MRIS_STARTRIS		(1 << 5)
/** Address/Data NACK Raw Interrupt Status */
#define I2C_MRIS_NACKRIS		(1 << 4)
/** Transmit DMA Raw Interrupt Status */
#define I2C_MRIS_DMATXRIS		(1 << 3)
/** Receive DMA Raw Interrupt Status */
#define I2C_MRIS_DMARXRIS		(1 << 2)
/** Clock Time-out Raw Interrupt Status */
#define I2C_MRIS_CLKRIS			(1 << 1)
/** Master Raw Interrupt Status */
#define I2C_MRIS_RIS			(1 << 0)
/**@}*/

/** @defgroup i2c_mmis_values I2C_MMIS Values
 * @brief I2C Master Masked Interrupt Status Register Values
@{*/
/** Receive FIFO Full Interrupt Mask */
#define I2C_MMIS_RXFFMIS		(1 << 11)
/** Transmit FIFO Empty Interrupt Mask */
#define I2C_MMIS_TXFEMIS		(1 << 10)
/** Receive FIFO Request Interrupt Mask */
#define I2C_MMIS_RXMIS			(1 << 9)
/** Transmit Request Interrupt Mask */
#define I2C_MMIS_TXMIS			(1 << 8)
/** Arbitration Lost Interrupt Mask */
#define I2C_MMIS_ARBLOSTMIS		(1 << 7)
/** STOP Detection Interrupt Mask */
#define I2C_MMIS_STOPMIS		(1 << 6)
/** START Detection Interrupt Mask */
#define I2C_MMIS_STARTMIS		(1 << 5)
/** Address/Data NACK Interrupt Mask */
#define I2C_MMIS_NACKMIS		(1 << 4)
/** Transmit DMA Interrupt Status */
#define I2C_MMIS_DMATXMIS		(1 << 3)
/** Receive DMA Interrupt Status */
#define I2C_MMIS_DMARXMIS		(1 << 2)
/** Clock Time-out Masked Interrupt Status */
#define I2C_MMIS_CLKMIS			(1 << 1)
/** Masked Interrupt Status */
#define I2C_MMIS_MIS			(1 << 0)
/**@}*/

/** @defgroup i2c_micr_values I2C_MICR Values
 * @brief I2C Master Interrupt Clear Register Values
@{*/
/** Receive FIFO Full Interrupt Clear */
#define I2C_MICR_RXFFIC			(1 << 11)
/** Transmit FIFO Empty Interrupt Clear */
#define I2C_MICR_TXFEIC			(1 << 10)
/** Receive FIFO Request Interrupt */
#define I2C_MICR_RXIC			(1 << 9)
/** Transmit FIFO Request Interrupt Clear */
#define I2C_MICR_TXIC			(1 << 8)
/** Arbitration Lost Interrupt Clear */
#define I2C_MICR_ARBLOSTIC		(1 << 7)
/** STOP Detection Interrupt Clear */
#define I2C_MICR_STOPIC			(1 << 6)
/** START Detection Interrupt Clear */
#define I2C_MICR_STARTIC		(1 << 5)
/** Address/Data NACK Interrupt Clear */
#define I2C_MICR_NACKIC			(1 << 4)
/** Transmit DMA Interrupt Clear */
#define I2C_MICR_DMATXIC		(1 << 3)
/** Receive DMA Interrupt Clear */
#define I2C_MICR_DMARXIC		(1 << 2)
/** Clock Time-out Interrupt Clear */
#define I2C_MICR_CLKIC			(1 << 1)
/** Master Interrupt Clear */
#define I2C_MICR_IC				(1 << 0)
/**@}*/

/** @defgroup i2c_mcr_values I2C_MCR Values
 * @brief I2C Master Configuration Register Values
@{*/
/** I2C Slave Function Enable */
#define I2C_MCR_SFE				(1 << 5)
/** I2C Master Function Enable */
#define I2C_MCR_MFE				(1 << 4)
/** I2C Loopback */
#define I2C_MCR_LPBK			(1 << 0)
/**@}*/

/** @defgroup i2c_mclkocnt_values I2C_MCLKOCNT Values
 * @brief I2C Master Clock Low Time-out Count Register Values
@{*/
/** I2C Master Count Mask */
#define I2C_MCLKOCNT_CNTL_MASK	(0xFF)
/** I2C Master Count */
#define I2C_MCLKOCNTCNTL(x)		((x) & I2C_MCLKOCNT_MASK)
/**@}*/

/** @defgroup i2c_mbmon_values I2C_MBMON Values
 * @brief I2C Master Bus Monitor Register Values
@{*/
/** I2C SDA Status */
#define I2C_MBMON_SDA			(1 << 1)
/** I2C SCL Status */
#define I2C_MBMON_SCL			(1 << 0)
/**@}*/

/** @defgroup i2c_mblen_values I2C_MBLEN Values
 * @brief I2C Master Burst Length Register Values
@{*/
/** I2C Burst Length Mask */
#define I2C_MBLEN_CNTL_MASK		(0xFF)
/** I2C Burst Length */
#define I2C_MBLEN_CNTL(x)		((x) & I2C_MBLEN_CNTL_MASK)
/**@}*/

/** @defgroup i2c_mbcnt_values I2C_MBCNT Values
 * @brief I2C Master Burst Count Register Values
@{*/
/** I2C Master Burst Count Mask */
#define I2C_MBCNT_CNTL_MASK		(0xFF)
/** I2C Master Burst Count */
#define I2C_MBCNT_CNTL(x)		((x) & I2C_MBCNT_CNTL_MASK)
/**@}*/

/** @defgroup i2c_soar_values I2C_SOAR Values
 * @brief I2C Slave Own Address Register Values
@{*/
/** I2C Slave Own Address Mask */
#define I2C_SOAR_OAR_MASK		(0x7F)
/** I2C Slave Own Address */
#define I2C_SOAR_OAR(x)			((x) & I2C_SOAR_OAR_MASK)
/**@}*/

/** @defgroup i2c_scsr_values I2C_SCSR Values
 * @brief I2C Slave Control/Status Register Values
@{*/
/** DMA RX Active Status */
#define I2C_SCSR_RO_ACTDMARX	(1 << 31)
/** DMA TX Active Status */
#define I2C_SCSR_RO_ACTDMATX	(1 << 30)
/** Quick Command Read/Write */
#define I2C_SCSR_RO_QCMDRW		(1 << 5)
/** Quick Command Status */
#define I2C_SCSR_RO_QCMDST		(1 << 4)
/** OAR2 Address Matched */
#define I2C_SCSR_RO_OAR2SEL		(1 << 3)
/** First Byte Received */
#define I2C_SCSR_RO_FBR			(1 << 2)
/** Transmit Request */
#define I2C_SCSR_RO_TREQ		(1 << 1)
/** Receive Request */
#define I2C_SCSR_RO_RREQ		(1 << 0)
/** RX FIFO Enable */
#define I2C_SCSR_WO_RXFIFO		(1 << 2)
/** TX FIFO Enable */
#define I2C_SCSR_WO_TXFIFO		(1 << 1)
/** Device Active */
#define I2C_SCSR_WO_DA			(1 << 0)
/**@}*/

/** @defgroup i2c_sdr_values I2C_SDR Values
 * @brief I2C Slave Data Register Values
@{*/
/** Data for Transfer Mask */
#define I2C_SDR_DATA_MASK		(0xFF)
/** Data for Transfer */
#define I2C_SDR_DATA(x)			((x) & I2C_SDR_DATA_MASK)
/**@}*/

/** @defgroup i2c_simr_values I2C_SIMR Values
 * @brief I2C Slave Interrupt Mask Register Values
@{*/
/** Receive FIFO Full Interrupt Mask */
#define I2C_SIMR_RXFFIM			(1 << 8)
/** Transmit FIFO Empty Interrupt Mask */
#define I2C_SIMR_TXFEIM			(1 << 7)
/** Receive FIFO Request Interrupt Mask */
#define I2C_SIMR_RXIM			(1 << 6)
/** Transmit FIFO Request Interrupt Mask */
#define I2C_SIMR_TXIM			(1 << 5)
/** Transmit DMA Interrupt Mask */
#define I2C_SIMR_DMATXIM		(1 << 4)
/** Receive DMA Interrupt Mask */
#define I2C_SIMR_DMARXIM		(1 << 3)
/** Stop Condition Interrupt Mask */
#define I2C_SIMR_STOPIM			(1 << 2)
/** Start Condition Interrupt Mask */
#define I2C_SIMR_STARTIM		(1 << 1)
/** Data Interrupt Mask */
#define I2C_SIMR_DATAIM			(1 << 0)
/**@}*/

/** @defgroup i2c_sris_values I2C_SRIS Values
 * @brief I2C Slave Raw Interrupt Status Register Values
@{*/
/** Receive FIFO Full Raw Interrupt Status */
#define I2C_SRIS_RXFFRIS		(1 << 8)
/** Transmit FIFO Empty Raw Interrupt Status */
#define I2C_SRIS_TXFERIS		(1 << 7)
/** Receive FIFO Request Raw Interrupt Status */
#define I2C_SRIS_RXRIS			(1 << 6)
/** Transmit Request Raw Interrupt Status */
#define I2C_SRIS_TXRIS			(1 << 5)
/** Transmit DMA Raw Interrupt Status */
#define I2C_SRIS_DMATXRIS		(1 << 4)
/** Receive DMA Raw Interrupt Status */
#define I2C_SRIS_DMARXRIS		(1 << 3)
/** Stop Condition Raw Interrupt Status */
#define I2C_SRIS_STOPRIS		(1 << 2)
/** Start Condition Raw Interrupt Status */
#define I2C_SRIS_STARTRIS		(1 << 1)
/** Data Raw Interrupt Status */
#define I2C_SRIS_DATARIS		(1 << 0)
/**@}*/

/** @defgroup i2c_smis_values I2C_SMIS Values
 * @brief I2C Slave Masked Interrupt Status Register Values
@{*/
/** Receive FIFO Full Interrupt Mask */
#define I2C_SMIS_RXFFMIS		(1 << 8)
/** Transmit FIFO Empty Interrupt Mask */
#define I2C_SMIS_TXFEMIS		(1 << 7)
/** Receive FIFO Request Interrupt Mask */
#define I2C_SMIS_RXMIS			(1 << 6)
/** Transmit FIFO Request Interrupt Mask */
#define I2C_SMIS_TXMIS			(1 << 5)
/** Transmit DMA Masked Interrupt Status */
#define I2C_SMIS_DMATXMIS		(1 << 4)
/** Receive DMA Masked Interrupt Status */
#define I2C_SMIS_DMARXMIS		(1 << 3)
/** Stop Condition Masked Interrupt Status */
#define I2C_SMIS_STOPMIS		(1 << 2)
/** Start Condition Masked Interrupt Status */
#define I2C_SMIS_STARTMIS		(1 << 1)
/** Data Masked Interrupt Status */
#define I2C_SMIS_DATAMIS		(1 << 0)
/**@}*/

/** @defgroup i2c_sicr_values I2C_SICR Values
 * @brief I2C Slave Interrupt Clear Register Values
@{*/
/** Receive FIFO Full Interrupt Mask */
#define I2C_SICR_RXFFIC			(1 << 8)
/** Transmit FIFO Empty Interrupt Mask */
#define I2C_SICR_TXFEIC			(1 << 7)
/** Receive Request Interrupt Mask */
#define I2C_SICR_RXIC			(1 << 6)
/** Transmit Request Interrupt Mask */
#define I2C_SICR_TXIC			(1 << 5)
/** Transmit DMA Interrupt Clear */
#define I2C_SICR_DMATXIC		(1 << 4)
/** Receive DMA Interrupt Clear */
#define I2C_SICR_DMARXIC		(1 << 3)
/** Stop Condition Interrupt Clear */
#define I2C_SICR_STOPIC			(1 << 2)
/** Start Condition Interrupt Clear */
#define I2C_SICR_STARTIC		(1 << 1)
/** Data Interrupt Clear */
#define I2C_SICR_DATAIC			(1 << 0)
/**@}*/

/** @defgroup i2c_soar2_values I2C_SOAR2 Values
 * @brief I2C Slave Own Address 2 Register Values
@{*/
/** I2C Slave Own Address 2 Enable */
#define I2C_SOAR2_OAR2EN		(1 << 7)
/** I2C Slave Own Address 2 Mask */
#define I2C_SOAR2_OAR2_MASK		(0x7F)
/** I2C Slave Own Address 2 */
#define I2C_SOAR2_OAR2(x)		((x) & I2C_SOAR2_OAR2_MASK)
/**@}*/

/** @defgroup i2c_sackctl_values I2C_SACKCTL Values
 * @brief I2C Slave ACK Control Register Values
@{*/
/** I2C Slave ACK Override Value */
#define I2C_SACKCTL_ACKOVAL		(1 << 1)
/** I2C Slave ACK Override Enable */
#define I2C_SACKCTL_ACKOEN		(1 << 0)
/**@}*/

/** @defgroup i2c_fifodata_values I2C_FIFODATA Values
 * @brief I2C FIFO Data Register Values
@{*/
/** I2C RX FIFO Read Data Byte */
#define I2C_FIFODATA_DATA		(0xFF)
/**@}*/

/** @defgroup i2c_fifoctl_values I2C_FIFOCTL Values
 * @brief I2C FIFO Control Register Values
@{*/
/** RX Control Assignment */
#define I2C_FIFOCTL_RXASGNMT		(1 << 31)
/** RX FIFO Flush */
#define I2C_FIFOCTL_RXFLUSH			(1 << 30)
/** DMA RX Channel Enable */
#define I2C_FIFOCTL_DMARXENA		(1 << 29)
/** RX FIFO Trigger Shift */
#define I2C_FIFOCTL_RXTRIG_SHIFT	(16)
/** RX FIFO Trigger */
#define I2C_FIFOCTL_RXTRIG			(0x7 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - No bytes */
#define I2C_FIFOCTL_RXTRIG_NO		(0x0)
/** RX FIFO Trigger - 1 or more bytes */
#define I2C_FIFOCTL_RXTRIG_1		(0x1 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 2 or more bytes */
#define I2C_FIFOCTL_RXTRIG_2		(0x2 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 3 or more bytes */
#define I2C_FIFOCTL_RXTRIG_3		(0x3 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 4 or more bytes */
#define I2C_FIFOCTL_RXTRIG_4		(0x4 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 5 or more bytes */
#define I2C_FIFOCTL_RXTRIG_5		(0x5 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 6 or more bytes */
#define I2C_FIFOCTL_RXTRIG_6		(0x6 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** RX FIFO Trigger - 7 or more bytes */
#define I2C_FIFOCTL_RXTRIG_7		(0x7 << I2C_FIFOCTL_RXTRIG_SHIFT)
/** TX Control Assignment */
#define I2C_FIFOCTL_TXASGNMT		(1 << 15)
/** TX FIFO Flush */
#define I2C_FIFOCTL_TXFLUSH			(1 << 14)
/** DMA TX Channel Enable */
#define I2C_FIFOCTL_DMATXENA		(1 << 13)
/** TX FIFO Trigger  */
#define I2C_FIFOCTL_TXTRIG			(0x7)
/** TX FIFO Trigger - Empty */
#define I2C_FIFOCTL_TXTRIG_EMPTY	(0x0)
/** TX FIFO Trigger - Less or equal 1 byte */
#define I2C_FIFOCTL_TXTRIG_1		(0x1)
/** TX FIFO Trigger - Less or equal 2 bytes */
#define I2C_FIFOCTL_TXTRIG_2		(0x2)
/** TX FIFO Trigger - Less or equal 3 bytes */
#define I2C_FIFOCTL_TXTRIG_3		(0x3)
/** TX FIFO Trigger - Less or equal 4 bytes */
#define I2C_FIFOCTL_TXTRIG_4		(0x4)
/** TX FIFO Trigger - Less or equal 5 bytes*/
#define I2C_FIFOCTL_TXTRIG_5		(0x5)
/** TX FIFO Trigger - Less or equal 6 bytes */
#define I2C_FIFOCTL_TXTRIG_6		(0x6)
/** TX FIFO Trigger - Less or equal 7 bytes */
#define I2C_FIFOCTL_TXTRIG_7		(0x7)
/**@}*/

/** @defgroup i2c_fifostatus_values I2C_FIFOSTATUS Values
 * @brief I2C FIFO Status Register Values
@{*/
/** RX FIFO Above Trigger Level */
#define I2C_FIFOSTATUS_RXABVTRIG	(1 << 18)
/** RX FIFO Full */
#define I2C_FIFOSTATUS_RXFF			(1 << 17)
/** RX FIFO Empty */
#define I2C_FIFOSTATUS_RXFE			(1 << 16)
/** TX FIFO Below Trigger Level */
#define I2C_FIFOSTATUS_TXBLWTRIG	(1 << 2)
/** TX FIFO Full */
#define I2C_FIFOSTATUS_TXFF			(1 << 1)
/** TX FIFO Empty */
#define I2C_FIFOSTATUS_TXFE			(1 << 0)
/**@}*/

/** @defgroup i2c_pp_values I2C_PP Values
 * @brief I2C Peripheral Properties Register Values
@{*/
/** High-Speed Capable */
#define I2C_PP_HS			(1 << 0)
/**@}*/

/** @defgroup i2c_pc_values I2C_PC Values
 * @brief I2C Peripheral Configuration Register Values
@{*/
/** High-Speed Enable */
#define I2C_PC_HS			(1 << 0)
/**@}*/

BEGIN_DECLS

END_DECLS

/**@}*/

#endif /* MSP432E4_I2C_H */
