/******************************************************************************
 *
 * Copyright(c) 2016 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

#ifndef _HALMAC_8821C_CFG_H_
#define _HALMAC_8821C_CFG_H_

#include "halmac_8821c_pwr_seq.h"
#include "halmac_api_8821c.h"
#include "halmac_api_8821c_usb.h"
#include "halmac_api_8821c_pcie.h"
#include "halmac_api_8821c_sdio.h"
#include "../../halmac_bit2.h"
#include "../../halmac_reg2.h"
#include "../../halmac_api.h"

#if HALMAC_PLATFORM_TESTPROGRAM
#include "halmisc_api_8821c.h"
#include "halmisc_api_8821c_usb.h"
#include "halmisc_api_8821c_sdio.h"
#include "halmisc_api_8821c_pcie.h"
#endif

#define HALMAC_TX_FIFO_SIZE_8821C				65536 /* 64k */
#define HALMAC_TX_FIFO_SIZE_LA_8821C			32768 /* 32k */
#define HALMAC_RX_FIFO_SIZE_8821C				16384 /* 16k */
#define HALMAC_TX_PAGE_SIZE_8821C				128 /* PageSize 128Byte */
#define HALMAC_TX_PAGE_SIZE_2_POWER_8821C		7 /* 128 = 2^7 */
#define HALMAC_SECURITY_CAM_ENTRY_NUM_8821C		64 /* CAM Entry Size */
#define HALMAC_TX_DESC_SIZE_8821C				48
#define HALMAC_RX_DESC_SIZE_8821C				24
#define HALMAC_WOWLAN_PATTERN_SIZE_8821C		256

#define HALMAC_EFUSE_SIZE_8821C					512 /* 0x2000 */
#define HALMAC_EEPROM_SIZE_8821C				0x200
#define HALMAC_BT_EFUSE_SIZE_8821C				128

#define HALMAC_CR_TRX_ENABLE_8821C      (BIT_HCI_TXDMA_EN | BIT_HCI_RXDMA_EN | BIT_TXDMA_EN | \
					 BIT_RXDMA_EN | BIT_PROTOCOL_EN | BIT_SCHEDULE_EN | \
					 BIT_MACTXEN | BIT_MACRXEN)

#define HALMAC_BLK_DESC_NUM_8821C   0x3 /* Only for USB */

typedef enum _HALMAC_NORMAL_RXAGG_TH_TO_8821C {
	HALMAC_NORMAL_RXAGG_THRESHOLD_8821C = 0xFF,
	HALMAC_NORMAL_RXAGG_TIMEOUT_8821C = 0x01,
} HALMAC_NORMAL_RXAGG_TH_TO_8821C;

typedef enum _HALMAC_LOOPBACK_RXAGG_TH_TO_8821C {
	HALMAC_LOOPBACK_RXAGG_THRESHOLD_8821C = 0xFF,
	HALMAC_LOOPBACK_RXAGG_TIMEOUT_8821C = 0x01,
} HALMAC_LOOPBACK_RXAGG_TH_TO_8821C;

#define HALMAC_RSVD_DRV_PGNUM_8821C					16 /*2048*/
#define HALMAC_RSVD_H2C_EXTRAINFO_PGNUM_8821C		32 /*4096*/
#define HALMAC_RSVD_H2C_QUEUE_PGNUM_8821C			8 /*1024*/
#define HALMAC_RSVD_CPU_INSTRUCTION_PGNUM_8821C		0 /*0*/
#define HALMAC_RSVD_FW_TXBUFF_PGNUM_8821C			4 /*512*/

/*
 * Normal mode
 */
#define HALMAC_NORMAL_HPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_NORMAL_NPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_NORMAL_LPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_NORMAL_EXPQ_PGNUM_8821C          14 /**/
#define HALMAC_NORMAL_GAP_PGNUM_8821C           1 /*128*/

/*
 * Loopback mode
 */
#define HALMAC_LB_HPQ_PGNUM_8821C		16 /*2048*/
#define HALMAC_LB_NPQ_PGNUM_8821C       16 /*2048*/
#define HALMAC_LB_LPQ_PGNUM_8821C       16 /*2048*/
#define HALMAC_LB_EXPQ_PGNUM_8821C      14 /**/
#define HALMAC_LB_GAP_PGNUM_8821C       256 /**/

/*
 * Normal mode - 2Bulkout
 */
#define HALMAC_NORMAL_2BULKOUT_HPQ_PGNUM_8821C       16 /*2048*/
#define HALMAC_NORMAL_2BULKOUT_NPQ_PGNUM_8821C       16 /*2048*/
#define HALMAC_NORMAL_2BULKOUT_LPQ_PGNUM_8821C       0 /*0*/
#define HALMAC_NORMAL_2BULKOUT_EXPQ_PGNUM_8821C      0 /*0*/
#define HALMAC_NORMAL_2BULKOUT_GAP_PGNUM_8821C       1 /*128*/

/*
 * Loopback mode - 2Bulkout
 */
#define HALMAC_LB_2BULKOUT_HPQ_PGNUM_8821C		16 /*2048*/
#define HALMAC_LB_2BULKOUT_NPQ_PGNUM_8821C      16 /*2048*/
#define HALMAC_LB_2BULKOUT_LPQ_PGNUM_8821C      0 /*0*/
#define HALMAC_LB_2BULKOUT_EXPQ_PGNUM_8821C     0 /*0*/
#define HALMAC_LB_2BULKOUT_GAP_PGNUM_8821C      256 /**/

/*
 * Normal mode - 3BULKOUT
 */
#define HALMAC_NORMAL_3BULKOUT_HPQ_PGNUM_8821C          16 /*2048*/
#define HALMAC_NORMAL_3BULKOUT_NPQ_PGNUM_8821C          16 /*2048*/
#define HALMAC_NORMAL_3BULKOUT_LPQ_PGNUM_8821C          16 /*2048*/
#define HALMAC_NORMAL_3BULKOUT_EXPQ_PGNUM_8821C         0 /*0*/
#define HALMAC_NORMAL_3BULKOUT_GAP_PGNUM_8821C          1 /*128*/

/*
 * Loopback mode - 3BULKOUT
 */
#define HALMAC_LB_3BULKOUT_HPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_LB_3BULKOUT_NPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_LB_3BULKOUT_LPQ_PGNUM_8821C           16 /*2048*/
#define HALMAC_LB_3BULKOUT_EXPQ_PGNUM_8821C          0 /*0*/
#define HALMAC_LB_3BULKOUT_GAP_PGNUM_8821C           256 /**/

/*
 * WMM mode
 */
#define HALMAC_WMM_HPQ_PGNUM_8821C			16 /*2048*/
#define HALMAC_WMM_NPQ_PGNUM_8821C			16 /*2048*/
#define HALMAC_WMM_LPQ_PGNUM_8821C			16 /*2048*/
#define HALMAC_WMM_EXPQ_PGNUM_8821C			14 /**/
#define HALMAC_WMM_GAP_PGNUM_8821C			1 /*128*/

#endif
