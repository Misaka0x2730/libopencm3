/** @brief Get the current link status
 *
 * Retrieve the link speed and duplex status of the link.
 *
 * @param[in] phy uint8_t phy ID of the PHY
 * @returns ::phy_status Link status
 */
enum phy_status phy_link_status(uint8_t phy)
{
    return eth_smi_read(phy, KSZ80X1_CR1) & 0x07;
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

    if ((mode == LINK_FD_10M) || (mode == LINK_FD_100M) ||
        (mode == LINK_FD_1000M) || (mode == LINK_FD_10000M)) {
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
