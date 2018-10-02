#ifndef PHY_MSP432E4_H
#define PHY_MSP432E4_H

/** Integrated Ethernet PHY Address */
#define PHY_MSP432_ADDRESS          (0x0)

/** Ethernet PHY Basic Mode Control */
#define PHY_MSP432_EPHYBMCR         (0x0)
/** Ethernet PHY Basic Mode Status */
#define PHY_MSP432_EPHYBMSR         (0x1)
/** Ethernet PHY Identifier Register 1 */
#define PHY_MSP432_EPHYID1          (0x2)
/** Ethernet PHY Identifier Register 2 */
#define PHY_MSP432_EPHYID2          (0x3)
/** Ethernet PHY Auto-Negotiation Advertisement */
#define PHY_MSP432_EPHYANA          (0x4)
/** Ethernet PHY Auto-Negotiation Link Partner Ability */
#define PHY_MSP432_EPHYANLPA        (0x5)
/** Ethernet PHY Auto-Negotiation Expansion */
#define PHY_MSP432_EPHYANER         (0x6)
/** Ethernet PHY Auto-Negotiation Next Page TX */
#define PHY_MSP432_EPHYANNPTR       (0x7)
/** Ethernet PHY Auto-Negotiation Link Partner Ability Next Page */
#define PHY_MSP432_EPHYANLNPTR      (0x8)
/** Ethernet PHY Configuration 1 */
#define PHY_MSP432_EPHYCFG1         (0x9)
/** Ethernet PHY Configuration 2 */
#define PHY_MSP432_EPHYCFG2         (0xA)
/** Ethernet PHY Configuration 3 */
#define PHY_MSP432_EPHYCFG3         (0xB)
/** Ethernet PHY Register Control */
#define PHY_MSP432_EPHYREGCTL       (0xD)
/** Ethernet PHY Address or Data */
#define PHY_MSP432_EPHYADDAR        (0xE)
/** Ethernet PHY Status */
#define PHY_MSP432_EPHYSTS          (0x10)
/** Ethernet PHY Specific Control */
#define PHY_MSP432_EPHYSCR          (0x11)
/** Ethernet PHY MII Interrupt Status 1 */
#define PHY_MSP432_EPHYMISR1        (0x12)
/** Ethernet PHY MII Interrupt Status 2 */
#define PHY_MSP432_EPHYMISR2        (0x13)
/** Ethernet PHY False Carrier Sense Counter */
#define PHY_MSP432_EPHYFCSCR        (0x14)
/** Ethernet PHY Receive Error Count */
#define PHY_MSP432_EPHYRXERCNT      (0x15)
/** Ethernet PHY BIST Control */
#define PHY_MSP432_EPHYBISTCR       (0x16)
/** Ethernet PHY LED Control */
#define PHY_MSP432_EPHYLEDCR        (0x18)
/** Ethernet PHY Control */
#define PHY_MSP432_EPHYCTL          (0x19)
/** Ethernet PHY 10Base-T Status/Control */
#define PHY_MSP432_EPHY10BTSC       (0x1A)
/** Ethernet PHY BIST Control and Status 1 */
#define PHY_MSP432_EPHYBICSR1       (0x1B)
/** Ethernet PHY BIST Control and Status 2 */
#define PHY_MSP432_EPHYBICSR2       (0x1C)
/** Ethernet PHY Cable Diagnostic Control */
#define PHY_MSP432_EPHYCDCR         (0x1E)
/** Ethernet PHY Reset Control */
#define PHY_MSP432_EPHYRCR          (0x1F)
/** Ethernet PHY LED Configuration */
#define PHY_MSP432_EPHYLEDCFG       (0x25)

/** @defgroup phy_msp432_ephybmcr_values PHY_MSP432_EPHYBMCR Values
 * @brief Integrated PHY Basic Mode Control Register Values
@{*/
/** MII Register Reset */
#define PHY_MSP432_EPHYBMCR_MIIRESET        (1 << 15)
/** MII Loopback */
#define PHY_MSP432_EPHYBMCR_MIILOOPBK       (1 << 14)
/** Speed Select */
#define PHY_MSP432_EPHYBMCR_SPEED           (1 << 13)
/** Auto-Negotiate Enable */
#define PHY_MSP432_EPHYBMCR_ANEN            (1 << 12)
/** Power Down. */
#define PHY_MSP432_EPHYBMCR_PWRDWN          (1 << 11)
/** Port Isolate */
#define PHY_MSP432_EPHYBMCR_ISOLATE         (1 << 10)
/** Restart Auto-Negotiation */
#define PHY_MSP432_EPHYBMCR_RESTARTAN       (1 << 9)
/** Duplex Mode */
#define PHY_MSP432_EPHYBMCR_DUPLEXM         (1 << 8)
/** Collision Test */
#define PHY_MSP432_EPHYBMCR_COLLTST         (1 << 7)
/**@}*/

/** @defgroup phy_msp432_ephybmsr_values PHY_MSP432_EPHYBMSR Values
 * @brief Integrated PHY Basic Mode Status Register Values
@{*/
/** 100Base-TX Full Duplex Capable */
#define PHY_MSP432_EPHYBMSR_100BTXFD        (1 << 14)
/** 100Base-TX Half Duplex Capable */
#define PHY_MSP432_EPHYBMSR_100BTXHD        (1 << 13)
/** 10 Base-T Full Duplex Capable */
#define PHY_MSP432_EPHYBMSR_10BTFD          (1 << 12)
/** 10 Base-T Half Duplex Capable */
#define PHY_MSP432_EPHYBMSR_10BTHD          (1 << 11)
/** Preamble Suppression Capable */
#define PHY_MSP432_EPHYBMSR_MFPRESUP        (1 << 6)
/**Auto-Negotiation Complete  */
#define PHY_MSP432_EPHYBMSR_ANC             (1 << 5)
/** Remote Fault */
#define PHY_MSP432_EPHYBMSR_RFAULT          (1 << 4)
/** Auto Negotiation Enabled */
#define PHY_MSP432_EPHYBMSR_ANEN            (1 << 3)
/** Link Status */
#define PHY_MSP432_EPHYBMSR_LINKSTAT        (1 << 2)
/** Jabber Detect */
#define PHY_MSP432_EPHYBMSR_JABBER          (1 << 1)
/** Extended Capability Enable */
#define PHY_MSP432_EPHYBMSR_EXTEN           (1 << 0)
/**@}*/

/** @defgroup phy_msp432_ephyid1_values PHY_MSP432_EPHYID1 Values
 * @brief Integrated PHY Identifier Register 1 Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYID1_OUIMSB           (0xFFFF)
/**@}*/

/** @defgroup phy_msp432_ephyid2_values PHY_MSP432_EPHYID2 Values
 * @brief Integrated PHY Identifier Register 2 Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYID2_OUILSB_SHIFT     (10)
/**  */
#define PHY_MSP432_EPHYID2_OUILSB     (0x3F << PHY_MSP432_EPHYID2_OUILSB_SHIFT)
/**  */
#define PHY_MSP432_EPHYID2_VNDRMDL_SHIFT    (10)
/**  */
#define PHY_MSP432_EPHYID2_VNDRMDL    (0x3F << PHY_MSP432_EPHYID2_VNDRMDL_SHIFT)
/**  */
#define PHY_MSP432_EPHYID2_MDLREV           (0xF)
/**@}*/

/** @defgroup phy_msp432_ephyana_values PHY_MSP432_EPHYANA Values
 * @brief Integrated PHY Auto-Negotiation Advertisement Register Values
@{*/
/** Next Page Indication */
#define PHY_MSP432_EPHYANA_NP               (1 << 15)
/** Remote Fault */
#define PHY_MSP432_EPHYANA_RF               (1 << 13)
/** Asymmetric PAUSE support for Full Duplex Links */
#define PHY_MSP432_EPHYANA_ASMDUP           (1 << 11)
/** PAUSE Support for Full Duplex Links */
#define PHY_MSP432_EPHYANA_PAUSE            (1 << 10)
/** 100Base-T4 Support */
#define PHY_MSP432_EPHYANA_100BT4           (1 << 9)
/** 100Base-TX Full Duplex Support */
#define PHY_MSP432_EPHYANA_100BTXFD         (1 << 8)
/** 100Base-TX Support */
#define PHY_MSP432_EPHYANA_100BTX           (1 << 7)
/** 10Base-T Full Duplex Support */
#define PHY_MSP432_EPHYANA_10BTFD           (1 << 6)
/** 10Base-T Support */
#define PHY_MSP432_EPHYANA_10BT             (1 << 5)
/** Protocol Selection Mask */
#define PHY_MSP432_EPHYANA_SELECT_MASK      (0x1F)
/** Protocol Selection */
#define PHY_MSP432_EPHYANA_SELECT(x)        (x & PHY_MSP432_EPHYANA_SELECT_MASK)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyanlpa_values PHY_MSP432_EPHYANLPA Values
 * @brief Integrated PHY Auto-Negotiation Link Partner Ability Register Values
@{*/
/** Next Page Indication */
#define PHY_MSP432_EPHYANLPA_NP             (1 << 15)
/** Acknowledge */
#define PHY_MSP432_EPHYANLPA_ACK            (1 << 14)
/** Remote Fault */
#define PHY_MSP432_EPHYANLPA_RF             (1 << 13)
/** Asymmetric PAUSE */
#define PHY_MSP432_EPHYANLPA_ASMDUP         (1 << 11)
/** PAUSE */
#define PHY_MSP432_EPHYANLPA_PAUSE          (1 << 10)
/** 100Base-T4 Support */
#define PHY_MSP432_EPHYANLPA_100BT4         (1 << 9)
/** 100Base-TX Full Duplex Support */
#define PHY_MSP432_EPHYANLPA_100BTXFD       (1 << 8)
/** 100Base-TX Support */
#define PHY_MSP432_EPHYANLPA_100BTX         (1 << 7)
/** 10Base-T Full Duplex Support */
#define PHY_MSP432_EPHYANLPA_10BTFD         (1 << 6)
/** 10Base-T Support */
#define PHY_MSP432_EPHYANLPA_10BT           (1 << 5)
/** Protocol Selection */
#define PHY_MSP432_EPHYANLPA_SELECT         (0x1F)
/**@}*/

/** @defgroup phy_msp432_ephyaner_values PHY_MSP432_EPHYANER Values
 * @brief Integrated PHY Auto-Negotiation Expansion Register Values
@{*/
/** Parallel Detection Fault */
#define PHY_MSP432_EPHYANER_PDF             (1 << 4)
/** Link Partner Next Page Able */
#define PHY_MSP432_EPHYANER_LPNPABLE        (1 << 3)
/** Next Page Able */
#define PHY_MSP432_EPHYANER_NPABLE          (1 << 2)
/** Link Code Word Page Received */
#define PHY_MSP432_EPHYANER_PAGERX          (1 << 1)
/** Link Partner Auto-Negotiation Able */
#define PHY_MSP432_EPHYANER_LPANABLE        (1 << 0)
/**@}*/

/** @defgroup phy_msp432_ephyannptr_values PHY_MSP432_EPHYANNPTR Values
 * @brief Integrated PHY Auto-Negotiation Next Page TX Register Values
@{*/
/** Next Page Indication */
#define PHY_MSP432_EPHYANNPTR_NP            (1 << 15)
/** Message Page */
#define PHY_MSP432_EPHYANNPTR_MP            (1 << 13)
/** Acknowledge 2 */
#define PHY_MSP432_EPHYANNPTR_ACK2          (1 << 12)
/** Toggle */
#define PHY_MSP432_EPHYANNPTR_TOGTX         (1 << 11)
/** Code Mask */
#define PHY_MSP432_EPHYANNPTR_CODE_MASK     (0x7FF)
/** Code */
#define PHY_MSP432_EPHYANNPTR_CODE(x)      (x & PHY_MSP432_EPHYANNPTR_CODE_MASK)
/**@}*/

/** @defgroup phy_msp432_ephyanlnptr_values PHY_MSP432_EPHYANLNPTR Values
 * @brief Integrated PHY Auto-Negotiation Link Partner Ability Next Page
 *        Register Values
@{*/
/** Next Page Indication */
#define PHY_MSP432_EPHYANLNPTR_NP           (1 << 15)
/** Acknowledge */
#define PHY_MSP432_EPHYANLNPTR_ACK          (1 << 14)
/** Message Page */
#define PHY_MSP432_EPHYANLNPTR_MP           (1 << 13)
/** Acknowledge 2 */
#define PHY_MSP432_EPHYANLNPTR_ACK2         (1 << 12)
/** Toggle */
#define PHY_MSP432_EPHYANLNPTR_TOG          (1 << 11)
/** Code */
#define PHY_MSP432_EPHYANLNPTR_CODE         (0x7FF)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephycfg1_values PHY_MSP432_EPHYCFG1 Values
 * @brief Integrated PHY Configuration 1 Register Values
@{*/
/** Configuration Done */
#define PHY_MSP432_EPHYCFG1_DONE            (1 << 15)
/** TDR Auto-Run at Link Down */
#define PHY_MSP432_EPHYCFG1_TDRAR           (1 << 8)
/** Link Loss Recovery */
#define PHY_MSP432_EPHYCFG1_LLR             (1 << 7)
/** Fast Auto MDI/MDIX */
#define PHY_MSP432_EPHYCFG1_FAMDIX          (1 << 6)
/** Robust Auto MDI/MDIX */
#define PHY_MSP432_EPHYCFG1_RAMDIX          (1 << 5)
/** Fast Auto Negotiation Enable */
#define PHY_MSP432_EPHYCFG1_FASTANEN        (1 << 4)
/** Fast Auto-Negotiation Select Configuration Shift */
#define PHY_MSP432_EPHYCFG1_FANSEL_SHIFT    (2)
/** Fast Auto-Negotiation Select Configuration */
#define PHY_MSP432_EPHYCFG1_FANSEL     (0x3 << PHY_MSP432_EPHYCFG1_FANSEL_SHIFT)
/** Fast Auto-Negotiation Select Configuration - Break Link Timer: 80 ms */
#define PHY_MSP432_EPHYCFG1_FANSEL_80MS   (0x0)
/** Fast Auto-Negotiation Select Configuration - Break Link Timer: 120 ms */
#define PHY_MSP432_EPHYCFG1_FANSEL_120MS  (0x1 << PHY_MSP432_EPHYCFG1_FANSEL_SHIFT)
/** Fast Auto-Negotiation Select Configuration - Break Link Timer: 240 ms */
#define PHY_MSP432_EPHYCFG1_FANSEL_240MS  (0x2 << PHY_MSP432_EPHYCFG1_FANSEL_SHIFT)
/** FAST RXDV Detection */
#define PHY_MSP432_EPHYCFG1_FRXDVDET      (1 << 1)
/**@}*/

/** @defgroup phy_msp432_ephycfg2_values PHY_MSP432_EPHYCFG2 Values
 * @brief Integrated PHY Configuration 2 Register Values
@{*/
/** Fast Link-Up in Parallel Detect Mode */
#define PHY_MSP432_EPHYCFG2_FLUPPD          (1 << 6)
/** Extended Full-Duplex Ability */
#define PHY_MSP432_EPHYCFG2_EXTFD           (1 << 5)
/** Enhanced LED Functionality */
#define PHY_MSP432_EPHYCFG2_ENLEDLINK       (1 << 4)
/** Isolate MII outputs when Enhanced Link is not Achievable */
#define PHY_MSP432_EPHYCFG2_ISOMIILL        (1 << 3)
/** Detection of Receive Symbol Error During IDLE State */
#define PHY_MSP432_EPHYCFG2_RXERRIDLE       (1 << 2)
/** Detection of Transmit Error */
#define PHY_MSP432_EPHYCFG2_ODDNDETDIS      (1 << 1)
/**@}*/

/** @defgroup phy_msp432_ephycfg3_values PHY_MSP432_EPHYCFG3 Values
 * @brief Integrated PHY Configuration 3 Register Values
@{*/
/** Polarity Swap */
#define PHY_MSP432_EPHYCFG3_POLSWAP                        (1 << 7)
/** MDI/MDIX Swap */
#define PHY_MSP432_EPHYCFG3_MDIMDIXS                       (1 << 6)
/**  */
#define PHY_MSP432_EPHYCFG3_FLDWNM_DROP_SYNC               (1 << 4)
/**  */
#define PHY_MSP432_EPHYCFG3_FLDWNM_DROP_RX_ERROR           (1 << 3)
/**  */
#define PHY_MSP432_EPHYCFG3_FLDWNM_DROP_MLT3_ERROR         (1 << 2)
/**  */
#define PHY_MSP432_EPHYCFG3_FLDWNM_DROP_LOW_SNR            (1 << 1)
/**  */
#define PHY_MSP432_EPHYCFG3_FLDWNM_DROP_SIGNAL_ENERGY_LOSS (1 << 0)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyregctl_values PHY_MSP432_EPHYREGCTL Values
 * @brief Integrated PHY Register Control Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC_SHIFT    (14)
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC     (0x3 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC_ADDRESS      (0x0)
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_NO_INC  (0x1 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_INC_RW  (0x2 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
/**  */
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_INC_WO  (0x3 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyaddar_values PHY_MSP432_EPHYADDAR Values
 * @brief Integrated PHY Address or Data Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYADDAR_ADDRDATA       (0xFFFF)
/**@}*/


/** @defgroup phy_msp432_ephysts_values PHY_MSP432_EPHYSTS Values
 * @brief Integrated PHY Status Register Values
@{*/
/** MDI-X Mode */
#define PHY_MSP432_EPHYSTS_MDIXM            (1 << 14)
/** Receive Error Latch */
#define PHY_MSP432_EPHYSTS_RXLERR           (1 << 13)
/** Polarity Status */
#define PHY_MSP432_EPHYSTS_POLSTAT          (1 << 12)
/** False Carrier Sense Latch */
#define PHY_MSP432_EPHYSTS_FCSL             (1 << 11)
/** Signal Detect */
#define PHY_MSP432_EPHYSTS_SD               (1 << 10)
/** Descrambler Lock */
#define PHY_MSP432_EPHYSTS_DL               (1 << 9)
/** Link Code Page Received */
#define PHY_MSP432_EPHYSTS_PAGERX           (1 << 8)
/** MII Interrupt Pending */
#define PHY_MSP432_EPHYSTS_MIIREQ           (1 << 7)
/** Remote Fault */
#define PHY_MSP432_EPHYSTS_RF               (1 << 6)
/** Jabber Detect */
#define PHY_MSP432_EPHYSTS_JD               (1 << 5)
/** Auto-Negotiation Status */
#define PHY_MSP432_EPHYSTS_ANS              (1 << 4)
/** MII Loopback Status */
#define PHY_MSP432_EPHYSTS_MIILB            (1 << 3)
/** Duplex Status */
#define PHY_MSP432_EPHYSTS_DUPLEX           (1 << 2)
/** Speed Status */
#define PHY_MSP432_EPHYSTS_SPEED            (1 << 1)
/** Link Status */
#define PHY_MSP432_EPHYSTS_LINK             (1 << 0)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyscr_values PHY_MSP432_EPHYSCR Values
 * @brief Integrated PHY Specific Control Register Values
@{*/
/** Disable CLK */
#define PHY_MSP432_EPHYSCR_DISCLK           (1 << 15)
/** Power Saving Modes Enable */
#define PHY_MSP432_EPHYSCR_PSEN             (1 << 14)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE_SHIFT     (12)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE       (0x3 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE_NORMAL    (0x0)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE_DL        (0x1 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE_ACTIVE_SL (0x2 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_PSMODE_PASSIVE_SL (0x3 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
/** Scrambler Bypass */
#define PHY_MSP432_EPHYSCR_SBPYASS          (1 << 11)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO_SHIFT     (8)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO       (0x3 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO_4     (0x0)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO_5     (0x1 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO_6     (0x2 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
/**  */
#define PHY_MSP432_EPHYSCR_LBFIFO_8     (0x3 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
/** Collision in Full-Duplex Mode */
#define PHY_MSP432_EPHYSCR_COLFDM       (1 << 4)
/** Test Interrupt */
#define PHY_MSP432_EPHYSCR_TINT         (1 << 2)
/** Interrupt Enable */
#define PHY_MSP432_EPHYSCR_INTEN        (1 << 1)
/**@}*/

/** @defgroup phy_msp432_ephymisr1_values PHY_MSP432_EPHYMISR1 Values
 * @brief Integrated PHY MII Interrupt Status 1 Register Values
@{*/
/** Change of Link Status Interrupt */
#define PHY_MSP432_EPHYMISR1_LINKSTAT   (1 << 13)
/** Change of Speed Status Interrupt */
#define PHY_MSP432_EPHYMISR1_SPEED      (1 << 12)
/** Change of Duplex Status Interrupt */
#define PHY_MSP432_EPHYMISR1_DUPLEXM    (1 << 11)
/** Auto-Negotiation Complete Interrupt */
#define PHY_MSP432_EPHYMISR1_ANC        (1 << 10)
/** False Carrier Counter Half-Full Interrupt */
#define PHY_MSP432_EPHYMISR1_FCHF       (1 << 9)
/** Receive Error Counter Half-Full Interrupt */
#define PHY_MSP432_EPHYMISR1_RXHF       (1 << 8)
/** Link Status Interrupt Enable */
#define PHY_MSP432_EPHYMISR1_LINKSTATEN (1 << 5)
/** Speed Change Interrupt Enable */
#define PHY_MSP432_EPHYMISR1_SPEEDEN    (1 << 4)
/** Duplex Status Interrupt Enable */
#define PHY_MSP432_EPHYMISR1_DUPLEXMEN  (1 << 3)
/** Auto-Negotiation Complete Interrupt Enable */
#define PHY_MSP432_EPHYMISR1_ANCEN      (1 << 2)
/** False Carrier Counter Register half-full Interrupt Enable */
#define PHY_MSP432_EPHYMISR1_FCHFEN     (1 << 1)
/** Receive Error Counter Register Half-Full Event Interrupt */
#define PHY_MSP432_EPHYMISR1_RXHFEN     (1 << 0)
/**@}*/

/** @defgroup phy_msp432_ephymisr2_values PHY_MSP432_EPHYMISR2 Values
 * @brief Integrated PHY MII Interrupt Status 2 Register Values
@{*/
/** Auto-Negotiation Error Interrupt */
#define PHY_MSP432_EPHYMISR2_ANERR      (1 << 14)
/** Page Receive Interrupt */
#define PHY_MSP432_EPHYMISR2_PAGERX     (1 << 13)
/** Loopback FIFO Overflow/Underflow Event Interrupt */
#define PHY_MSP432_EPHYMISR2_LBFIFO     (1 << 12)
/** MDI/MDIX Crossover Status Changed Interrupt */
#define PHY_MSP432_EPHYMISR2_MDICO      (1 << 11)
/** Sleep Mode Event Interrupt */
#define PHY_MSP432_EPHYMISR2_SLEEP      (1 << 10)
/** Polarity Changed Interrupt */
#define PHY_MSP432_EPHYMISR2_POLINT     (1 << 9)
/** Jabber Detect Event Interrupt */
#define PHY_MSP432_EPHYMISR2_JABBER     (1 << 8)
/** Auto-Negotiation Error Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_ANERREN    (1 << 6)
/** Page Receive Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_PAGERXEN   (1 << 5)
/** Loopback FIFO Overflow/Underflow Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_LBFIFOEN   (1 << 4)
/** MDI/MDIX Crossover Status Changed Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_MDICOEN    (1 << 3)
/** Sleep Mode Event Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_SLEEPEN    (1 << 2)
/** Polarity Changed Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_POLINTEN   (1 << 1)
/** Jabber Detect Event Interrupt Enable */
#define PHY_MSP432_EPHYMISR2_JABBEREN   (1 << 0)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyfcscr_values PHY_MSP432_PHYFCSCR Values
 * @brief Integrated PHY False Carrier Sense Counter Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYFCSCR_FCSCNT         (0xFF)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyrxercnt_values PHY_MSP432_EPHYRXERCNT Values
 * @brief Integrated PHY Receive Error Count Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYRXERCNT_RXERRCNT     (0xFFFF)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephybistcr_values PHY_MSP432_EPHYBISTCR Values
 * @brief Integrated PHY BIST Control Register Values
@{*/
/** PRBS Single/Continuous Mode */
#define PHY_MSP432_EPHYBISTCR_PRBSM             (1 << 14)
/** Generated PRBS Packets */
#define PHY_MSP432_EPHYBISTCR_PRBSPKT           (1 << 13)
/** Packet Generation Enable */
#define PHY_MSP432_EPHYBISTCR_PKTEN             (1 << 12)
/** PRBS Checker Lock Indication */
#define PHY_MSP432_EPHYBISTCR_PRBSCHKLK         (1 << 11)
/** PRBS Checker Lock Sync Loss Indication */
#define PHY_MSP432_EPHYBISTCR_PRBSCHKSYNC       (1 << 10)
/** Packet Generator Status Indication */
#define PHY_MSP432_EPHYBISTCR_PKTGENSTAT        (1 << 9)
/** Power Mode Indication */
#define PHY_MSP432_EPHYBISTCR_PWRMODE           (1 << 8)
/** Transmit Data in MII Loopback Mode */
#define PHY_MSP432_EPHYBISTCR_TXMIILB           (1 << 6)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE            (0x1F)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_PCS_IN  (0x1)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_PCS_OUT (0x2)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_DL      (0x4)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_AL      (0x8)
/**  */
#define PHY_MSP432_EPHYBISTCR_LBMODE_FE_RL      (0x10)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyledcr_values PHY_MSP432_EPHYLEDCR Values
 * @brief Integrated PHY LED Control Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT    (9)
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE      (0x3 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_20HZ (0x0)
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_10HZ (0x1 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_5HZ  (0x2 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
/**  */
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_2HZ  (0x3 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
/**@}*/

/** @defgroup phy_msp432_ephyctl_values PHY_MSP432_EPHYCTL Values
 * @brief Integrated PHY Control Register Values
@{*/
/** Auto-MDIX Enable */
#define PHY_MSP432_EPHYCTL_AUTOMDI      (1 << 15)
/** Force MDIX */
#define PHY_MSP432_EPHYCTL_FORCEMDI     (1 << 14)
/** Pause Receive Negotiated Status */
#define PHY_MSP432_EPHYCTL_PAUSERX      (1 << 13)
/** Pause Transmit Negotiated Status */
#define PHY_MSP432_EPHYCTL_PAUSETX      (1 << 12)
/** MII Link Status */
#define PHY_MSP432_EPHYCTL_MIILNKSTAT   (1 << 11)
/** Bypass LED Stretching */
#define PHY_MSP432_EPHYCTL_BYPLEDSTRCH  (1 << 7)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephy10btsc_values PHY_MSP432_EPHY10BTSC Values
 * @brief Integrated PHY 10Base-T Status/Control Register Values
@{*/
/** Lower Receiver Threshold Enable */
#define PHY_MSP432_EPHY10BTSC_RXTHEN    (1 << 13)
/**  */
#define PHY_MSP432_EPHY10BTSC_SQUELCH_SHIFT (9)
/**  */
#define PHY_MSP432_EPHY10BTSC_SQUELCH_MASK  (0xF)
/**  */
#define PHY_MSP432_EPHY10BTSC_SQUELCH(x) (((x) & PHY_MSP432_EPHY10BTSC_SQUELCH_MASK) << PHY_MSP432_EPHY10BTSC_SQUELCH_SHIFT)
/** Normal Link Pulse (NLP) Transmission Control */
#define PHY_MSP432_EPHY10BTSC_NLPDIS    (1 << 7)
/** 10 Mb Polarity Status */
#define PHY_MSP432_EPHY10BTSC_POLSTAT   (1 << 4)
/** Jabber Disable */
#define PHY_MSP432_EPHY10BTSC_JABBERD   (1 << 0)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephybicsr1_values PHY_MSP432_EPHYBICSR1 Values
 * @brief Integrated PHY BIST Control and Status 1 Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYBICSR1_
/**  */
#define PHY_MSP432_EPHYBICSR1_
/**  */
#define PHY_MSP432_EPHYBICSR1_IPGLENGTH
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephybicsr2_values PHY_MSP432_EPHYBICSR2 Values
 * @brief Integrated PHY BIST Control and Status 2 Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYBICSR2_PKTLENGTH (0x7FF)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephycdcr_values PHY_MSP432_EPHYCDCR Values
 * @brief Integrated PHY Cable Diagnostic Control Register Values
@{*/
/** Cable Diagnostic Process Start */
#define PHY_MSP432_EPHYCDCR_START       (1 << 15)
/**  */
#define PHY_MSP432_EPHYCDCR_LINKQUAL
/**  */
#define PHY_MSP432_EPHYCDCR_
/** Cable Diagnostic Process Done */
#define PHY_MSP432_EPHYCDCR_DONE        (1 << 1)
/** Cable Diagnostic Process Fail */
#define PHY_MSP432_EPHYCDCR_FAIL        (1 << 0)
/**@}*/

/** @defgroup phy_msp432_ephyrcr_values PHY_MSP432_EPHYRCR Values
 * @brief Integrated PHY Reset Control Register Values
@{*/
/** Software Reset */
#define PHY_MSP432_EPHYRCR_SWRST        (1 << 15)
/** Software Restart */
#define PHY_MSP432_EPHYRCR_SWRESTART    (1 << 14)
/**@}*/

/* TODO */
/** @defgroup phy_msp432_ephyledcfg_values PHY_MSP432_EPHYLEDCFG Values
 * @brief Integrated PHY LED Configuration Register Values
@{*/
/**  */
#define PHY_MSP432_EPHYLEDCFG_LED2
/**  */
#define PHY_MSP432_EPHYLEDCFG_LED1
/**  */
#define PHY_MSP432_EPHYLEDCFG_LED0
/**@}*/

#endif /* PHY_MSP432E4_H */
