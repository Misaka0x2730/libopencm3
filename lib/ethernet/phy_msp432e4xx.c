#include <libopencm3/ethernet/mac.h>
#include <libopencm3/ethernet/phy.h>
#include <libopencm3/ethernet/phy_msp432e4xx.h>

/** @brief Get the current link status
 *
 * Retrieve the link speed and duplex status of the link.
 *
 * @param[in] phy uint8_t phy ID of the PHY
 * @returns ::phy_status Link status
 */
enum phy_status phy_link_status(uint8_t phy)
{
    u8_t reg_sts = eth_smi_read(phy, PHY_MSP432_EPHYSTS);

    if (!(reg_sts & PHY_MSP432_EPHYSTS_LINK))
        return LINK_DOWN;

    if(reg_sts & PHY_MSP432_EPHYSTS_DUPLEX) {
        if(reg_sts & PHY_MSP432_EPHYSTS_SPEED) {
            return LINK_FD_10M;
        } else {
            return LINK_FD_100M;
        }
    } else {
        if(reg_sts & PHY_MSP432_EPHYSTS_SPEED) {
            return LINK_HD_10M;
        } else {
            return LINK_HD_100M;
        }
    }
}

/*---------------------------------------------------------------------------*/
/** @brief Force autonegotiation
 *
 * Force the autonegotiation and set link speed and duplex mode of the link
 *
 * @param[in] phy uint8_t phy ID of the PHY
 * @param[in] mode enum phy_status Desired link status
 */
void phy_autoneg_force(uint8_t phy, enum phy_status mode)
{
    uint16_t bst = 0;

    if ((mode == LINK_FD_10M) || (mode == LINK_FD_100M)) {
        bst |= PHY_REG_BCR_FD;
    }

    if ((mode == LINK_FD_100M) || (mode == LINK_HD_100M)) {
        bst |= PHY_REG_BCR_100M;
    }

    eth_smi_bit_op(phy, PHY_REG_BCR, bst,
            ~(PHY_REG_BCR_AN | PHY_REG_BCR_100M | PHY_REG_BCR_FD));
}

/*---------------------------------------------------------------------------*/
/** @brief Enable the autonegotiation
 *
 * Enable the autonegotiation of the link speed and duplex mode
 *
 * @param[in] phy uint8_t phy ID of the PHY
 */
void phy_autoneg_enable(uint8_t phy)
{
    eth_smi_bit_set(phy, PHY_REG_BCR, PHY_REG_BCR_AN | PHY_REG_BCR_ANRST);
}
