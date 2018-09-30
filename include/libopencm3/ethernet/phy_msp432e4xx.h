#ifndef PHY_MSP432E4_H
#define PHY_MSP432E4_H

/**  */
#define PHY_MSP432_ADDRESS          (PHY0)

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

#define PHY_MSP432_EPHYBMCR_MIIRESET        (1 << 15)
#define PHY_MSP432_EPHYBMCR_MIILOOPBK       (1 << 14)
#define PHY_MSP432_EPHYBMCR_SPEED           (1 << 13)
#define PHY_MSP432_EPHYBMCR_ANEN            (1 << 12)
#define PHY_MSP432_EPHYBMCR_PWRDWN          (1 << 11)
#define PHY_MSP432_EPHYBMCR_ISOLATE         (1 << 10)
#define PHY_MSP432_EPHYBMCR_RESTARTAN       (1 << 9)
#define PHY_MSP432_EPHYBMCR_DUPLEXM         (1 << 8)
#define PHY_MSP432_EPHYBMCR_COLLTST         (1 << 7)

#define PHY_MSP432_EPHYBMSR_100BTXFD        (1 << 14)
#define PHY_MSP432_EPHYBMSR_100BTXHD        (1 << 13)
#define PHY_MSP432_EPHYBMSR_10BTFD          (1 << 12)
#define PHY_MSP432_EPHYBMSR_10BTHD          (1 << 11)
#define PHY_MSP432_EPHYBMSR_MFPRESUP        (1 << 6)
#define PHY_MSP432_EPHYBMSR_ANC             (1 << 5)
#define PHY_MSP432_EPHYBMSR_RFAULT          (1 << 4)
#define PHY_MSP432_EPHYBMSR_ANEN            (1 << 3)
#define PHY_MSP432_EPHYBMSR_LINKSTAT        (1 << 2)
#define PHY_MSP432_EPHYBMSR_JABBER          (1 << 1)
#define PHY_MSP432_EPHYBMSR_EXTEN           (1 << 0)

#define PHY_MSP432_EPHYID1_OUIMSB           (0xFFFF)

#define PHY_MSP432_EPHYID2_OUILSB_SHIFT     (10)
#define PHY_MSP432_EPHYID2_OUILSB     (0x3F << PHY_MSP432_EPHYID2_OUILSB_SHIFT)
#define PHY_MSP432_EPHYID2_VNDRMDL_SHIFT    (10)
#define PHY_MSP432_EPHYID2_VNDRMDL    (0x3F << PHY_MSP432_EPHYID2_VNDRMDL_SHIFT)
#define PHY_MSP432_EPHYID2_MDLREV           (0xF)

#define PHY_MSP432_EPHYANA_NP               (1 << 15)
#define PHY_MSP432_EPHYANA_RF               (1 << 13)
#define PHY_MSP432_EPHYANA_ASMDUP           (1 << 11)
#define PHY_MSP432_EPHYANA_PAUSE            (1 << 10)
#define PHY_MSP432_EPHYANA_100BT4           (1 << 9)
#define PHY_MSP432_EPHYANA_100BTXFD         (1 << 8)
#define PHY_MSP432_EPHYANA_100BTX           (1 << 7)
#define PHY_MSP432_EPHYANA_10BTFD           (1 << 6)
#define PHY_MSP432_EPHYANA_10BT             (1 << 5)
#define PHY_MSP432_EPHYANA_SELECT           (0x1F)

#define PHY_MSP432_EPHYANLPA_NP             (1 << 15)
#define PHY_MSP432_EPHYANLPA_ACK            (1 << 14)
#define PHY_MSP432_EPHYANLPA_RF             (1 << 13)
#define PHY_MSP432_EPHYANLPA_ASMDUP         (1 << 11)
#define PHY_MSP432_EPHYANLPA_PAUSE          (1 << 10)
#define PHY_MSP432_EPHYANLPA_100BT4         (1 << 9)
#define PHY_MSP432_EPHYANLPA_100BTXFD       (1 << 8)
#define PHY_MSP432_EPHYANLPA_100BTX         (1 << 7)
#define PHY_MSP432_EPHYANLPA_10BTFD         (1 << 6)
#define PHY_MSP432_EPHYANLPA_10BT           (1 << 5)
#define PHY_MSP432_EPHYANLPA_SELECT         (0x1F)

#define PHY_MSP432_EPHYANER_PDF             (1 << 4)
#define PHY_MSP432_EPHYANER_LPNPABLE        (1 << 3)
#define PHY_MSP432_EPHYANER_NPABLE          (1 << 2)
#define PHY_MSP432_EPHYANER_PAGERX          (1 << 1)
#define PHY_MSP432_EPHYANER_LPANABLE        (1 << 0)

#define PHY_MSP432_EPHYANNPTR_NP            (1 << 15)
#define PHY_MSP432_EPHYANNPTR_MP            (1 << 13)
#define PHY_MSP432_EPHYANNPTR_ACK2          (1 << 12)
#define PHY_MSP432_EPHYANNPTR_TOGTX         (1 << 11)
#define PHY_MSP432_EPHYANNPTR_CODE          (0x7FF)

#define PHY_MSP432_EPHYANLNPTR_NP           (1 << 15)
#define PHY_MSP432_EPHYANLNPTR_ACK          (1 << 14)
#define PHY_MSP432_EPHYANLNPTR_MP           (1 << 13)
#define PHY_MSP432_EPHYANLNPTR_ACK2         (1 << 12)
#define PHY_MSP432_EPHYANLNPTR_TOG          (1 << 11)
#define PHY_MSP432_EPHYANLNPTR_CODE         (0x7FF)

#define PHY_MSP432_EPHYCFG1_DONE            (1 << 15)
#define PHY_MSP432_EPHYCFG1_TDRAR           (1 << 8)
#define PHY_MSP432_EPHYCFG1_LLR             (1 << 7)
#define PHY_MSP432_EPHYCFG1_FAMDIX          (1 << 6)
#define PHY_MSP432_EPHYCFG1_RAMDIX          (1 << 5)
#define PHY_MSP432_EPHYCFG1_FASTANEN        (1 << 4)
#define PHY_MSP432_EPHYCFG1_FANSEL_SHIFT    (2)
#define PHY_MSP432_EPHYCFG1_FANSEL     (0x3 << PHY_MSP432_EPHYCFG1_FANSEL_SHIFT)
#define PHY_MSP432_EPHYCFG1_FRXDVDET        (1 << 1)

#define PHY_MSP432_EPHYCFG2_FLUPPD          (1 << 6)
#define PHY_MSP432_EPHYCFG2_EXTFD           (1 << 5)
#define PHY_MSP432_EPHYCFG2_ENLEDLINK       (1 << 4)
#define PHY_MSP432_EPHYCFG2_ISOMIILL        (1 << 3)
#define PHY_MSP432_EPHYCFG2_RXERRIDLE       (1 << 2)
#define PHY_MSP432_EPHYCFG2_ODDNDETDIS      (1 << 1)

#define PHY_MSP432_EPHYCFG3_POLSWAP         (1 << 7)
#define PHY_MSP432_EPHYCFG3_MDIMDIXS        (1 << 6)
#define PHY_MSP432_EPHYCFG3_FLDWNM          (0x1F)

#define PHY_MSP432_EPHYREGCTL_FUNC_SHIFT    (14)
#define PHY_MSP432_EPHYREGCTL_FUNC     (0x3 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
#define PHY_MSP432_EPHYREGCTL_FUNC_ADDRESS      (0x0)
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_NO_INC  (0x1 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_INC_RW  (0x2 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)
#define PHY_MSP432_EPHYREGCTL_FUNC_DATA_INC_WO  (0x3 << PHY_MSP432_EPHYREGCTL_FUNC_SHIFT)

#define PHY_MSP432_EPHYADDAR_ADDRDATA       (0xFFFF)

#define PHY_MSP432_EPHYSTS_MDIXM            (1 << 14)
#define PHY_MSP432_EPHYSTS_RXLERR           (1 << 13)
#define PHY_MSP432_EPHYSTS_POLSTAT          (1 << 12)
#define PHY_MSP432_EPHYSTS_FCSL             (1 << 11)
#define PHY_MSP432_EPHYSTS_SD               (1 << 10)
#define PHY_MSP432_EPHYSTS_DL               (1 << 9)
#define PHY_MSP432_EPHYSTS_PAGERX           (1 << 8)
#define PHY_MSP432_EPHYSTS_MIIREQ           (1 << 7)
#define PHY_MSP432_EPHYSTS_RF               (1 << 6)
#define PHY_MSP432_EPHYSTS_JD               (1 << 5)
#define PHY_MSP432_EPHYSTS_ANS              (1 << 4)
#define PHY_MSP432_EPHYSTS_MIILB            (1 << 3)
#define PHY_MSP432_EPHYSTS_DUPLEX           (1 << 2)
#define PHY_MSP432_EPHYSTS_SPEED            (1 << 1)
#define PHY_MSP432_EPHYSTS_LINK             (1 << 0)

#define PHY_MSP432_EPHYSCR_DISCLK           (1 << 15)
#define PHY_MSP432_EPHYSCR_PSEN             (1 << 14)
#define PHY_MSP432_EPHYSCR_PSMODE_SHIFT     (12)
#define PHY_MSP432_EPHYSCR_PSMODE       (0x3 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
#define PHY_MSP432_EPHYSCR_PSMODE_NORMAL    (0x0)
#define PHY_MSP432_EPHYSCR_PSMODE_DL        (0x1 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
#define PHY_MSP432_EPHYSCR_PSMODE_ACTIVE_SL (0x2 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
#define PHY_MSP432_EPHYSCR_PSMODE_PASSIVE_SL (0x3 << PHY_MSP432_EPHYSCR_PSMODE_SHIFT)
#define PHY_MSP432_EPHYSCR_SBPYASS          (1 << 11)
#define PHY_MSP432_EPHYSCR_LBFIFO_SHIFT     (8)
#define PHY_MSP432_EPHYSCR_LBFIFO       (0x3 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
#define PHY_MSP432_EPHYSCR_LBFIFO_4     (0x0)
#define PHY_MSP432_EPHYSCR_LBFIFO_5     (0x1 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
#define PHY_MSP432_EPHYSCR_LBFIFO_6     (0x2 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
#define PHY_MSP432_EPHYSCR_LBFIFO_8     (0x3 << PHY_MSP432_EPHYSCR_LBFIFO_SHIFT)
#define PHY_MSP432_EPHYSCR_COLFDM       (1 << 4)
#define PHY_MSP432_EPHYSCR_TINT         (1 << 2)
#define PHY_MSP432_EPHYSCR_INTEN        (1 << 1)

#define PHY_MSP432_EPHYMISR1_LINKSTAT   (1 << 13)
#define PHY_MSP432_EPHYMISR1_SPEED      (1 << 12)
#define PHY_MSP432_EPHYMISR1_DUPLEXM    (1 << 11)
#define PHY_MSP432_EPHYMISR1_ANC        (1 << 10)
#define PHY_MSP432_EPHYMISR1_FCHF       (1 << 9)
#define PHY_MSP432_EPHYMISR1_RXHF       (1 << 8)
#define PHY_MSP432_EPHYMISR1_LINKSTATEN (1 << 5)
#define PHY_MSP432_EPHYMISR1_SPEEDEN    (1 << 4)
#define PHY_MSP432_EPHYMISR1_DUPLEXMEN  (1 << 3)
#define PHY_MSP432_EPHYMISR1_ANCEN      (1 << 2)
#define PHY_MSP432_EPHYMISR1_FCHFEN     (1 << 1)
#define PHY_MSP432_EPHYMISR1_RXHFEN     (1 << 0)

#define PHY_MSP432_EPHYMISR2_ANERR      (1 << 14)
#define PHY_MSP432_EPHYMISR2_PAGERX     (1 << 13)
#define PHY_MSP432_EPHYMISR2_LBFIFO     (1 << 12)
#define PHY_MSP432_EPHYMISR2_MDICO      (1 << 11)
#define PHY_MSP432_EPHYMISR2_SLEEP      (1 << 10)
#define PHY_MSP432_EPHYMISR2_POLINT     (1 << 9)
#define PHY_MSP432_EPHYMISR2_JABBER     (1 << 8)
#define PHY_MSP432_EPHYMISR2_ANERREN    (1 << 6)
#define PHY_MSP432_EPHYMISR2_PAGERXEN   (1 << 5)
#define PHY_MSP432_EPHYMISR2_LBFIFOEN   (1 << 4)
#define PHY_MSP432_EPHYMISR2_MDICOEN    (1 << 3)
#define PHY_MSP432_EPHYMISR2_SLEEPEN    (1 << 2)
#define PHY_MSP432_EPHYMISR2_POLINTEN   (1 << 1)
#define PHY_MSP432_EPHYMISR2_JABBEREN   (1 << 0)

#define PHY_MSP432_EPHYFCSCR_FCSCNT         (0xFF)

#define PHY_MSP432_EPHYRXERCNT_RXERRCNT     (0xFFFF)

#define PHY_MSP432_EPHYBISTCR_PRBSM         (1 << 14)
#define PHY_MSP432_EPHYBISTCR_PRBSPKT       (1 << 13)
#define PHY_MSP432_EPHYBISTCR_PKTEN         (1 << 12)
#define PHY_MSP432_EPHYBISTCR_PRBSCHKLK     (1 << 11)
#define PHY_MSP432_EPHYBISTCR_PRBSCHKSYNC   (1 << 10)
#define PHY_MSP432_EPHYBISTCR_PKTGENSTAT    (1 << 9)
#define PHY_MSP432_EPHYBISTCR_PWRMODE       (1 << 8)
#define PHY_MSP432_EPHYBISTCR_TXMIILB       (1 << 6)
#define PHY_MSP432_EPHYBISTCR_LBMODE        (0x1F)
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_PCS_IN  (0x1)
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_PCS_OUT (0x2)
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_DL      (0x4)
#define PHY_MSP432_EPHYBISTCR_LBMODE_NE_AL      (0x8)
#define PHY_MSP432_EPHYBISTCR_LBMODE_FE_RL      (0x10)

#define PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT    (9)
#define PHY_MSP432_EPHYLEDCR_BLINKRATE      (0x3 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_20HZ (0x0)
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_10HZ (0x1 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_5HZ  (0x2 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)
#define PHY_MSP432_EPHYLEDCR_BLINKRATE_2HZ  (0x3 << PHY_MSP432_EPHYLEDCR_BLINKRATE_SHIFT)

#define PHY_MSP432_EPHYCTL_AUTOMDI      (1 << 15)
#define PHY_MSP432_EPHYCTL_FORCEMDI     (1 << 14)
#define PHY_MSP432_EPHYCTL_PAUSERX      (1 << 13)
#define PHY_MSP432_EPHYCTL_PAUSETX      (1 << 12)
#define PHY_MSP432_EPHYCTL_MIILNKSTAT   (1 << 11)
#define PHY_MSP432_EPHYCTL_BYPLEDSTRCH  (1 << 7)

#define PHY_MSP432_EPHY10BTSC_RXTHEN
#define PHY_MSP432_EPHY10BTSC_SQUELCH
#define PHY_MSP432_EPHY10BTSC_NLPDIS
#define PHY_MSP432_EPHY10BTSC_POLSTAT
#define PHY_MSP432_EPHY10BTSC_JABBERD

#define PHY_MSP432_EPHYBICSR1_
#define PHY_MSP432_EPHYBICSR1_
#define PHY_MSP432_EPHYBICSR1_IPGLENGTH

#define PHY_MSP432_EPHYBICSR2_PKTLENGTH (0x7FF)

#define PHY_MSP432_EPHYCDCR_START
#define PHY_MSP432_EPHYCDCR_LINKQUAL
#define PHY_MSP432_EPHYCDCR_
#define PHY_MSP432_EPHYCDCR_DONE
#define PHY_MSP432_EPHYCDCR_FAIL

#define PHY_MSP432_EPHYRCR_SWRST
#define PHY_MSP432_EPHYRCR_SWRESTART

#define PHY_MSP432_EPHYLEDCFG_LED2
#define PHY_MSP432_EPHYLEDCFG_LED1
#define PHY_MSP432_EPHYLEDCFG_LED0

/*****************************************************************************/
/* Register values                                                           */
/*****************************************************************************/



#endif /* PHY_MSP432E4_H */
