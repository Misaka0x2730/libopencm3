#ifndef PHY_MSP432E4_H
#define PHY_MSP432E4_H

#define PHY_MSP432_EPHYBMCR         (0x00)
#define PHY_MSP432_EPHYBMSR         (0x01)
#define PHY_MSP432_EPHYID1          (0x02)
#define PHY_MSP432_EPHYID2          (0x03)
#define PHY_MSP432_EPHYANA          (0x04)
#define PHY_MSP432_EPHYANLPA        (0x05)
#define PHY_MSP432_EPHYANER         (0x06)
#define PHY_MSP432_EPHYANNPTR       (0x07)
#define PHY_MSP432_EPHYANLNPTR      (0x08)
#define PHY_MSP432_EPHYCFG1         (0x9)
#define PHY_MSP432_EPHYCFG2         (0xA)
#define PHY_MSP432_EPHYCFG3         (0xB)
#define PHY_MSP432_EPHYREGCTL       (0xD)
#define PHY_MSP432_EPHYADDAR        (0xE)
#define PHY_MSP432_EPHYSTS          (0x10)
#define PHY_MSP432_EPHYSCR          (0x11)
#define PHY_MSP432_EPHYMISR1        (0x12)
#define PHY_MSP432_EPHYMISR2        (0x13)
#define PHY_MSP432_EPHYFCSCR        (0x14)
#define PHY_MSP432_EPHYRXERCNT      (0x15)
#define PHY_MSP432_EPHYBISTCR       (0x16)
#define PHY_MSP432_EPHYLEDCR        (0x18)
#define PHY_MSP432_EPHYCTL          (0x19)
#define PHY_MSP432_EPHY10BTSC       (0x1A)
#define PHY_MSP432_EPHYBICSR1       (0x1B)
#define PHY_MSP432_EPHYBICSR2       (0x1C)
#define PHY_MSP432_EPHYCDCR         (0x1E)
#define PHY_MSP432_EPHYRCR          (0x1F)
#define PHY_MSP432_EPHYLEDCFG       (0x25)

#define PHY_MSP432_EPHYSTS_LINK     (1 << 0)
#define PHY_MSP432_EPHYSTS_SPEED    (1 << 1)
#define PHY_MSP432_EPHYSTS_DUPLEX   (1 << 2)

/*****************************************************************************/
/* Register values                                                           */
/*****************************************************************************/

/* the MMD provides register access into bare PHY chip. MMD provides its own
 * register address space, completely different between devices.
 * It should be implemented later.
 */

#define PHY_MSP432_MMDACR_FUNC_SHIFT       14      /* ---DEF */
#define MSP432_MMDACR_FUNC         (3 << MSP432_MMDACR_FUNC_SHIFT)
#define MSP432_MMDACR_FUNC_ADDRESS     (0 << MSP432_MMDACR_FUNC_SHIFT)
#define MSP432_MMDACR_FUNC_DATA        (1 << MSP432_MMDACR_FUNC_SHIFT)

#define MSP432_MMDACR_DEVAD            (31 << 0)   /* ---DEF */
#define MSP432_MMDACR_DEVAD_PCS        (3 << 0)    /* ---DEF */
#define MSP432_MMDACR_DEVAD_ANN        (7 << 0)    /* ---DE- */
#define MSP432_MMDACR_DEVAD_VENDOR     (30 << 0)   /* ---DE- */

/* MSP432_MMDADR -----------------------------------------------------------*/

/* MSP432_REVISION ---------------------------------------------------------*/
/* note this register is valid only on original LAN8700 */

/* MSP432_EDPDNLP ----------------------------------------------------------*/
/* note this register is valid only on newer than original LAN8700 */

#define MSP432_EDPDNLP_TXEN            (1 << 15)   /* ---DEF */

#define MSP432_EDPDNLP_TXTIM_SHIFT     13      /* ---DEF */
#define MSP432_EDPDNLP_TXTIM           (3<<MSP432_EDPDNLP_TXTIM_SHIFT)
#define MSP432_EDPDNLP_TXTIM_1024MS        (0<<MSP432_EDPDNLP_TXTIM_SHIFT)
#define MSP432_EDPDNLP_TXTIM_0768MS        (1<<MSP432_EDPDNLP_TXTIM_SHIFT)
#define MSP432_EDPDNLP_TXTIM_0512MS        (2<<MSP432_EDPDNLP_TXTIM_SHIFT)
#define MSP432_EDPDNLP_TXTIM_0256MS        (3<<MSP432_EDPDNLP_TXTIM_SHIFT)

#define MSP432_EDPDNLP_RXWAKEEN        (1 << 12)   /* ---DEF */

#define MSP432_EDPDNLP_RXTIM_SHIFT     10      /* ---DEF */
#define MSP432_EDPDNLP_RXTIM           (3<<MSP432_EDPDNLP_RXTIM_SHIFT)
#define MSP432_EDPDNLP_RXTIM_0064MS        (0<<MSP432_EDPDNLP_RXTIM_SHIFT)
#define MSP432_EDPDNLP_RXTIM_0256MS        (1<<MSP432_EDPDNLP_RXTIM_SHIFT)
#define MSP432_EDPDNLP_RXTIM_0512MS        (2<<MSP432_EDPDNLP_RXTIM_SHIFT)
#define MSP432_EDPDNLP_RXTIM_1024MS        (3<<MSP432_EDPDNLP_RXTIM_SHIFT)

#define MSP432_EDPDNLP_EXTCROSSOVER        (1 << 1)    /* ---DEF */
#define MSP432_EDPDNLP_EXTMANCROSSOVER     (1 << 0)    /* ---DEF */

/* MSP432_MCS --------------------------------------------------------------*/

#define MSP432_MCS_EDPWRDOWN           (1 << 13)   /* ABCDEF */
#define MSP432_MCS_LOWSQEN         (1 << 11)   /* A----- */
#define MSP432_MCS_MDPREBP         (1 << 10)   /* A----- */
#define MSP432_MCS_FARLOOPBACK         (1 << 9)    /* ABCDEF */
#define MSP432_MCS_ALTINT          (1 << 6)    /* ABCDEF */
#define MSP432_MCS_PHYADBP         (1 << 3)    /* A----- */
#define MSP432_MCS_FORCELINK           (1 << 2)    /* A----- */
#define MSP432_MCS_ENERGYON            (1 << 1)    /* ABCDEF */

/* MSP432_SM ---------------------------------------------------------------*/

/* @LAN8720A: Should write as 1 (only RMII supported) */
/* @LAN8742A: Don't care bit on LAN8742A (only RMII supported) */
#define MSP432_SM_MIIMODE          (1 << 14)   /* ABCDE- */
#define MSP432_SM_MIIMODE_MII          (0 << 14)   /* ABCDE- */
#define MSP432_SM_MIIMODE_RMII         (1 << 14)   /* ABCDE- */

#define MSP432_SM_MODE_SHIFT           5       /* ABCDEF */
#define MSP432_SM_MODE             (7 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_10HD            (0 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_10FD            (1 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_100HD           (2 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_100FD           (3 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_100HD_AN        (4 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_REPEATER        (5 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_POWERDOWN       (6 << MSP432_SM_MODE_SHIFT)
#define MSP432_SM_MODE_ALL         (7 << MSP432_SM_MODE_SHIFT)

#define MSP432_SM_PHYAD            (0x1F << 0) /* ABCDEF */

/* MSP432_TDRDCR -----------------------------------------------------------*/

/*this register is applicable only on @LAN8740A and @LAN8742A */

#define MSP432_TDRDCR_DELAY            (15 << 0)   /* ---D-F */
#define MSP432_TDRDCR_DELAY            (15 << 0)   /* ---D-F */

#define MSP432_TDRDCR_LBCR_SHIFT       12      /* ---D-F */
#define MSP432_TDRDCR_LBCR         (7 << MSP432_TDRDCR_LBCR_SHIFT)

#define MSP432_TDRDCR_LPAT_SHIFT       6       /* ---D-F */
#define MSP432_TDRDCR_LPAT         (7 << MSP432_TDRDCR_LPAT_SHIFT)

#define MSP432_TDRDCR_HPAT_SHIFT       0       /* ---D-F */
#define MSP432_TDRDCR_HPAT         (7 << MSP432_TDRDCR_HPAT_SHIFT)

/* MSP432_TDRCSR -----------------------------------------------------------*/

/*this register is applicable only on @LAN8740A and @LAN8742A */

#define MSP432_TDRCSR_ENABLE           (1 << 15)   /* ---D-F */
#define MSP432_TDRCSR_ADFILTER         (1 << 14)   /* ---D-F */

#define MSP432_TDRCSR_COND_SHIFT       9       /* ---D-F */
#define MSP432_TDRCSR_COND_DEFAULT     (0 << MSP432_TDRCSR_COND_SHIFT)
#define MSP432_TDRCSR_COND_SHORTED     (1 << MSP432_TDRCSR_COND_SHIFT)
#define MSP432_TDRCSR_COND_OPEN        (2 << MSP432_TDRCSR_COND_SHIFT)
#define MSP432_TDRCSR_COND_MATCH       (3 << MSP432_TDRCSR_COND_SHIFT)

#define MSP432_TDRCSR_STATUS           (1 << 8)    /* ---D-F */

/* note for @LAN8742A the coefficients to meters are in table in DS page 55 */
/* note for @LAN8740A the coefficients to meters are in table in DS page 58 */
#define MSP432_TDRCSR_LENGTH           (15 << 0)   /* ---D-F */


/* MSP432_ERRCNT -----------------------------------------------------------*/

/* 16bit register not applicable for old @LAN8700 */

/* MSP432_CSR --------------------------------------------------------------*/

#define MSP432_CSR_AMDIXCTRL           (1 << 15)   /* ABCDEF */
#define MSP432_CSR_CH_SELECT           (1 << 13)   /* ABCDEF */
#define MSP432_CSR_SQEOFF          (1 << 11)   /* ABCDEF */
#define MSP432_CSR_XPOL            (1 << 4)    /* ABCDEF */

/* MSP432_CBLN --------------------------------------------------------------*/

/* register applicable only on @LAN8740A and LAN8742A */

#define MSP432_CBLN_CBLN_SHIFT         12      /* ---D-F */
#define MSP432_CBLN_CBLN           (15 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_006M          (4 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_017M          (5 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_027M          (6 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_038M          (7 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_049M          (8 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_059M          (9 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_070M          (10 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_081M          (11 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_091M          (12 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_102M          (13 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_113M          (14 << MSP432_CBLN_CBLN_SHIFT)
#define MSP432_CBLN_CBLN_123M          (15 << MSP432_CBLN_CBLN_SHIFT)


/* MSP432_ISR --------------------------------------------------------------*/

#define MSP432_ISR_WOLF            (1 << 8)    /* ---D-F */
#define MSP432_ISR_ENERGYONF           (1 << 7)    /* ABCDEF */
#define MSP432_ISR_ANCOMPF         (1 << 6)    /* ABCDEF */
#define MSP432_ISR_RFAULTF         (1 << 5)    /* ABCDEF */
#define MSP432_ISR_LINKDOWNF           (1 << 4)    /* ABCDEF */
#define MSP432_ISR_ANLPACKF            (1 << 3)    /* ABCDEF */
#define MSP432_ISR_PDFAULTF            (1 << 2)    /* ABCDEF */
#define MSP432_ISR_ANPAGEF         (1 << 1)    /* ABCDEF */

/* LAN8710_IMR --------------------------------------------------------------*/

#define MSP432_IMR_WOLE            (1 << 8)    /* ---D-F */
#define MSP432_IMR_ENERGYONE           (1 << 7)    /* ABCDEF */
#define MSP432_IMR_ANCOMPE         (1 << 6)    /* ABCDEF */
#define MSP432_IMR_RFAULTE         (1 << 5)    /* ABCDEF */
#define MSP432_IMR_LINKDOWNE           (1 << 4)    /* ABCDEF */
#define MSP432_IMR_ANLPACKE            (1 << 3)    /* ABCDEF */
#define MSP432_IMR_PDFAULTE            (1 << 2)    /* ABCDEF */
#define MSP432_IMR_ANPAGEE         (1 << 1)    /* ABCDEF */

/* LAN8710_SCSR -------------------------------------------------------------*/

#define MSP432_SCSR_AUTODONE           (1 << 12)   /* ABCDEF */

#define MSP432_SCSR_GPO2           (1 << 9)    /* A----- */
#define MSP432_SCSR_GPO1           (1 << 8)    /* A----- */
#define MSP432_SCSR_GPO0           (1 << 7)    /* A----- */

/* @LAN8742A: should write as 1 */
/* @LAN8720A: should write as 1 */
#define MSP432_SCSR_ENABLE4B5B         (1 << 6)    /* AB-DE- */

#define MSP432_SCSR_SPEED_SHIFT        2       /* ABCDEF */
#define MSP432_SCSR_SPEED          (7 << MSP432_SCSR_SPEED_SHIFT)
#define MSP432_SCSR_SPEED_10HD         (1 << MSP432_SCSR_SPEED_SHIFT)
#define MSP432_SCSR_SPEED_100HD        (2 << MSP432_SCSR_SPEED_SHIFT)
#define MSP432_SCSR_SPEED_10FD         (5 << MSP432_SCSR_SPEED_SHIFT)
#define MSP432_SCSR_SPEED_100FD        (6 << MSP432_SCSR_SPEED_SHIFT)

#define MSP432_SCSR_NOSCRAMBLE         (1 << 0)    /* A----- */

#endif /* PHY_MSP432E4_H */
