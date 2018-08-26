/** @defgroup ethernet_mac_stm32fxx7_defines MAC STM32Fxx7 Defines
 *
 * @brief <b>Defined Constants and Types for the Ethernet MAC for STM32Fxx7
 * chips</b>
 *
 * @ingroup ETH
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2013 Frantisek Burian <BuFran@seznam.cz>
 *
 * @date 1 September 2013
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Frantisek Burian <BuFran@seznam.cz>
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

#ifndef LIBOPENCM3_ETHERNET_H
#define LIBOPENCM3_ETHERNET_H

#include <libopencm3/msp432/e4/memorymap.h>
#include <libopencm3/cm3/common.h>

/** @defgroup ethernet_registers Ethernet Registers
 * @ingroup ethernet_defines
 * @brief Ethernet Controller Registers
@{*/
/** Ethernet MAC Configuration */
#define EMAC_EMACCFG                MMIO32(EMAC_BASE + 0x0)
/** Ethernet MAC Frame Filter */
#define EMAC_EMACFRAMEFLTR          MMIO32(EMAC_BASE + 0x4)
/** Ethernet MAC Hash Table High */
#define EMAC_EMACHASHTBLH           MMIO32(EMAC_BASE + 0x8)
/** Ethernet MAC Hash Table Low */
#define EMAC_EMACHASHTBLL           MMIO32(EMAC_BASE + 0xC)
/** Ethernet MAC MII Address */
#define EMAC_EMACMIIADDR            MMIO32(EMAC_BASE + 0x10)
/** Ethernet MAC MII Data Register */
#define EMAC_EMACMIIDATA            MMIO32(EMAC_BASE + 0x14)
/** Ethernet MAC Flow Control */
#define EMAC_EMACFLOWCTL            MMIO32(EMAC_BASE + 0x18)
/** Ethernet MAC VLAN Tag */
#define EMAC_EMACVLANTG             MMIO32(EMAC_BASE + 0x1C)
/** Ethernet MAC Status */
#define EMAC_EMACSTATUS             MMIO32(EMAC_BASE + 0x24)
/** Ethernet MAC Remote Wake-Up Frame Filter */
#define EMAC_EMACRWUFF              MMIO32(EMAC_BASE + 0x28)
/** Ethernet MAC PMT Control and Status Register */
#define EMAC_EMACPMTCTLSTAT         MMIO32(EMAC_BASE + 0x2C)
/** LPI Control and Status */
#define EMAC_EMACLPICTLSTAT         MMIO32(EMAC_BASE + 0x30)
/** LPI Timers Control */
#define EMAC_EMACLPITIMERCTL        MMIO32(EMAC_BASE + 0x34)
/** Ethernet MAC Raw Interrupt Status */
#define EMAC_EMACRIS                MMIO32(EMAC_BASE + 0x38)
/** Ethernet MAC Interrupt Mask */
#define EMAC_EMACCIM                MMIO32(EMAC_BASE + 0x3C)
/** Ethernet MAC Address 0 High */
#define EMAC_EMACADDR0H             MMIO32(EMAC_BASE + 0x40)
/** Ethernet MAC Address 0 Low */
#define EMAC_EMACADDR0L             MMIO32(EMAC_BASE + 0x44)
/** Ethernet MAC Address 1 High */
#define EMAC_EMACADDR1H             MMIO32(EMAC_BASE + 0x48)
/** Ethernet MAC Address 1 Low */
#define EMAC_EMACADDR1L             MMIO32(EMAC_BASE + 0x4C)
/** Ethernet MAC Address 2 High */
#define EMAC_EMACADDR2H             MMIO32(EMAC_BASE + 0x50)
/** Ethernet MAC Address 2 Low */
#define EMAC_EMACADDR2L             MMIO32(EMAC_BASE + 0x54)
/** Ethernet MAC Address 3 High */
#define EMAC_EMACADDR3H             MMIO32(EMAC_BASE + 0x58)
/** Ethernet MAC Address 3 Low */
#define EMAC_EMACADDR3L             MMIO32(EMAC_BASE + 0x5C)
/** Ethernet MAC Watchdog Time-out */
#define EMAC_EMACWDOGTO             MMIO32(EMAC_BASE + 0xDC)
/** Ethernet MAC MMC Control */
#define EMAC_EMACMMCCTRL            MMIO32(EMAC_BASE + 0x100)
/** Ethernet MAC MMC Receive Raw Interrupt Status */
#define EMAC_EMACMMCRXRIS           MMIO32(EMAC_BASE + 0x104)
/** Ethernet MAC MMC Transmit Raw Interrupt Status */
#define EMAC_EMACMMCTXRIS           MMIO32(EMAC_BASE + 0x108)
/** Ethernet MAC MMC Receive Interrupt Mask */
#define EMAC_EMACMMCRXIM            MMIO32(EMAC_BASE + 0x10C)
/** Ethernet MAC MMC Transmit Interrupt Mask */
#define EMAC_EMACMMCTXIM            MMIO32(EMAC_BASE + 0x110)
/** Ethernet MAC Transmit Frame Count for Good and Bad Frames */
#define EMAC_EMACTXCNTGB            MMIO32(EMAC_BASE + 0x118)
/** Ethernet MAC Transmit Frame Count
 *  for Frames Transmitted after Single Collision */
#define EMAC_EMACTXCNTSCOL          MMIO32(EMAC_BASE + 0x14C)
/** Ethernet MAC Transmit Frame Count
 *  for Frames Transmitted after Multiple Collisions */
#define EMAC_EMACTXCNTMCOL          MMIO32(EMAC_BASE + 0x150)
/** Ethernet MAC Transmit Octet Count Good */
#define EMAC_EMACTXOCTCNTG          MMIO32(EMAC_BASE + 0x164)
/** Ethernet MAC Receive Frame Count for Good and Bad Frames */
#define EMAC_EMACRXCNTGB            MMIO32(EMAC_BASE + 0x180)
/** Ethernet MAC Receive Frame Count for CRC Error Frames */
#define EMAC_EMACRXCNTCRCERR        MMIO32(EMAC_BASE + 0x194)
/** Ethernet MAC Receive Frame Count for Alignment Error Frames */
#define EMAC_EMACRXCNTALGNERR       MMIO32(EMAC_BASE + 0x198)
/** Ethernet MAC Receive Frame Count for Good Unicast Frames */
#define EMAC_EMACRXCNTGUNI          MMIO32(EMAC_BASE + 0x1C4)
/** Ethernet MAC VLAN Tag Inclusion or Replacement */
#define EMAC_EMACVLNINCREP          MMIO32(EMAC_BASE + 0x584)
/** Ethernet MAC VLAN Hash Table */
#define EMAC_EMACVLANHASH           MMIO32(EMAC_BASE + 0x588)
/** Ethernet MAC Timestamp Control */
#define EMAC_EMACTIMSTCTRL          MMIO32(EMAC_BASE + 0x700)
/** Ethernet MAC Sub-Second Increment */
#define EMAC_EMACSUBSECINC          MMIO32(EMAC_BASE + 0x704)
/** Ethernet MAC System Time - Seconds */
#define EMAC_EMACTIMSEC             MMIO32(EMAC_BASE + 0x708)
/** Ethernet MAC System Time - Nanoseconds */
#define EMAC_EMACTIMNANO            MMIO32(EMAC_BASE + 0x70C)
/** Ethernet MAC System Time - Seconds Update */
#define EMAC_EMACTIMSECU            MMIO32(EMAC_BASE + 0x710)
/** Ethernet MAC System Time - Nanoseconds Update */
#define EMAC_EMACTIMNANOU           MMIO32(EMAC_BASE + 0x714)
/** Ethernet MAC Timestamp Addend */
#define EMAC_EMACTIMADD             MMIO32(EMAC_BASE + 0x718)
/** Ethernet MAC Target Time Seconds */
#define EMAC_EMACTARGSEC            MMIO32(EMAC_BASE + 0x71C)
/** Ethernet MAC Target Time Nanoseconds */
#define EMAC_EMACTARGNANO           MMIO32(EMAC_BASE + 0x720)
/** Ethernet MAC System Time-Higher Word Seconds */
#define EMAC_EMACHWORDSEC           MMIO32(EMAC_BASE + 0x724)
/** Ethernet MAC Timestamp Status */
#define EMAC_EMACTIMSTAT            MMIO32(EMAC_BASE + 0x728)
/** Ethernet MAC PPS Control */
#define EMAC_EMACPPSCTRL            MMIO32(EMAC_BASE + 0x72C)
/** Ethernet MAC PPS0 Interval */
#define EMAC_EMACPPS0INTVL          MMIO32(EMAC_BASE + 0x760)
/** Ethernet MAC PPS0 Width */
#define EMAC_EMACPPS0WIDTH          MMIO32(EMAC_BASE + 0x764)
/** Ethernet MAC DMA Bus Mode */
#define EMAC_EMACDMABUSMOD          MMIO32(EMAC_BASE + 0xC00)
/** Ethernet MAC Transmit Poll Demand */
#define EMAC_EMACTXPOLLD            MMIO32(EMAC_BASE + 0xC04)
/** Ethernet MAC Receive Poll Demand */
#define EMAC_EMACRXPOLLD            MMIO32(EMAC_BASE + 0xC08)
/** Ethernet MAC Receive Descriptor List Address */
#define EMAC_EMACRXDLADDR           MMIO32(EMAC_BASE + 0xC0C)
/** Ethernet MAC Transmit Descriptor List Address */
#define EMAC_EMACTXDLADDR           MMIO32(EMAC_BASE + 0xC10)
/** Ethernet MAC DMA Interrupt Status */
#define EMAC_EMACDMARIS             MMIO32(EMAC_BASE + 0xC14)
/** Ethernet MAC DMA Operation Mode */
#define EMAC_EMACDMAOPMODE          MMIO32(EMAC_BASE + 0xC18)
/** Ethernet MAC DMA Interrupt Mask Register */
#define EMAC_EMACDMAIM              MMIO32(EMAC_BASE + 0xC1C)
/** Ethernet MAC Missed Frame and Buffer Overflow Counter */
#define EMAC_EMACMFBOC              MMIO32(EMAC_BASE + 0xC20)
/** Ethernet MAC Receive Interrupt Watchdog Timer */
#define EMAC_EMACRXINTWDT           MMIO32(EMAC_BASE + 0xC24)
/** Ethernet MAC Current Host Transmit Descriptor */
#define EMAC_EMACHOSTXDESC          MMIO32(EMAC_BASE + 0xC48)
/** Ethernet MAC Current Host Receive Descriptor */
#define EMAC_EMACHOSRXDESC          MMIO32(EMAC_BASE + 0xC4C)
/** Ethernet MAC Current Host Transmit Buffer Address */
#define EMAC_EMACHOSTXBA            MMIO32(EMAC_BASE + 0xC50)
/** Ethernet MAC Current Host Receive Buffer Address */
#define EMAC_EMACHOSRXBA            MMIO32(EMAC_BASE + 0xC54)
/** Ethernet MAC Peripheral Property Register */
#define EMAC_EMACPP                 MMIO32(EMAC_BASE + 0xFC0)
/** Ethernet MAC Peripheral Configuration Register */
#define EMAC_EMACPC                 MMIO32(EMAC_BASE + 0xFC4)
/** Ethernet MAC Clock Configuration Register */
#define EMAC_EMACCC                 MMIO32(EMAC_BASE + 0xFC8)
/** Ethernet PHY Raw Interrupt Status */
#define EMAC_EPHYRIS                MMIO32(EMAC_BASE + 0xFD0)
/** Ethernet PHY Interrupt Mask */
#define EMAC_EPHYIM                 MMIO32(EMAC_BASE + 0xFD4)
/** Ethernet PHY Masked Interrupt Status and Clear */
#define EMAC_EPHYMISC               MMIO32(EMAC_BASE + 0xFD8)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emaccfg_values EMAC_EMACCFG Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Configuration Register Values
@{*/
/** Source Address Insertion or Replacement Control Shift */
#define EMAC_EMACCFG_SADDR_SHIFT    (28)
/** Source Address Insertion or Replacement Control */
#define EMAC_EMACCFG_SADDR          (0x7 << EMAC_EMACCFG_SADDR_SHIFT)
/** IEEE 802.3as Support for 2K Packets */
#define EMAC_EMACCFG_TWOKPEN        (1 << 27)
/** CRC Stripping for Type Frames */
#define EMAC_EMACCFG_CST            (1 << 25)
/** Watchdog Disable */
#define EMAC_EMACCFG_WDDIS          (1 << 23)
/** Jabber Disable */
#define EMAC_EMACCFG_JD             (1 << 22)
/** Jumbo Frame Enable */
#define EMAC_EMACCFG_JFEN           (1 << 20)
/** Inter-Frame Gap Shift */
#define EMAC_EMACCFG_IFG_SHIFT      (17)
/** Inter-Frame Gap */
#define EMAC_EMACCFG_IFG            (0x7 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 96 bit */
#define EMAC_EMACCFG_IFG_96         (0x0 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 88 bit */
#define EMAC_EMACCFG_IFG_88         (0x1 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 80 bit */
#define EMAC_EMACCFG_IFG_80         (0x2 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 72 bit */
#define EMAC_EMACCFG_IFG_72         (0x3 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 64 bit */
#define EMAC_EMACCFG_IFG_64         (0x4 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 56 bit */
#define EMAC_EMACCFG_IFG_56         (0x5 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 48 bit */
#define EMAC_EMACCFG_IFG_48         (0x6 << EMAC_EMACCFG_IFG_SHIFT)
/** Inter-Frame Gap - 40 bit */
#define EMAC_EMACCFG_IFG_40         (0x7 << EMAC_EMACCFG_IFG_SHIFT)
/** Disable Carrier Sense During Transmission */
#define EMAC_EMACCFG_DISCRS         (1 << 16)
/** Port Select */
#define EMAC_EMACCFG_PS             (1 << 15)
/** Speed */
#define EMAC_EMACCFG_FES            (1 << 14)
/** Disable Receive Own */
#define EMAC_EMACCFG_DRO            (1 << 13)
/** Loopback Mode */
#define EMAC_EMACCFG_LOOPBM         (1 << 12)
/** Duplex Mode */
#define EMAC_EMACCFG_DUPM           (1 << 11)
/** Checksum Offload */
#define EMAC_EMACCFG_IPC            (1 << 10)
/** Disable Retry */
#define EMAC_EMACCFG_DR             (1 << 9)
/** Automatic Pad or CRC Stripping */
#define EMAC_EMACCFG_ACS            (1 << 7)
/** Back-Off Limit Shift */
#define EMAC_EMACCFG_BL_SHIFT       (5)
/** Back-Off Limit */
#define EMAC_EMACCFG_BL             (0x3 << EMAC_EMACCFG_BL_SHIFT)
/** Back-Off Limit: k = min(n, 10) */
#define EMAC_EMACCFG_BL_N_10        (0x0 << EMAC_EMACCFG_BL_SHIFT)
/** Back-Off Limit: k = min(n, 8) */
#define EMAC_EMACCFG_BL_N_8         (0x1 << EMAC_EMACCFG_BL_SHIFT)
/** Back-Off Limit: k = min(n, 4) */
#define EMAC_EMACCFG_BL_N_4         (0x2 << EMAC_EMACCFG_BL_SHIFT)
/** Back-Off Limit: k = min(n, 1) */
#define EMAC_EMACCFG_BL_N_1         (0x3 << EMAC_EMACCFG_BL_SHIFT)
/** Deferral Check */
#define EMAC_EMACCFG_DC             (1 << 4)
/** Transmitter Enable */
#define EMAC_EMACCFG_TE             (1 << 3)
/** Receiver Enable */
#define EMAC_EMACCFG_RE             (1 << 2)
/** Preamble Length for Transmit Frames */
#define EMAC_EMACCFG_PRELEN         (0x3)
/** Preamble Length for Transmit Frames - 7 bytes */
#define EMAC_EMACCFG_PRELEN_7       (0x0)
/** Preamble Length for Transmit Frames - 5 bytes */
#define EMAC_EMACCFG_PRELEN_5       (0x1)
/** Preamble Length for Transmit Frames - 3 bytes */
#define EMAC_EMACCFG_PRELEN_3       (0x2)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacframefltr_values EMAC_EMACFRAMEFLTR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Frame Filter Register Values
@{*/
/** Receive All */
#define EMAC_EMACFRAMEFLTR_RA           (1 << 31)
/** VLAN Tag Filter Enable */
#define EMAC_EMACFRAMEFLTR_VTFE         (1 << 16)
/** Hash or Perfect Filter */
#define EMAC_EMACFRAMEFLTR_HPF          (1 << 10)
/** Source Address Filter Enable */
#define EMAC_EMACFRAMEFLTR_SAF          (1 << 9)
/** Source Address (SA) Inverse Filtering */
#define EMAC_EMACFRAMEFLTR_SAIF         (1 << 8)
/** Pass Control Frames Shift */
#define EMAC_EMACFRAMEFLTR_PCF_SHIFT    (6)
/** Pass Control Frames */
#define EMAC_EMACFRAMEFLTR_PCF          (0x3 << EMAC_EMACFRAMEFLTR_PCF_SHIFT)
/** Disable Broadcast Frames */
#define EMAC_EMACFRAMEFLTR_DBF          (1 << 5)
/** Pass All Multicast */
#define EMAC_EMACFRAMEFLTR_PM           (1 << 4)
/** Destination Address (DA) Inverse Filtering */
#define EMAC_EMACFRAMEFLTR_DAIF         (1 << 3)
/** Hash Multicast */
#define EMAC_EMACFRAMEFLTR_HMC          (1 << 2)
/** Hash Unicast */
#define EMAC_EMACFRAMEFLTR_HUC          (1 << 1)
/** Promiscuous Mode */
#define EMAC_EMACFRAMEFLTR_PR           (1 << 0)
/*@}*/

/** @defgroup emac_emachashtblh_values EMAC_EMACHASHTBLH Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Hash Table High Register Values
@{*/
/** Hash Table High */
#define EMAC_EMACHASHTBLH_HTH           (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emachashtbll_values EMAC_EMACHASHTBLL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Hash Table Low Register Values
@{*/
/** Hash Table Low */
#define EMAC_EMACHASHTBLL_HTL           (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacmiiaddr_values EMAC_EMACMIIADDR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MII Address Register Values
@{*/
/** Physical Layer Address Shift */
#define EMAC_EMACMIIADDR_PLA_SHIFT  (11)
/** Physical Layer Address Mask */
#define EMAC_EMACMIIADDR_PLA_MASK   (0x1F)
/** Physical Layer Address */
#define EMAC_EMACMIIADDR_PLA(x)     (x << EMAC_EMACMIIADDR_PLA_SHIFT)
/** MII Register Shift */
#define EMAC_EMACMIIADDR_MII_SHIFT  (6)
/** MII Register Mask */
#define EMAC_EMACMIIADDR_MII_MASK   (0x1F)
/** MII Register */
#define EMAC_EMACMIIADDR_MII(x)     (x << EMAC_EMACMIIADDR_MII_SHIFT)
/** Clock Reference Frequency Selection Shift */
#define EMAC_EMACMIIADDR_CR_SHIFT   (2)
/** Clock Reference Frequency Selection Mask */
#define EMAC_EMACMIIADDR_CR                 (0xF << EMAC_EMACMIIADDR_CR_SHIFT)
/** Clock Reference Frequency Selection - SYSCLK/42 */
#define EMAC_EMACMIIADDR_CR_SYSCLK_DIV_42   (0x0 << EMAC_EMACMIIADDR_CR_SHIFT)
/** Clock Reference Frequency Selection - SYSCLK/62 */
#define EMAC_EMACMIIADDR_CR_SYSCLK_DIV_62   (0x1 << EMAC_EMACMIIADDR_CR_SHIFT)
/** Clock Reference Frequency Selection - SYSCLK/16 */
#define EMAC_EMACMIIADDR_CR_SYSCLK_DIV_16   (0x2 << EMAC_EMACMIIADDR_CR_SHIFT)
/** Clock Reference Frequency Selection - SYSCLK/26 */
#define EMAC_EMACMIIADDR_CR_SYSCLK_DIV_26   (0x3 << EMAC_EMACMIIADDR_CR_SHIFT)
/** MII Write */
#define EMAC_EMACMIIADDR_MIIW       (1 << 1)
/** MII Busy */
#define EMAC_EMACMIIADDR_MIIB       (1 << 0)
/*@}*/

/** @defgroup emac_emacmiidata_values EMAC_EMACMIIDATA Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MII Data Register Values
@{*/
/** Ethernet MAC MII Data Mask */
#define EMAC_EMACMIIDATA_DATA_MASK   (0xFFFF)
/** Ethernet MAC MII Data */
#define EMAC_EMACMIIDATA_DATA(x)     (x)
/*@}*/

/** @defgroup emac_emacflowctl_values EMAC_EMACFLOWCTL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Flow Control Register Values
@{*/
/** Pause Time Shift */
#define EMAC_EMACFLOWCTL_PT_SHIFT   (16)
/** Pause Time Mask */
#define EMAC_EMACFLOWCTL_PT_MASK    (0xFFFF)
/** Pause Time */
#define EMAC_EMACFLOWCTL_PT(x)      (x << EMAC_EMACFLOWCTL_PT_SHIFT)
/** Disable Zero-Quanta Pause */
#define EMAC_EMACFLOWCTL_DZQP       (1 << 7)
/** Unicast Pause Frame Detect. */
#define EMAC_EMACFLOWCTL_UP         (1 << 3)
/** Receive Flow Control Enable */
#define EMAC_EMACFLOWCTL_RFE        (1 << 2)
/** Transmit Flow Control Enable */
#define EMAC_EMACFLOWCTL_TFE        (1 << 1)
/** Flow Control Busy or Back-pressure Activate */
#define EMAC_EMACFLOWCTL_FCBBPA     (1 << 0)
/*@}*/

/** @defgroup emac_emacvlantg_values EMAC_EMACVLANTG Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC VLAN Tag Register Values
@{*/
/** VLAN Tag Hash Table Match Enable */
#define EMAC_EMACVLANTG_VTHM        (1 << 19)
/** Enable S-VLAN */
#define EMAC_EMACVLANTG_ESVL        (1 << 18)
/** VLAN Tag Inverse Match Enable */
#define EMAC_EMACVLANTG_VTIM        (1 << 17)
/** Enable 12-Bit VLAN Tag Comparison */
#define EMAC_EMACVLANTG_ETV         (1 << 16)
/** VLAN Tag Identifier for Receive Frames Mask */
#define EMAC_EMACVLANTG_VL_MASK     (0xFFFF)
/** VLAN Tag Identifier for Receive Frames */
#define EMAC_EMACVLANTG_VL(x)       (x)
/*@}*/

/** @defgroup emac_emacstatus_values EMAC_EMACSTATUS Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Status Register Values
@{*/
/** TX/RX Controller TX FIFO Full Status */
#define EMAC_EMACSTATUS_TXFF        (1 << 25)
/** TX/RX Controller TX FIFO Not Empty Status */
#define EMAC_EMACSTATUS_TXFE        (1 << 24)
/** TX/RX Controller TX FIFO Write Controller Active Status */
#define EMAC_EMACSTATUS_TWC         (1 << 22)
/** TX/RX Controller's TX FIFO Read Controller Status Shift */
#define EMAC_EMACSTATUS_TRC_SHIFT   (20)
/** TX/RX Controller's TX FIFO Read Controller Status */
#define EMAC_EMACSTATUS_TRC         (0x3 << EMAC_EMACSTATUS_TRC_SHIFT)
/** TX/RX Controller's TX FIFO Read Controller Status - IDLE State*/
#define EMAC_EMACSTATUS_TRC_IDLE    (0x0)
/** TX/RX Controller's TX FIFO Read Controller Status - Read State*/
#define EMAC_EMACSTATUS_TRC_READ    (0x1)
/** TX/RX Controller's TX FIFO Read Controller Status - Waiting for TX Status from MAC transmitter */
#define EMAC_EMACSTATUS_TRC_WAIT_TX (0x2)
/** TX/RX Controller's TX FIFO Read Controller Status - Writing the received TX Status or flushing the TX FIFO*/
#define EMAC_EMACSTATUS_TRC_WRITE_TX_OR_FLUSH_FIFO  (EMAC_EMACSTATUS_TRC)
/** MAC Transmitter PAUSE */
#define EMAC_EMACSTATUS_TXPAUSED    (1 << 19)
/** MAC Transmit Frame Controller Status Shift */
#define EMAC_EMACSTATUS_TFC_SHIFT   (17)
/** MAC Transmit Frame Controller Status */
#define EMAC_EMACSTATUS_TFC         (0x3 << EMAC_EMACSTATUS_TFC_SHIFT)
/** MAC Transmit Frame Controller Status - IDLE State */
#define EMAC_EMACSTATUS_TFC_IDLE    (0x0 << EMAC_EMACSTATUS_TFC_SHIFT)
/** MAC Transmit Frame Controller Status - Waiting for status of previous frame or IFG or backoff period to
be over*/
#define EMAC_EMACSTATUS_TFC_WAIT_PREV_OR_IFG_OR_BACKOFF   (0x1 << EMAC_EMACSTATUS_TFC_SHIFT)
/** MAC Transmit Frame Controller Status - Generating and transmitting a PAUSE control frame (in the
full-duplex mode) */
#define EMAC_EMACSTATUS_TFC_PAUSE   (0x2 << EMAC_EMACSTATUS_TFC_SHIFT)
/** MAC Transmit Frame Controller Status - Transferring input frame for transmission */
#define EMAC_EMACSTATUS_TFC_TRANSFER_INPUT_FRAME          (EMAC_EMACSTATUS_TFC)
/** MAC MII Transmit Protocol Engine Status */
#define EMAC_EMACSTATUS_TPE         (1 << 16)
/** TX/RX Controller RX FIFO Fill-level Status Shift */
#define EMAC_EMACSTATUS_RXF_SHIFT   (8)
/** TX/RX Controller RX FIFO Fill-level Status */
#define EMAC_EMACSTATUS_RXF         (0x3 << EMAC_EMACSTATUS_RXF_SHIFT)
/** TX/RX Controller RX FIFO Fill-level Status - RX FIFO Empty */
#define EMAC_EMACSTATUS_RXF_FIFO_EMPTY              (0x0 << EMAC_EMACSTATUS_RXF_SHIFT)
/** TX/RX Controller RX FIFO Fill-level Status - RX FIFO fill level is below the flow-control deactivate threshold */
#define EMAC_EMACSTATUS_RXF_FIFO_BELOW_THRESHOLD    (0x1 << EMAC_EMACSTATUS_RXF_SHIFT)
/** TX/RX Controller RX FIFO Fill-level Status - RX FIFO fill level is above the flow-control activate threshold */
#define EMAC_EMACSTATUS_RXF_FIFO_ABOVE_THRESHOLD    (0x2 << EMAC_EMACSTATUS_RXF_SHIFT)
/** TX/RX Controller RX FIFO Fill-level Status - RX FIFO Full */
#define EMAC_EMACSTATUS_RXF_FIFO_FULL   (EMAC_EMACSTATUS_RXF)
/** TX/RX Controller Read Controller State Shift */
#define EMAC_EMACSTATUS_RRC_SHIFT   (5)
/** TX/RX Controller Read Controller State */
#define EMAC_EMACSTATUS_RRC         (0x3 << EMAC_EMACSTATUS_RRC_SHIFT)
/** TX/RX Controller Read Controller State  */
#define EMAC_EMACSTATUS_RRC_IDLE    (0x0 << EMAC_EMACSTATUS_RRC_SHIFT)
/** TX/RX Controller Read Controller State  */
#define EMAC_EMACSTATUS_RRC_READ_DATA     (0x1 << EMAC_EMACSTATUS_RRC_SHIFT)
/** TX/RX Controller Read Controller State  */
#define EMAC_EMACSTATUS_RRC_READ_STATUS   (0x2 << EMAC_EMACSTATUS_RRC_SHIFT)
/** TX/RX Controller Read Controller State  */
#define EMAC_EMACSTATUS_RRC_FLUSH_DATA_AND_STATUS   (EMAC_EMACSTATUS_RRC)
/** TX/RX Controller RX FIFO Write Controller Active Status */
#define EMAC_EMACSTATUS_RWC         (1 << 4)
/** MAC Receive Frame Controller FIFO Status Shift */
#define EMAC_EMACSTATUS_RFCFC_SHIFT (1)
/** MAC Receive Frame Controller FIFO Status */
#define EMAC_EMACSTATUS_RFCFC       (0x3 << EMAC_EMACSTATUS_RFCFC_SHIFT)
/** MAC MII Receive Protocol Engine Status */
#define EMAC_EMACSTATUS_RPE         (1 << 0)
/*@}*/

/** @defgroup emac_emacrwuff_values EMAC_EMACRWUFF Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Remote Wake-Up Frame Filter Register Values
@{*/
/** Remote Wake-Up Frame Filter Mask */
#define EMAC_EMACRWUFF_WAKEUPFIL_MASK    (0xFFFFFFFF)
/** Remote Wake-Up Frame Filter */
#define EMAC_EMACRWUFF_WAKEUPFIL(x)      (x)
/*@}*/

/** @defgroup emac_emacpmtctlstat_values EMAC_EMACPMTCTLSTAT Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC PMT Control and Status Register Values
@{*/
/** Wake-Up Frame Filter Register Pointer Reset */
#define EMAC_EMACPMTCTLSTAT_WUPFRRST        (1 << 31)
/** Remote Wake-Up FIFO Pointer Shift */
#define EMAC_EMACPMTCTLSTAT_RWKPTR_SHIFT    (24)
/** Remote Wake-Up FIFO Pointer Mask */
#define EMAC_EMACPMTCTLSTAT_RWKPTR_MASK     (0x7)
/** Remote Wake-Up FIFO Pointer */
#define EMAC_EMACPMTCTLSTAT_RWKPTR(x)       (x << EMAC_EMACPMTCTLSTAT_RWKPTR_SHIFT)
/** Global Unicast */
#define EMAC_EMACPMTCTLSTAT_GLBLUCAST       (1 << 9)
/** Wake-Up Frame Received */
#define EMAC_EMACPMTCTLSTAT_WUPRX           (1 << 6)
/** Magic Packet Received */
#define EMAC_EMACPMTCTLSTAT_MGKPRX          (1 << 5)
/** Wake-Up Frame Enable */
#define EMAC_EMACPMTCTLSTAT_WUPFREN         (1 << 2)
/** Magic Packet Enable */
#define EMAC_EMACPMTCTLSTAT_MGKPKTEN        (1 << 1)
/** Power Down */
#define EMAC_EMACPMTCTLSTAT_PWRDWN          (1 << 0)
/*@}*/

/** @defgroup emac_emaclpictlstat_values EMAC_EMACLPICTLSTAT Values
 * @ingroup ethernet_registers
 * @brief LPI Control and Status Register Values
@{*/
/** LPI TX Automate */
#define EMAC_EMACLPICTLSTAT_LPITXA          (1 << 19)
/** PHY Link Status Enable */
#define EMAC_EMACLPICTLSTAT_PLSEN           (1 << 18)
/** PHY Link Status */
#define EMAC_EMACLPICTLSTAT_PLS             (1 << 17)
/** LPI Enable */
#define EMAC_EMACLPICTLSTAT_LPIEN           (1 << 16)
/** Receive LPI Mode */
#define EMAC_EMACLPICTLSTAT_RLPIST          (1 << 9)
/** Transmit LPI Mode */
#define EMAC_EMACLPICTLSTAT_TLPIST          (1 << 8)
/** Receive LPI Exit */
#define EMAC_EMACLPICTLSTAT_RLPIEX          (1 << 3)
/** Receive LPI Entry */
#define EMAC_EMACLPICTLSTAT_RLPIEN          (1 << 2)
/** Transmit LPI Exit */
#define EMAC_EMACLPICTLSTAT_TLPIEX          (1 << 1)
/** Transmit LPI Entry */
#define EMAC_EMACLPICTLSTAT_TLPIEN          (1 << 0)
/*@}*/

/** @defgroup emac_emaclpitimerctrl_values EMAC_EMACLPITIMERCTRL Values
 * @ingroup ethernet_registers
 * @brief LPI Timers Control Register Values
@{*/
/** LPI LS Timer Shift */
#define EMAC_EMACLPITIMERCTRL_LST_SHIFT (16)
/** LPI LS Timer Mask */
#define EMAC_EMACLPITIMERCTRL_LST_MASK  (0x3FF)
/** LPI LS Timer */
#define EMAC_EMACLPITIMERCTRL_LST(x)    (x << EMAC_EMACLPITIMERCTRL_LST_SHIFT)
/** LPI TW Timer Mask */
#define EMAC_EMACLPITIMERCTRL_TWT_MASK  (0xFFFF)
/** LPI TW Timer */
#define EMAC_EMACLPITIMERCTRL_TWT(x)    (x)
/*@}*/

/** @defgroup emac_emacris_values EMAC_EMACRIS Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Raw Interrupt Status Register Values
@{*/
/** LPI Interrupt Status */
#define EMAC_EMACRIS_LPI        (1 << 10)
/** Timestamp Interrupt Status */
#define EMAC_EMACRIS_TS         (1 << 9)
/** MMC Transmit Interrupt Status */
#define EMAC_EMACRIS_MMCTX      (1 << 6)
/** MMC Receive Interrupt Status */
#define EMAC_EMACRIS_MMCRX      (1 << 5)
/** MMC Interrupt Status */
#define EMAC_EMACRIS_MMC        (1 << 4)
/** PMT Interrupt Status */
#define EMAC_EMACRIS_PMT        (1 << 3)
/*@}*/

/** @defgroup emac_emacim_values EMAC_EMACIM Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Interrupt Mask Register Values
@{*/
/** LPI Interrupt Mask */
#define EMAC_EMACIM_LPI         (1 << 10)
/** Timestamp Interrupt Mask */
#define EMAC_EMACIM_TSI         (1 << 9)
/** PMT Interrupt Mask */
#define EMAC_EMACIM_PMT         (1 << 3)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacaddrh_values EMAC_EMACADDRxH Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Address [0..3] High Register Values
@{*/
/** Address Enable */
#define EMAC_EMACADDRxH_AE               (1 << 31)
/** Source Address. Available only for EMACADDR[1..3]H. */
#define EMAC_EMACADDRxH_SA               (1 << 30)
/**  */
#define EMAC_EMACADDRxH_MBC_SHIFT        (24)
/**  */
#define EMAC_EMACADDRxH_MBC              (0x3F << EMAC_EMACADDRH_MBC_SHIFT)
/** MAC Address [47:32] */
#define EMAC_EMACADDRxH_ADDRHI           (0xFFFF)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacaddrl_values EMAC_EMACADDRL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Address [0..3] Low Register Values
@{*/
/** MAC Address [31:0] */
#define EMAC_EMACADDRxL_ADDRLO           (0xFFFFFFFF)
/** i=[0..3] */
#define EMAC_EMACADDRL(i)           MMIO32(EMAC_BASE + 0x44+(i)*8)
/*@}*/

/* TODO Вернуться сюда позже */
/* i=[0..3] */
#define EMAC_EMACADDRH(i)           MMIO32(EMAC_BASE + 0x40+(i)*8)
/* i=[0..3] */
#define EMAC_EMACADDRL(i)           MMIO32(EMAC_BASE + 0x44+(i)*8)

/** @defgroup emac_emacwdogto_values EMAC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Watchdog Time-out Register Values
@{*/
/** Programmable Watchdog Enable */
#define EMAC_EMACWDOGTO_PWE         (1 << 16)
/** Watchdog Time-out */
#define EMAC_EMACWDOGTO_WTO         (0x3FFF)
/*@}*/

/** @defgroup emac_emacmmcctrl_values EMAC_EMACMMCCTRL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MMC Control Register Values
@{*/
/** Update MMC Counters for Dropped Broadcast Frames */
#define EMAC_EMACMMCCTRL_UCDBC          (1 << 8)
/** Full/Half Preset Level Value */
#define EMAC_EMACMMCCTRL_CNTPRSTLVL     (1 << 5)
/** Counters Preset */
#define EMAC_EMACMMCCTRL_CNTPRST        (1 << 4)
/** MMC Counter Freeze */
#define EMAC_EMACMMCCTRL_CNTFREEZ       (1 << 3)
/** Reset on Read */
#define EMAC_EMACMMCCTRL_RSTONRD        (1 << 2)
/** Counters Stop Rollover */
#define EMAC_EMACMMCCTRL_CNTSTPRO       (1 << 1)
/** Counters Reset */
#define EMAC_EMACMMCCTRL_CNTRST         (1 << 0)
/*@}*/

/** @defgroup emac_emacmmcrxris_values EMAC_EMACMMCRXRIS Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MMC Receive Raw Interrupt Status Register Values
@{*/
/** MMC Receive Unicast Good Frame Counter Interrupt Status */
#define EMAC_EMACMMCRXRIS_UCGF          (1 << 17)
/** MMC Receive Alignment Error Frame Counter Interrupt Status */
#define EMAC_EMACMMCRXRIS_ALGNERR       (1 << 6)
/** MMC Receive CRC Error Frame Counter Interrupt Status */
#define EMAC_EMACMMCRXRIS_CRCERR        (1 << 5)
/** MMC Receive Good Bad Frame Counter Interrupt Status */
#define EMAC_EMACMMCRXRIS_GBF           (1 << 0)
/*@}*/

/** @defgroup emac_emacmmctxris_values EMAC_EMACMMCTXRIS Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MMC Transmit Raw Interrupt Status Register Values
@{*/
/** Octet Counter Interrupt Status */
#define EMAC_EMACMMCTXRIS_OCTCNT        (1 << 20)
/** MMC Transmit Multiple Collision Good Frame Counter Interrupt Status */
#define EMAC_EMACMMCTXRIS_MCOLLGF       (1 << 15)
/** MMC Transmit Single Collision Good Frame Counter Interrupt Status */
#define EMAC_EMACMMCTXRIS_SCOLLGF       (1 << 14)
/** MMC Transmit Good Bad Frame Counter Interrupt Status */
#define EMAC_EMACMMCTXRIS_GBF           (1 << 1)
/*@}*/

/** @defgroup emac_emacmmcrxim_values EMAC_EMACMMCRXIM Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MMC Receive Interrupt Mask Register Values
@{*/
/** MMC Receive Unicast Good Frame Counter Interrupt Mask */
#define EMAC_EMACMMCRXIM_UCGF           (1 << 17)
/** MMC Receive Alignment Error Frame Counter Interrupt Mask */
#define EMAC_EMACMMCRXIM_ALGNERR        (1 << 6)
/** MMC Receive CRC Error Frame Counter Interrupt Mask */
#define EMAC_EMACMMCRXIM_CRCERR         (1 << 5)
/** MMC Receive Good Bad Frame Counter Interrupt Mask */
#define EMAC_EMACMMCRXIM_GBF            (1 << 0)
/*@}*/

/** @defgroup emac_emacmmctxim_values EMAC_EMACMMCTXIM Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC MMC Transmit Interrupt Mask Register Values
@{*/
/** MMC Transmit Good Octet Counter Interrupt Mask */
#define EMAC_EMACMMCTXIM_OCTCNT         (1 << 20)
/** MMC Transmit Multiple Collision Good Frame Counter Interrupt Mask */
#define EMAC_EMACMMCTXIM_MCOLLGF        (1 << 15)
/** MMC Transmit Single Collision Good Frame Counter Interrupt Mask */
#define EMAC_EMACMMCTXIM_SCOLLGF        (1 << 14)
/** MMC Transmit Good Bad Frame Counter Interrupt Mask */
#define EMAC_EMACMMCTXIM_GBF            (1 << 1)
/*@}*/

/** @defgroup emac_emactxcntgb_values EMAC_EMACTXCNTGB Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Frame Count for Good and Bad Frames Register Values
@{*/
/** Transmit Frame Count for Good and Bad Frames */
#define EMAC_EMACTXCNTGB_TXFRMGB        (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactxcntscol_values EMAC_EMACTXCNTSCOL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Frame Count for Frames Transmitted after Single Collision Register Values
@{*/
/** Transmit Frame Count for Frames Transmitted after Single Collision */
#define EMAC_EMACTXCNTSCOL_TXSNGLCOLG   (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactxcntmcol_values EMAC_EMACTXCNTMCOL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Frame Count for Frames Transmitted after Multiple Collisions Register Values
@{*/
/** Transmit Frame Count for Frames Transmitted after Multiple Collisions */
#define EMAC_EMACTXCNTMCOL_TXMULTCOLG   (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactxoctcntg_values EMAC_EMACTXOCTCNTG Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Octet Count Good Register Values
@{*/
/** Transmit Octet Count Good */
#define EMAC_EMACTXOCTCNTG_TXOCTG       (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacrxcntgb_values EMAC_EMACRXCNTGB Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Frame Count for Good and Bad Frames Register Values
@{*/
/** Receive Frame Count for Good and Bad Frames */
#define EMAC_EMACRXCNTGB_RXFRMGB        (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacrxcntcrcerr_values EMAC_EMACRXCNTCRCERR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Frame Count for CRC Error Frames Register Values
@{*/
/** Receive Frame Count for CRC Error Frames */
#define EMAC_EMACRXCNTCRCERR_RXCRCERR   (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacrxcntalgnerr_values EMAC_EMACRXCNTALGNERR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Frame Count for Alignment Error Frames Register Values
@{*/
/** Receive Frame Count for Alignment Error Frames */
#define EMAC_EMACRXCNTALGNERR_RXALGNERR (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacrxcntguni_values EMAC_EMACRXCNTGUNI Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Frame Count for Good Unicast Frames Register Values
@{*/
/** Receive Frame Count for Good Unicast Frames */
#define EMAC_EMACRXCNTGUNI_RXUCASTG     (0xFFFFFFFF)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacvlnincrep_values EMAC_EMACVLNINCREP Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC VLAN Tag Inclusion or Replacement Register Values
@{*/
/** C-VLAN or S-VLAN */
#define EMAC_EMACVLNINCREP_CSVL         (1 << 19)
/** VLAN Priority Control */
#define EMAC_EMACVLNINCREP_VLP          (1 << 18)
/**  */
#define EMAC_EMACVLNINCREP_VLC_SHIFT    (16)
/**  */
#define EMAC_EMACVLNINCREP_VLC          (0x3 << EMAC_EMACVLNINCREP_VLC_SHIFT)
/**  */
#define EMAC_EMACVLNINCREP_VLT          (0xFFFF)
/*@}*/

/** @defgroup emac_emacvlanhash_values EMAC_EMACVLANHASH Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC VLAN Hash Table Register Values
@{*/
/** VLAN Hash Table */
#define EMAC_EMACVLANHASH_VLHT          (0xFFFF)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emactimstctrl_values EMAC_EMACTIMSTCTRL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Timestamp Control Register Values
@{*/
/** Enable MAC address for PTP Frame Filtering */
#define EMAC_EMACTIMSTCTRL_PTPFLTR      (1 << 18)
/**  */
#define EMAC_EMACTIMSTCTRL_SELPTP_SHIFT (16)
/**  */
#define EMAC_EMACTIMSTCTRL_SELPTP       (0x3 << EMAC_EMACTIMSTCTRL_SELPTP_SHIFT)
/** Enable Snapshot for Messages Relevant to Master */
#define EMAC_EMACTIMSTCTRL_TSMAST       (1 << 15)
/** Enable Timestamp Snapshot for Event Messages */
#define EMAC_EMACTIMSTCTRL_TSEVNT       (1 << 14)
/** Enable Processing of PTP Frames Sent over IPv4-UDP */
#define EMAC_EMACTIMSTCTRL_PTPIPV4      (1 << 13)
/** Enable Processing of PTP Frames Sent Over IPv6-UDP */
#define EMAC_EMACTIMSTCTRL_PTPIPV6      (1 << 12)
/** Enable Processing of PTP Over Ethernet Frames */
#define EMAC_EMACTIMSTCTRL_PTPETH       (1 << 11)
/** Enable PTP Packet Processing For Version 2 Format */
#define EMAC_EMACTIMSTCTRL_PTPVER2      (1 << 10)
/** Timestamp Digital or Binary Rollover Control */
#define EMAC_EMACTIMSTCTRL_DGTLBIN      (1 << 9)
/** Enable Timestamp For All Frames */
#define EMAC_EMACTIMSTCTRL_ALLF         (1 << 8)
/** Addend Register Update */
#define EMAC_EMACTIMSTCTRL_ADDREGUP     (1 << 5)
/** Timestamp Interrupt Trigger Enable */
#define EMAC_EMACTIMSTCTRL_INTTRIG      (1 << 4)
/** Timestamp Update */
#define EMAC_EMACTIMSTCTRL_TSUPDT       (1 << 3)
/** Timestamp Initialize */
#define EMAC_EMACTIMSTCTRL_TSINIT       (1 << 2)
/** Timestamp Fine or Coarse Update */
#define EMAC_EMACTIMSTCTRL_TSFCUPDT     (1 << 1)
/** Timestamp Enable */
#define EMAC_EMACTIMSTCTRL_TSEN         (1 << 0)
/*@}*/

/** @defgroup emac_emacsubsecinc_values EMAC_EMACSUBSECINC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Sub-Second Increment Register Values
@{*/
/** Sub-second Increment Value */
#define EMAC_EMACSUBSECINC_SSINC        (0xFF)
/*@}*/

/** @defgroup emac_emactimsec_values EMAC_EMACTIMSEC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC System Time - Seconds Register Values
@{*/
/** Timestamp Second */
#define EMAC_EMACTIMSEC_TSS             (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactimnano_values EMAC_EMACTIMNANO Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC System Time - Nanoseconds Register Values
@{*/
/** Timestamp Sub-Seconds */
#define EMAC_EMACTIMNANO_TSSS           (0x7FFFFFFF)
/*@}*/

/** @defgroup emac_emactimsecu_values EMAC_EMACTIMSECU Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC System Time - Seconds Update Register Values
@{*/
/** Timestamp Second */
#define EMAC_EMACTIMSECU_TSS            (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactimnanou_values EMAC_EMACTIMNANOU Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC System Time - Nanoseconds Update Register Values
@{*/
/** Add or subtract time */
#define EMAC_EMACTIMNANOU_ADDSUB        (1 << 31)
/** Timestamp Sub-Second */
#define EMAC_EMACTIMNANOU_TSSS          (0x7FFFFFFF)
/*@}*/

/** @defgroup emac_emactimadd_values EMAC_EMACTIMADD Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Timestamp Addend Register Values
@{*/
/** Timestamp Addend Register */
#define EMAC_EMACTIMADD_TSAR            (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactargsec_values EMAC_EMACTARGSEC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Target Time Seconds Register Values
@{*/
/** Target Time Seconds Register */
#define EMAC_EMACTARGSEC_TSTR           (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emactargnano_values EMAC_EMACTARGNANO Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Target Time Nanoseconds Register Values
@{*/
/** Target Time Register Busy */
#define EMAC_EMACTARGNANO_TRGTBUSY      (1 << 31)
/** Target Timestamp Low Register */
#define EMAC_EMACTARGNANO_TTSLO         (0x7FFFFFFF)
/*@}*/

/** @defgroup emac_emachwordsec_values EMAC_EMACHWORDSEC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC System Time-Higher Word Seconds Register Values
@{*/
/** Target Timestamp Higher Word Register */
#define EMAC_EMACHWORDSEC_TSHWR         (0xFFFF)
/*@}*/

/** @defgroup emac_emactimstat_values EMAC_EMACTIMSTAT Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Timestamp Status Register Values
@{*/
/** Timestamp Target Time Reached */
#define EMAC_EMACTIMSTAT_TSTARGT        (1 << 1)
/** Timestamp Seconds Overflow */
#define EMAC_EMACTIMSTAT_TSSOVF         (1 << 0)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacppsctrl_values EMAC_EMACPPSCTRL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC PPS Control Register Values
@{*/
/** Target Time Register Mode for PPS0 Output Shift */
#define EMAC_EMACPPSCTRL_TRGMODS0_SHIFT (5)
/** Target Time Register Mode for PPS0 Output */
#define EMAC_EMACPPSCTRL_TRGMODS0       (0x3 << EMAC_EMACPPSCTRL_TRGMODS0_SHIFT)
/** Target Time Register Mode for PPS0 Output - Interrupt Event */
#define EMAC_EMACPPSCTRL_TRGMODS0_INT (0x0 << EMAC_EMACPPSCTRL_TRGMODS0_SHIFT)
/** Target Time Register Mode for PPS0 Output - Interrupt Event and EN0PPS */
#define EMAC_EMACPPSCTRL_TRGMODS0_INT_AND_EN0PPS (0x2 << EMAC_EMACPPSCTRL_TRGMODS0_SHIFT)
/** Target Time Register Mode for PPS0 Output - EN0PPS */
#define EMAC_EMACPPSCTRL_TRGMODS0_EN0PPS (EMAC_EMACPPSCTRL_TRGMODS0)
/** Flexible PPS Output Mode Enable */
#define EMAC_EMACPPSCTRL_PPSEN0         (1 << 4)
/**  */
#define EMAC_EMACPPSCTRL_PPSCTRL        (0xF)
/*@}*/

/** @defgroup emac_emacpps0intvl_values EMAC_EMACPPS0INTVL Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC PPS0 Interval Register Values
@{*/
/** PPS0 Output Signal Interval */
#define EMAC_EMACPPS0INTVL_PPS0INT      (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacpps0width_values EMAC_EMACPPS0WIDTH Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC PPS0 Width Register Values
@{*/
/** EN0PPS Output Signal Width */
#define EMAC_EMACPPS0WIDTH_PPS0WIDTH    (0xFFFFFFFF)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacdmabusmod_values EMAC_EMACDMABUSMOD Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC DMA Bus Mode Register Values
@{*/
/** Rebuild Burst */
#define EMAC_EMACDMABUSMOD_RIB          (1 << 31)
/** Transmit Priority */
#define EMAC_EMACDMABUSMOD_TXPR         (1 << 27)
/** Mixed Burst */
#define EMAC_EMACDMABUSMOD_MB           (1 << 26)
/** Address Aligned Beats */
#define EMAC_EMACDMABUSMOD_AAL          (1 << 25)
/** 8 x Programmable Burst Length (PBL) Mode */
#define EMAC_EMACDMABUSMOD_8xPBL        (1 << 24)
/** Use Separate Programmable Burst Length (PBL */
#define EMAC_EMACDMABUSMOD_USP          (1 << 23)
/**  */
#define EMAC_EMACDMABUSMOD_RPBL_SHIFT   (17)
/**  */
#define EMAC_EMACDMABUSMOD_RPBL         (0x3F << EMAC_EMACDMABUSMOD_RPBL_SHIFT)
/** Fixed Burst */
#define EMAC_EMACDMABUSMOD_FB           (1 << 16)
/**  */
#define EMAC_EMACDMABUSMOD_PR_SHIFT     (14)
/**  */
#define EMAC_EMACDMABUSMOD_PR           (0x3 << EMAC_EMACDMABUSMOD_PR_SHIFT)
/**  */
#define EMAC_EMACDMABUSMOD_PR_1_1       (0x0 << EMAC_EMACDMABUSMOD_PR_SHIFT)
/**  */
#define EMAC_EMACDMABUSMOD_PR_2_1       (0x1 << EMAC_EMACDMABUSMOD_PR_SHIFT)
/**  */
#define EMAC_EMACDMABUSMOD_PR_3_1       (0x2 << EMAC_EMACDMABUSMOD_PR_SHIFT)
/**  */
#define EMAC_EMACDMABUSMOD_PR_4_1       (0x3 << EMAC_EMACDMABUSMOD_PR_SHIFT)
/**  */
#define EMAC_EMACDMABUSMOD_PBL_SHIFT    (8)
/**  */
#define EMAC_EMACDMABUSMOD_PBL          (0x3F << EMAC_EMACDMABUSMOD_PBL_SHIFT)
/** Alternate Descriptor Size */
#define EMAC_EMACDMABUSMOD_ATDS         (1 << 7)
/**  */
#define EMAC_EMACDMABUSMOD_DSL_SHIFT    (2)
/**  */
#define EMAC_EMACDMABUSMOD_DSL          (0x1F << EMAC_EMACDMABUSMOD_DSL_SHIFT)
/** DMA Arbitration Scheme */
#define EMAC_EMACDMABUSMOD_DA           (1 << 1)
/** DMA Software Reset */
#define EMAC_EMACDMABUSMOD_SWR          (1 << 0)
/*@}*/

/** @defgroup emac_emactxpolld_values EMAC_EMACTXPOLLD Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Poll Demand Register Values
@{*/
/** Transmit Poll Demand */
#define EMAC_EMACTXPOLLD_TPD            (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacrxpolld_values EMAC_EMACRXPOLLD Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Poll Demand Register Values
@{*/
/** Receive Poll Demand */
#define EMAC_EMACRXPOLLD_RPD            (0xFFFFFFFF)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacrxdladdr_values EMAC_EMACRXDLADDR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Descriptor List Address Register Values
@{*/
/**  */
#define EMAC_EMACRXDLADDR_STRXLIST_SHIFT    (2)
/** Start of Receive List */
#define EMAC_EMACRXDLADDR_STRXLIST          (0x3FFFFFFF << EMAC_EMACRXDLADDR_STRXLIST_SHIFT)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emactxdladdr_values EMAC_EMACTXDLADDR Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Transmit Descriptor List Address Register Values
@{*/
/**  */
#define EMAC_EMACTXDLADDR_TXDLADDR_SHIFT    (2)
/** Start of Transmit List Base Address */
#define EMAC_EMACTXDLADDR_TXDLADDR          (0x3FFFFFFF << EMAC_EMACTXDLADDR_TXDLADDR_SHIFT)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacdmaris_values EMAC_EMACDMARIS Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC DMA Interrupt Status Register Values
@{*/
/** Timestamp Trigger Interrupt Status */
#define EMAC_EMACDMARIS_TT              (1 << 29)
/** MAC PMT Interrupt Status */
#define EMAC_EMACDMARIS_PMT             (1 << 28)
/** MAC MMC Interrupt */
#define EMAC_EMACDMARIS_MMC             (1 << 27)
/**  */
#define EMAC_EMACDMARIS_AE_SHIFT        (23)
/**  */
#define EMAC_EMACDMARIS_AE              (0x7 << EMAC_EMACDMARIS_AE_SHIFT)
/**  */
#define EMAC_EMACDMARIS_TS_SHIFT        (20)
/**  */
#define EMAC_EMACDMARIS_TS              (0x7 << EMAC_EMACDMARIS_TS_SHIFT)
/**  */
#define EMAC_EMACDMARIS_RS_SHIFT        (17)
/**  */
#define EMAC_EMACDMARIS_RS              (0x7 << EMAC_EMACDMARIS_RS_SHIFT)
/** Normal Interrupt Summary */
#define EMAC_EMACDMARIS_NIS             (1 << 16)
/** Abnormal Interrupt Summary */
#define EMAC_EMACDMARIS_AIS             (1 << 15)
/** Early Receive Interrupt */
#define EMAC_EMACDMARIS_ERI             (1 << 14)
/** Fatal Bus Error Interrupt */
#define EMAC_EMACDMARIS_FBI             (1 << 13)
/** Early Transmit Interrupt */
#define EMAC_EMACDMARIS_ETI             (1 << 10)
/** Receive Watchdog Time-out */
#define EMAC_EMACDMARIS_RWT             (1 << 9)
/** Receive Process Stopped */
#define EMAC_EMACDMARIS_RPS             (1 << 8)
/** Receive Buffer Unavailable */
#define EMAC_EMACDMARIS_RU              (1 << 7)
/** Receive Interrupt */
#define EMAC_EMACDMARIS_RI              (1 << 6)
/** Transmit Underflow */
#define EMAC_EMACDMARIS_UNF             (1 << 5)
/** Receive Overflow */
#define EMAC_EMACDMARIS_OVF             (1 << 4)
/** Transmit Jabber Time-out */
#define EMAC_EMACDMARIS_TJT             (1 << 3)
/** Transmit Buffer Unavailable */
#define EMAC_EMACDMARIS_TU              (1 << 2)
/** Transmit Process Stopped */
#define EMAC_EMACDMARIS_TPS             (1 << 1)
/** Transmit Interrupt */
#define EMAC_EMACDMARIS_TI              (1 << 0)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacdmaopmode_values EMAC_EMACDMAOPMODE Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC DMA Operation Mode Register Values
@{*/
/** Disable Dropping of TCP/IP Checksum Error Frames */
#define EMAC_EMACDMAOPMODE_DT           (1 << 26)
/** Receive Store and Forward */
#define EMAC_EMACDMAOPMODE_RSF          (1 << 25)
/** Disable Flushing of Received Frames */
#define EMAC_EMACDMAOPMODE_DFF          (1 << 24)
/** Transmit Store and Forward */
#define EMAC_EMACDMAOPMODE_TSF          (1 << 21)
/** Flush Transmit FIFO */
#define EMAC_EMACDMAOPMODE_FTF          (1 << 20)
/**  */
#define EMAC_EMACDMAOPMODE_TTC_SHIFT    (1 << 14)
/**  */
#define EMAC_EMACDMAOPMODE_TTC          (0x7 << EMAC_EMACDMAOPMODE_TTC_SHIFT)
/** Start or Stop Transmission Command */
#define EMAC_EMACDMAOPMODE_ST           (1 << 13)
/** Forward Error Frames */
#define EMAC_EMACDMAOPMODE_FEF          (1 << 7)
/** Forward Undersized Good Frames */
#define EMAC_EMACDMAOPMODE_FUF          (1 << 6)
/** Drop Giant Frame Enable */
#define EMAC_EMACDMAOPMODE_DGF          (1 << 5)
/**  */
#define EMAC_EMACDMAOPMODE_RTC_SHIFT    (3)
/**  */
#define EMAC_EMACDMAOPMODE_RTC          (0x3 << EMAC_EMACDMAOPMODE_RTC_SHIFT)
/** Operate on Second Frame */
#define EMAC_EMACDMAOPMODE_OSF          (1 << 2)
/** Start or Stop Receive */
#define EMAC_EMACDMAOPMODE_SR           (1 << 1)
/*@}*/

/** @defgroup emac_emacdmaim_values EMAC_EMACDMAIM Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC DMA Interrupt Mask Register Values
@{*/
/** Normal Interrupt Summary Enable */
#define EMAC_EMACDMAIM_NIE              (1 << 16)
/** Abnormal Interrupt Summary Enable */
#define EMAC_EMACDMAIM_AIE              (1 << 15)
/** Early Receive Interrupt Enable */
#define EMAC_EMACDMAIM_ERE              (1 << 14)
/** Fatal Bus Error Enable */
#define EMAC_EMACDMAIM_FBE              (1 << 13)
/** Early Transmit Interrupt Enable */
#define EMAC_EMACDMAIM_ETE              (1 << 10)
/** Receive Watchdog Time-out Enable */
#define EMAC_EMACDMAIM_RWE              (1 << 9)
/** Receive Stopped Enable */
#define EMAC_EMACDMAIM_RSE              (1 << 8)
/** Receive Buffer Unavailable Enable */
#define EMAC_EMACDMAIM_RUE              (1 << 7)
/** Receive Interrupt Enable */
#define EMAC_EMACDMAIM_RIE              (1 << 6)
/** Underflow Interrupt Enable */
#define EMAC_EMACDMAIM_UNE              (1 << 5)
/** Overflow Interrupt Enable */
#define EMAC_EMACDMAIM_OVE              (1 << 4)
/** Transmit Jabber Time-out Enable */
#define EMAC_EMACDMAIM_TJE              (1 << 3)
/** Transmit Buffer Unvailable Enable */
#define EMAC_EMACDMAIM_TUE              (1 << 2)
/** Transmit Stopped Enable */
#define EMAC_EMACDMAIM_TSE              (1 << 1)
/** Transmit Interrupt Enable */
#define EMAC_EMACDMAIM_TIE              (1 << 0)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacmfboc_values EMAC_EMACMFBOC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Missed Frame and Buffer Overflow Counter Register Values
@{*/
/** Overflow Bit for FIFO Overflow Counter */
#define EMAC_EMACMFBOC_OVFCNTOVF        (1 << 28)
/**  */
#define EMAC_EMACMFBOC_OVFFRMCNT_SHIFT  (17)
/**  */
#define EMAC_EMACMFBOC_OVFFRMCNT        (0x7FF << EMAC_EMACMFBOC_OVFFRMCNT_SHIFT)
/** Overflow bit for Missed Frame Counter */
#define EMAC_EMACMFBOC_MISCNTOVF        (1 << 16)
/**  */
#define EMAC_EMACMFBOC_MISFRMCNT        (0xFFFF)
/*@}*/

/** @defgroup emac_emacrxintwdt_values EMAC_EMACRXINTWDT Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Receive Interrupt Watchdog Timer Register Values
@{*/
/** Receive Interrupt Watchdog Timer Count */
#define EMAC_EMACRXINTWDT_RIWT          (0xFF)
/*@}*/

/** @defgroup emac_emachostxdesc_values EMAC_EMACHOSTXDESC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Current Host Transmit Descriptor Register Values
@{*/
/** Host Transmit Descriptor Address Pointer */
#define EMAC_EMACHOSTXDESC_CURTXDESC    (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emachosrxdesc_values EMAC_EMACHOSRXDESC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Current Host Receive Descriptor Register Values
@{*/
/** Host Receive Descriptor Address Pointer */
#define EMAC_EMACHOSRXDESC_CURRXDESC    (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emachostxba_values EMAC_EMACHOSTXBA Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Current Host Transmit Buffer Address Register Values
@{*/
/** Host Transmit Buffer Address Pointer */
#define EMAC_EMACHOSTXBA_CURTXBUFA      (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emachosrxba_values EMAC_EMACHOSRXBA Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Current Host Receive Buffer Address Register Values
@{*/
/** Host Receive Buffer Address Pointer */
#define EMAC_EMACHOSRXBA_CURRXBUFA      (0xFFFFFFFF)
/*@}*/

/** @defgroup emac_emacpp_values EMAC_EMACPP Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Peripheral Property Register Register Values
@{*/
/** Ethernet MAC Type Shift */
#define EMAC_EMACPP_MACTYPE_SHIFT       (8)
/** Ethernet MAC Type */
#define EMAC_EMACPP_MACTYPE             (0x7 << EMAC_EMACPP_MACTYPE_SHIFT)
/** Ethernet MAC Type - MSP432E4 class MAC */
#define EMAC_EMACPP_MACTYPE_MSP432E4    (0x1 << EMAC_EMACPP_MACTYPE_SHIFT)
/** Ethernet PHY Type */
#define EMAC_EMACPP_PHYTYPE             (0x7)
/** Ethernet PHY Type - MSP432E4 class PHY */
#define EMAC_EMACPP_PHYTYPE_MSP432E4    (0x3)
/*@}*/

/* TODO Вернуться сюда позже */
/** @defgroup emac_emacpc_values EMAC_EMACPC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Peripheral Configuration Register Values
@{*/
/** PHY Select */
#define EMAC_EMACPC_PHYEXT              (1 << 31)
/** Ethernet Interface Select Shift */
#define EMAC_EMACPC_PINTFS_SHIFT        (28)
/** Ethernet Interface Select */
#define EMAC_EMACPC_PINTFS              (0x7 << EMAC_EMACPC_PINTFS_SHIFT)
/** Ethernet Interface Select - MII */
#define EMAC_EMACPC_PINTFS_MII          (0x0 << EMAC_EMACPC_PINTFS_SHIFT)
/** Ethernet Interface Select - RMII */
#define EMAC_EMACPC_PINTFS_RMII         (0x4 << EMAC_EMACPC_PINTFS_SHIFT)
/** PHY Soft Restart */
#define EMAC_EMACPC_DIGRESTART          (1 << 25)
/** Odd Nibble TXER Detection Disable */
#define EMAC_EMACPC_NIBDETDIS           (1 << 24)
/** RXER Detection During Idle */
#define EMAC_EMACPC_RXERIDLE            (1 << 23)
/** Isolate MII in Link Loss */
#define EMAC_EMACPC_ISOMIILL            (1 << 22)
/** Link Loss Recovery */
#define EMAC_EMACPC_LRR                 (1 << 21)
/** TDR Auto Run */
#define EMAC_EMACPC_TDRRUN              (1 << 20)
/**  */
#define EMAC_EMACPC_FASTLDMODE_SHIFT    (15)
/**  */
#define EMAC_EMACPC_FASTLDMODE          (0x1F)
/** Polarity Swap */
#define EMAC_EMACPC_POLSWAP             (1 << 14)
/** MDI Swap */
#define EMAC_EMACPC_MDISWAP             (1 << 13)
/** Robust Auto MDI-X */
#define EMAC_EMACPC_RBSTMDIX            (1 << 12)
/** Fast Auto MDI-X */
#define EMAC_EMACPC_FASTMDIX            (1 << 11)
/** MDIX Enable */
#define EMAC_EMACPC_MDIXEN              (1 << 10)
/** Fast RXDV Detection */
#define EMAC_EMACPC_FASTRXDV            (1 << 9)
/** FAST Link-Up in Parallel Detect */
#define EMAC_EMACPC_FASTLUPD            (1 << 8)
/** Extended Full Duplex Ability */
#define EMAC_EMACPC_EXTFD               (1 << 7)
/** Fast Auto Negotiation Enable */
#define EMAC_EMACPC_FASTANEN            (1 << 6)
/**  */
#define EMAC_EMACPC_FASTANSEL_SHIFT     (4)
/**  */
#define EMAC_EMACPC_FASTANSEL           (0x3 << EMAC_EMACPC_FASTANSEL_SHIFT)
/** Auto-Negotiation Enable */
#define EMAC_EMACPC_ANEN                (1 << 3)
/**  */
#define EMAC_EMACPC_ANMODE_SHIFT        (1)
/**  */
#define EMAC_EMACPC_ANMODE              (0x3 << EMAC_EMACPC_ANMODE_SHIFT)
/** Ethernet PHY Hold */
#define EMAC_EMACPC_PHYHOLD             (1 << 0)
/*@}*/

/** @defgroup emac_emaccc_values EMAC_EMACCC Values
 * @ingroup ethernet_registers
 * @brief Ethernet MAC Clock Configuration Register Values
@{*/
/** PTP Clock Reference Enable */
#define EMAC_EMACCC_PTPCEN              (1 << 18)
/** LED Polarity Control */
#define EMAC_EMACCC_POL                 (1 << 17)
/** EN0RREF_CLK Signal Enable */
#define EMAC_EMACCC_CLKEN               (1 << 16)
/*@}*/

/** @defgroup emac_ephyris_values EMAC_EPHYRIS Values
 * @ingroup ethernet_registers
 * @brief Ethernet PHY Raw Interrupt Status Register Values
@{*/
/** Ethernet PHY Raw Interrupt Status */
#define EMAC_EPHYRIS_INT                (1 << 0)
/*@}*/

/** @defgroup emac_ephyim_values EMAC_EPHYIM Values
 * @ingroup ethernet_registers
 * @brief Ethernet PHY Interrupt Mask Register Values
@{*/
/** Ethernet PHY Interrupt Mask */
#define EMAC_EPHYIM_INT                 (1 << 0)
/*@}*/

/** @defgroup emac_ephymisc_values EMAC_EPHYMISC Values
 * @ingroup ethernet_registers
 * @brief Ethernet PHY Masked Interrupt Status and Clear Register Values
@{*/
/** Ethernet PHY Status and Clear register */
#define EMAC_EPHYMISC_INT               (1 << 0)
/*@}*/

/** @defgroup ethernet_descriptors Ethernet Descriptors
 * @ingroup ethernet_defines
 * @brief Ethernet Descriptors
@{*/
/** Ethernet Descriptor n */
#define ETH_DES(n, base)        MMIO32((base) + (n)*4)
/** Ethernet Descriptor 0 */
#define ETH_DES0(base)          ETH_DES(0, base)
/** Ethernet Descriptor 1 */
#define ETH_DES1(base)          ETH_DES(1, base)
/** Ethernet Descriptor 2 */
#define ETH_DES2(base)          ETH_DES(2, base)
/** Ethernet Descriptor 3 */
#define ETH_DES3(base)          ETH_DES(3, base)
/** Ethernet Extended Descriptor 4 */
#define ETH_DES4(base)          ETH_DES(4, base)
/** Ethernet Extended Descriptor 5 */
#define ETH_DES5(base)          ETH_DES(5, base)
/** Ethernet Extended Descriptor 6 */
#define ETH_DES6(base)          ETH_DES(6, base)
/** Ethernet Extended Descriptor 7 */
#define ETH_DES7(base)          ETH_DES(7, base)
/*@}*/

/** @defgroup ethernet_descriptor_sizes Ethernet Descriptor Sizes
 * @ingroup ethernet_descriptors
 * @brief Ethernet Descriptor Sizes
@{*/
#define ETH_DES_STD_SIZE        16
#define ETH_DES_EXT_SIZE        32
/*@}*/

/** @defgroup eth_tdes0 ETH_TDES0 Values
 * @ingroup ethernet_descriptors
 * @brief Ethernet TX Descriptor 0 Values
@{*/
/** Deferred Bit */
#define ETH_TDES0_DB            (1 << 0)
/** Underflow Error */
#define ETH_TDES0_UF            (1 << 1)
/** Excessive Deferral */
#define ETH_TDES0_ED            (1 << 2)
/** Collision Count Shift */
#define ETH_TDES0_CC_SHIFT      (3)
/** Collision Count */
#define ETH_TDES0_CC            (0xF << ETH_TDES0_CC_SHIFT)
/** VLAN Frame */
#define ETH_TDES0_VF            (1 << 7)
/** Excessive Collision */
#define ETH_TDES0_EC            (1 << 8)
/** Late Collision */
#define ETH_TDES0_LCO           (1 << 9)
/** No Carrier */
#define ETH_TDES0_NC            (1 << 10)
/** Loss of Carrier */
#define ETH_TDES0_LCA           (1 << 11)
/** IP Payload Error */
#define ETH_TDES0_IPE           (1 << 12)
/** Frame Flushed */
#define ETH_TDES0_FF            (1 << 13)
/** Jabber Timeout */
#define ETH_TDES0_JT            (1 << 14)
/** Error Summary */
#define ETH_TDES0_ES            (1 << 15)
/** IP Header Error */
#define ETH_TDES0_IHE           (1 << 16)
/** TX Timestamp */
#define ETH_TDES0_TTSS          (1 << 17)
/** Second Address Chained */
#define ETH_TDES0_TCH           (1 << 20)
/** Transmit End of Ring */
#define ETH_TDES0_TER           (1 << 21)
/**  */
#define ETH_TDES0_CIC_SHIFT     (22)
/**  */
#define ETH_TDES0_CIC           (0x3 << ETH_TDES0_CIC_SHIFT)
/**  */
#define ETH_TDES0_CIC_DISABLED  (0x0 << ETH_TDES0_CIC_SHIFT)
/**  */
#define ETH_TDES0_CIC_IP        (0x1 << ETH_TDES0_CIC_SHIFT)
/**  */
#define ETH_TDES0_CIC_IPPL      (0x2 << ETH_TDES0_CIC_SHIFT)
/**  */
#define ETH_TDES0_CIC_IPPLPH    (0x3 << ETH_TDES0_CIC_SHIFT)
/** Transmit Timestamp Enable */
#define ETH_TDES0_TTSE          (1 << 25)
/** Disable Padding */
#define ETH_TDES0_DP            (1 << 26)
/** Disable CRC */
#define ETH_TDES0_DC            (1 << 27)
/** First Segment */
#define ETH_TDES0_FS            (1 << 28)
/** Last Segment */
#define ETH_TDES0_LS            (1 << 29)
/** Interrupt on Completion */
#define ETH_TDES0_IC            (1 << 30)
/** Own Bit */
#define ETH_TDES0_OWN           (1 << 31)
/*@}*/

/** @defgroup eth_tdes1 ETH_TDES1 Values
 * @ingroup ethernet_descriptors
 * @brief Ethernet TX Descriptor 1 Values
@{*/
#define ETH_TDES1_TBS1_SHIFT    (0)
#define ETH_TDES1_TBS1          (0x1FFF << ETH_TDES1_TBS1_SHIFT)
#define ETH_TDES1_TBS2_SHIFT    (16)
#define ETH_TDES1_TBS2          (0x1FFF << ETH_TDES1_TBS1_SHIFT)
/*@}*/

/** @defgroup eth_rdes0 ETH_RDES0 Values
 * @ingroup ethernet_descriptors
 * @brief Ethernet RX Descriptor 0 Values
@{*/
#define ETH_RDES0_PCE           (1 << 0)
#define ETH_RDES0_ESA           (1 << 0)
#define ETH_RDES0_CE            (1 << 1)
#define ETH_RDES0_DE            (1 << 2)
#define ETH_RDES0_RE            (1 << 3)
#define ETH_RDES0_RWT           (1 << 4)
#define ETH_RDES0_FT            (1 << 5)
#define ETH_RDES0_LCO           (1 << 6)
#define ETH_RDES0_IPHCE         (1 << 7)
#define ETH_RDES0_TSV           (1 << 7)
#define ETH_RDES0_LS            (1 << 8)
#define ETH_RDES0_FS            (1 << 9)
#define ETH_RDES0_VLAN          (1 << 10)
#define ETH_RDES0_OE            (1 << 11)
#define ETH_RDES0_LE            (1 << 12)
#define ETH_RDES0_SAF           (1 << 13)
#define ETH_RDES0_DCE           (1 << 14)
#define ETH_RDES0_ES            (1 << 15)
#define ETH_RDES0_FL_SHIFT      (16)
#define ETH_RDES0_FL            (0x3FFF << ETH_RDES0_FL_SHIFT)
#define ETH_RDES0_AFM           (1 << 30)
#define ETH_RDES0_OWN           (1 << 31)
/*@}*/

/** @defgroup eth_rdes1 ETH_RDES1 Values
 * @ingroup ethernet_descriptors
 * @brief Ethernet RX Descriptor 1 Values
@{*/
#define ETH_RDES1_RBS1_SHIFT    (0)
#define ETH_RDES1_RBS1          (0x1FFF << ETH_RDES1_RBS1_SHIFT)
#define ETH_RDES1_RCH           (1 << 14)
#define ETH_RDES1_RER           (1 << 15)
#define ETH_RDES1_RBS2_SHIFT    (16)
#define ETH_RDES1_RBS2          (0x1FFF << ETH_RDES1_RBS2_SHIFT)
#define ETH_RDES1_DIC           (1 << 31)
/*@}*/

/** @defgroup eth_rdes4 ETH_RDES4 Values
 * @ingroup ethernet_descriptors
 * @brief Ethernet RX Descriptor 4 Values
@{*/
#define ETH_RDES4_IPPT_SHIFT    (0)
#define ETH_RDES4_IPPT          (0x7 << ETH_RDES4_IPPT_SHIFT)
#define ETH_RDES4_IPPT_UNKNOWN  (0x0 << ETH_RDES4_IPPT_SHIFT)
#define ETH_RDES4_IPPT_UDP      (0x1 << ETH_RDES4_IPPT_SHIFT)
#define ETH_RDES4_IPPT_TCP      (0x2 << ETH_RDES4_IPPT_SHIFT)
#define ETH_RDES4_IPPT_ICMP     (0x3 << ETH_RDES4_IPPT_SHIFT)
#define ETH_RDES4_IPHE          (1 << 3)
#define ETH_RDES4_IPPE          (1 << 4)
#define ETH_RDES4_IPCB          (1 << 5)
#define ETH_RDES4_IPV4PR        (1 << 6)
#define ETH_RDES4_IPV6PR        (1 << 7)
#define ETH_RDES4_PMT_SHIFT         (8)
#define ETH_RDES4_PMT               (0x0F << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_NO            (0x00 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_SYNC          (0x01 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_FOLLOW        (0x02 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_DLYRQ         (0x03 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_DLYRSP        (0x04 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_PDLYRQ        (0x05 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_PDLYRSP       (0x06 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PMT_PDLYRSPFUP    (0x07 << ETH_RDES4_PMT_SHIFT)
#define ETH_RDES4_PFT               (1 << 12)
#define ETH_RDES4_PV                (1 << 13)
/*@}*/

enum eth_clk {
    ETH_CLK_020_035MHZ = EMAC_EMACMIIADDR_CR_SYSCLK_DIV_16,
    ETH_CLK_035_060MHZ = EMAC_EMACMIIADDR_CR_SYSCLK_DIV_26,
    ETH_CLK_060_100MHZ = EMAC_EMACMIIADDR_CR_SYSCLK_DIV_42,
    ETH_CLK_100_150MHZ = EMAC_EMACMIIADDR_CR_SYSCLK_DIV_62,
};

BEGIN_DECLS

void eth_smi_write(uint8_t phy, uint8_t reg, uint16_t data);
uint16_t eth_smi_read(uint8_t phy, uint8_t reg);
void eth_smi_bit_op(uint8_t phy, uint8_t reg, uint16_t bits, uint16_t mask);
void eth_smi_bit_clear(uint8_t phy, uint8_t reg, uint16_t clearbits);
void eth_smi_bit_set(uint8_t phy, uint8_t reg, uint16_t setbits);

void eth_set_mac(const uint8_t *mac);
void eth_desc_init(uint8_t *buf, uint32_t nTx, uint32_t nRx, uint32_t cTx,
                   uint32_t cRx, bool isext);
bool eth_tx(uint8_t *ppkt, uint32_t n);
bool eth_rx(uint8_t *ppkt, uint32_t *len, uint32_t maxlen);

void eth_init(uint8_t phy, enum eth_clk clock);
void eth_start(void);

void eth_enable_checksum_offload(void);

void eth_irq_enable(uint32_t reason);
void eth_irq_disable(uint32_t reason);
bool eth_irq_is_pending(uint32_t reason);
bool eth_irq_ack_pending(uint32_t reason);

END_DECLS

#endif
