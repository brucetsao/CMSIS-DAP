/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_MCM_REGISTERS_H__
#define __HW_MCM_REGISTERS_H__

#include "regs.h"

/*
 * MKL46Z4 MCM
 *
 * Core Platform Miscellaneous Control Module
 *
 * Registers defined in this header file:
 * - HW_MCM_PLASC - Crossbar Switch (AXBS) Slave Configuration
 * - HW_MCM_PLAMC - Crossbar Switch (AXBS) Master Configuration
 * - HW_MCM_PLACR - Platform Control Register
 * - HW_MCM_CPO - Compute Operation Control Register
 *
 * - hw_mcm_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_MCM_BASE
#define HW_MCM_INSTANCE_COUNT (1U) //!< Number of instances of the MCM module.
#define REGS_MCM_BASE (0xF0003000U) //!< Base address for MCM.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_MCM_PLASC - Crossbar Switch (AXBS) Slave Configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MCM_PLASC - Crossbar Switch (AXBS) Slave Configuration (RO)
 *
 * Reset value: 0x0007U
 *
 * PLASC is a 16-bit read-only register identifying the presence/absence of bus
 * slave connections to the device's crossbar switch.
 */
typedef union _hw_mcm_plasc
{
    uint16_t U;
    struct _hw_mcm_plasc_bitfields
    {
        uint16_t ASC : 8;              //!< [7:0] Each bit in the ASC field indicates
                                       //! whether there is a corresponding connection to the crossbar switch's slave
                                       //! input port.
        uint16_t RESERVED0 : 8;        //!< [15:8]
    } B;
} hw_mcm_plasc_t;
#endif

/*!
 * @name Constants and macros for entire MCM_PLASC register
 */
//@{
#define HW_MCM_PLASC_ADDR        (REGS_MCM_BASE + 0x8U)

#ifndef __LANGUAGE_ASM__
#define HW_MCM_PLASC             (*(__I hw_mcm_plasc_t *) HW_MCM_PLASC_ADDR)
#define HW_MCM_PLASC_RD()        (HW_MCM_PLASC.U)
#endif
//@}

/*
 * Constants & macros for individual MCM_PLASC bitfields
 */

/*!
 * @name Register MCM_PLASC, field ASC[7:0] (RO)
 *
 * Values:
 * - 0 - A bus slave connection to AXBS input port n is absent
 * - 1 - A bus slave connection to AXBS input port n is present
 */
//@{
#define BP_MCM_PLASC_ASC     (0U)          //!< Bit position for MCM_PLASC_ASC.
#define BM_MCM_PLASC_ASC     (0x00FFU)     //!< Bit mask for MCM_PLASC_ASC.
#define BS_MCM_PLASC_ASC     (8U)          //!< Bit field size in bits for MCM_PLASC_ASC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLASC_ASC field.
#define BR_MCM_PLASC_ASC     (BME_UBFX16(HW_MCM_PLASC_ADDR, BP_MCM_PLASC_ASC, BS_MCM_PLASC_ASC))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_MCM_PLAMC - Crossbar Switch (AXBS) Master Configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MCM_PLAMC - Crossbar Switch (AXBS) Master Configuration (RO)
 *
 * Reset value: 0x000DU
 *
 * PLAMC is a 16-bit read-only register identifying the presence/absence of bus
 * master connections to the device's crossbar switch.
 */
typedef union _hw_mcm_plamc
{
    uint16_t U;
    struct _hw_mcm_plamc_bitfields
    {
        uint16_t AMC : 8;              //!< [7:0] Each bit in the AMC field indicates
                                       //! whether there is a corresponding connection to the AXBS master input port.
        uint16_t RESERVED0 : 8;        //!< [15:8]
    } B;
} hw_mcm_plamc_t;
#endif

/*!
 * @name Constants and macros for entire MCM_PLAMC register
 */
//@{
#define HW_MCM_PLAMC_ADDR        (REGS_MCM_BASE + 0xAU)

#ifndef __LANGUAGE_ASM__
#define HW_MCM_PLAMC             (*(__I hw_mcm_plamc_t *) HW_MCM_PLAMC_ADDR)
#define HW_MCM_PLAMC_RD()        (HW_MCM_PLAMC.U)
#endif
//@}

/*
 * Constants & macros for individual MCM_PLAMC bitfields
 */

/*!
 * @name Register MCM_PLAMC, field AMC[7:0] (RO)
 *
 * Values:
 * - 0 - A bus master connection to AXBS input port n is absent
 * - 1 - A bus master connection to AXBS input port n is present
 */
//@{
#define BP_MCM_PLAMC_AMC     (0U)          //!< Bit position for MCM_PLAMC_AMC.
#define BM_MCM_PLAMC_AMC     (0x00FFU)     //!< Bit mask for MCM_PLAMC_AMC.
#define BS_MCM_PLAMC_AMC     (8U)          //!< Bit field size in bits for MCM_PLAMC_AMC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLAMC_AMC field.
#define BR_MCM_PLAMC_AMC     (BME_UBFX16(HW_MCM_PLAMC_ADDR, BP_MCM_PLAMC_AMC, BS_MCM_PLAMC_AMC))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_MCM_PLACR - Platform Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MCM_PLACR - Platform Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * The PLACR register selects the arbitration policy for the crossbar masters
 * and configures the flash memory controller. The speculation buffer and cache in
 * the flash memory controller is configurable via MCM_PLACR[15:10]. The
 * speculation buffer is enabled only for instructions after reset. It is possible to
 * have these states for the speculation buffer: DFCS EFDS Description 0 0
 * Speculation buffer is on for instruction and off for data. 0 1 Speculation buffer is on
 * for instruction and on for data. 1 X Speculation buffer is off. The cache in
 * flash controller is enabled and caching both instruction and data type fetches
 * after reset. It is possible to have these states for the cache: DFCC DFCIC
 * DFCDA Description 0 0 0 Cache is on for both instruction and data. 0 0 1 Cache
 * is on for instruction and off for data. 0 1 0 Cache is off for instruction and
 * on for data. 0 1 1 Cache is off for both instruction and data. 1 X X Cache is
 * off.
 */
typedef union _hw_mcm_placr
{
    uint32_t U;
    struct _hw_mcm_placr_bitfields
    {
        uint32_t RESERVED0 : 9;        //!< [8:0]
        uint32_t ARB : 1;              //!< [9] Arbitration select
        uint32_t CFCC : 1;             //!< [10] Clear Flash Controller Cache
        uint32_t DFCDA : 1;            //!< [11] Disable Flash Controller Data Caching
        uint32_t DFCIC : 1;            //!< [12] Disable Flash Controller Instruction
                                       //! Caching
        uint32_t DFCC : 1;             //!< [13] Disable Flash Controller Cache
        uint32_t EFDS : 1;             //!< [14] Enable Flash Data Speculation
        uint32_t DFCS : 1;             //!< [15] Disable Flash Controller Speculation
        uint32_t ESFC : 1;             //!< [16] Enable Stalling Flash Controller
        uint32_t RESERVED1 : 15;       //!< [31:17]
    } B;
} hw_mcm_placr_t;
#endif

/*!
 * @name Constants and macros for entire MCM_PLACR register
 */
//@{
#define HW_MCM_PLACR_ADDR        (REGS_MCM_BASE + 0xCU)

#ifndef __LANGUAGE_ASM__
#define HW_MCM_PLACR             (*(__IO hw_mcm_placr_t *) HW_MCM_PLACR_ADDR)
#define HW_MCM_PLACR_RD()        (HW_MCM_PLACR.U)
#define HW_MCM_PLACR_WR(v)       (HW_MCM_PLACR.U = (v))
#define HW_MCM_PLACR_SET(v)      (BME_OR32(HW_MCM_PLACR_ADDR, (uint32_t)(v)))
#define HW_MCM_PLACR_CLR(v)      (BME_AND32(HW_MCM_PLACR_ADDR, (uint32_t)(~(v))))
#define HW_MCM_PLACR_TOG(v)      (BME_XOR32(HW_MCM_PLACR_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual MCM_PLACR bitfields
 */

/*!
 * @name Register MCM_PLACR, field ARB[9] (RW)
 *
 * Values:
 * - 0 - Fixed-priority arbitration for the crossbar masters
 * - 1 - Round-robin arbitration for the crossbar masters
 */
//@{
#define BP_MCM_PLACR_ARB     (9U)          //!< Bit position for MCM_PLACR_ARB.
#define BM_MCM_PLACR_ARB     (0x00000200U) //!< Bit mask for MCM_PLACR_ARB.
#define BS_MCM_PLACR_ARB     (1U)          //!< Bit field size in bits for MCM_PLACR_ARB.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_ARB field.
#define BR_MCM_PLACR_ARB     (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_ARB, BS_MCM_PLACR_ARB))
#endif

//! @brief Format value for bitfield MCM_PLACR_ARB.
#define BF_MCM_PLACR_ARB(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_ARB), uint32_t) & BM_MCM_PLACR_ARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ARB field to a new value.
#define BW_MCM_PLACR_ARB(v)  (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_ARB), BP_MCM_PLACR_ARB, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field CFCC[10] (WORZ)
 *
 * Writing a 1 to this field clears the cache. Writing a 0 to this field is
 * ignored. This field always reads as 0.
 */
//@{
#define BP_MCM_PLACR_CFCC    (10U)         //!< Bit position for MCM_PLACR_CFCC.
#define BM_MCM_PLACR_CFCC    (0x00000400U) //!< Bit mask for MCM_PLACR_CFCC.
#define BS_MCM_PLACR_CFCC    (1U)          //!< Bit field size in bits for MCM_PLACR_CFCC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_CFCC field.
#define BR_MCM_PLACR_CFCC    (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_CFCC, BS_MCM_PLACR_CFCC))
#endif

//! @brief Format value for bitfield MCM_PLACR_CFCC.
#define BF_MCM_PLACR_CFCC(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_CFCC), uint32_t) & BM_MCM_PLACR_CFCC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CFCC field to a new value.
#define BW_MCM_PLACR_CFCC(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_CFCC), BP_MCM_PLACR_CFCC, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field DFCDA[11] (RW)
 *
 * This field is used to disable flash controller data caching.
 *
 * Values:
 * - 0 - Enable flash controller data caching
 * - 1 - Disable flash controller data caching.
 */
//@{
#define BP_MCM_PLACR_DFCDA   (11U)         //!< Bit position for MCM_PLACR_DFCDA.
#define BM_MCM_PLACR_DFCDA   (0x00000800U) //!< Bit mask for MCM_PLACR_DFCDA.
#define BS_MCM_PLACR_DFCDA   (1U)          //!< Bit field size in bits for MCM_PLACR_DFCDA.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_DFCDA field.
#define BR_MCM_PLACR_DFCDA   (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_DFCDA, BS_MCM_PLACR_DFCDA))
#endif

//! @brief Format value for bitfield MCM_PLACR_DFCDA.
#define BF_MCM_PLACR_DFCDA(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_DFCDA), uint32_t) & BM_MCM_PLACR_DFCDA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DFCDA field to a new value.
#define BW_MCM_PLACR_DFCDA(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_DFCDA), BP_MCM_PLACR_DFCDA, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field DFCIC[12] (RW)
 *
 * This field is used to disable flash controller instruction caching.
 *
 * Values:
 * - 0 - Enable flash controller instruction caching.
 * - 1 - Disable flash controller instruction caching.
 */
//@{
#define BP_MCM_PLACR_DFCIC   (12U)         //!< Bit position for MCM_PLACR_DFCIC.
#define BM_MCM_PLACR_DFCIC   (0x00001000U) //!< Bit mask for MCM_PLACR_DFCIC.
#define BS_MCM_PLACR_DFCIC   (1U)          //!< Bit field size in bits for MCM_PLACR_DFCIC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_DFCIC field.
#define BR_MCM_PLACR_DFCIC   (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_DFCIC, BS_MCM_PLACR_DFCIC))
#endif

//! @brief Format value for bitfield MCM_PLACR_DFCIC.
#define BF_MCM_PLACR_DFCIC(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_DFCIC), uint32_t) & BM_MCM_PLACR_DFCIC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DFCIC field to a new value.
#define BW_MCM_PLACR_DFCIC(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_DFCIC), BP_MCM_PLACR_DFCIC, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field DFCC[13] (RW)
 *
 * This field is used to disable flash controller cache.
 *
 * Values:
 * - 0 - Enable flash controller cache.
 * - 1 - Disable flash controller cache.
 */
//@{
#define BP_MCM_PLACR_DFCC    (13U)         //!< Bit position for MCM_PLACR_DFCC.
#define BM_MCM_PLACR_DFCC    (0x00002000U) //!< Bit mask for MCM_PLACR_DFCC.
#define BS_MCM_PLACR_DFCC    (1U)          //!< Bit field size in bits for MCM_PLACR_DFCC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_DFCC field.
#define BR_MCM_PLACR_DFCC    (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_DFCC, BS_MCM_PLACR_DFCC))
#endif

//! @brief Format value for bitfield MCM_PLACR_DFCC.
#define BF_MCM_PLACR_DFCC(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_DFCC), uint32_t) & BM_MCM_PLACR_DFCC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DFCC field to a new value.
#define BW_MCM_PLACR_DFCC(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_DFCC), BP_MCM_PLACR_DFCC, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field EFDS[14] (RW)
 *
 * This field is used to enable flash data speculation.
 *
 * Values:
 * - 0 - Disable flash data speculation.
 * - 1 - Enable flash data speculation.
 */
//@{
#define BP_MCM_PLACR_EFDS    (14U)         //!< Bit position for MCM_PLACR_EFDS.
#define BM_MCM_PLACR_EFDS    (0x00004000U) //!< Bit mask for MCM_PLACR_EFDS.
#define BS_MCM_PLACR_EFDS    (1U)          //!< Bit field size in bits for MCM_PLACR_EFDS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_EFDS field.
#define BR_MCM_PLACR_EFDS    (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_EFDS, BS_MCM_PLACR_EFDS))
#endif

//! @brief Format value for bitfield MCM_PLACR_EFDS.
#define BF_MCM_PLACR_EFDS(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_EFDS), uint32_t) & BM_MCM_PLACR_EFDS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EFDS field to a new value.
#define BW_MCM_PLACR_EFDS(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_EFDS), BP_MCM_PLACR_EFDS, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field DFCS[15] (RW)
 *
 * This field is used to disable flash controller speculation.
 *
 * Values:
 * - 0 - Enable flash controller speculation.
 * - 1 - Disable flash controller speculation.
 */
//@{
#define BP_MCM_PLACR_DFCS    (15U)         //!< Bit position for MCM_PLACR_DFCS.
#define BM_MCM_PLACR_DFCS    (0x00008000U) //!< Bit mask for MCM_PLACR_DFCS.
#define BS_MCM_PLACR_DFCS    (1U)          //!< Bit field size in bits for MCM_PLACR_DFCS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_DFCS field.
#define BR_MCM_PLACR_DFCS    (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_DFCS, BS_MCM_PLACR_DFCS))
#endif

//! @brief Format value for bitfield MCM_PLACR_DFCS.
#define BF_MCM_PLACR_DFCS(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_DFCS), uint32_t) & BM_MCM_PLACR_DFCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DFCS field to a new value.
#define BW_MCM_PLACR_DFCS(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_DFCS), BP_MCM_PLACR_DFCS, 1))
#endif
//@}

/*!
 * @name Register MCM_PLACR, field ESFC[16] (RW)
 *
 * This field is used to enable stalling flash controller when flash is busy.
 *
 * Values:
 * - 0 - Disable stalling flash controller when flash is busy.
 * - 1 - Enable stalling flash controller when flash is busy.
 */
//@{
#define BP_MCM_PLACR_ESFC    (16U)         //!< Bit position for MCM_PLACR_ESFC.
#define BM_MCM_PLACR_ESFC    (0x00010000U) //!< Bit mask for MCM_PLACR_ESFC.
#define BS_MCM_PLACR_ESFC    (1U)          //!< Bit field size in bits for MCM_PLACR_ESFC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_PLACR_ESFC field.
#define BR_MCM_PLACR_ESFC    (BME_UBFX32(HW_MCM_PLACR_ADDR, BP_MCM_PLACR_ESFC, BS_MCM_PLACR_ESFC))
#endif

//! @brief Format value for bitfield MCM_PLACR_ESFC.
#define BF_MCM_PLACR_ESFC(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_PLACR_ESFC), uint32_t) & BM_MCM_PLACR_ESFC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ESFC field to a new value.
#define BW_MCM_PLACR_ESFC(v) (BME_BFI32(HW_MCM_PLACR_ADDR, ((uint32_t)(v) << BP_MCM_PLACR_ESFC), BP_MCM_PLACR_ESFC, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_MCM_CPO - Compute Operation Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MCM_CPO - Compute Operation Control Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * This register controls the Compute Operation.
 */
typedef union _hw_mcm_cpo
{
    uint32_t U;
    struct _hw_mcm_cpo_bitfields
    {
        uint32_t CPOREQ : 1;           //!< [0] Compute Operation request
        uint32_t CPOACK : 1;           //!< [1] Compute Operation acknowledge
        uint32_t CPOWOI : 1;           //!< [2] Compute Operation wakeup on interrupt
        uint32_t RESERVED0 : 29;       //!< [31:3]
    } B;
} hw_mcm_cpo_t;
#endif

/*!
 * @name Constants and macros for entire MCM_CPO register
 */
//@{
#define HW_MCM_CPO_ADDR          (REGS_MCM_BASE + 0x40U)

#ifndef __LANGUAGE_ASM__
#define HW_MCM_CPO               (*(__IO hw_mcm_cpo_t *) HW_MCM_CPO_ADDR)
#define HW_MCM_CPO_RD()          (HW_MCM_CPO.U)
#define HW_MCM_CPO_WR(v)         (HW_MCM_CPO.U = (v))
#define HW_MCM_CPO_SET(v)        (BME_OR32(HW_MCM_CPO_ADDR, (uint32_t)(v)))
#define HW_MCM_CPO_CLR(v)        (BME_AND32(HW_MCM_CPO_ADDR, (uint32_t)(~(v))))
#define HW_MCM_CPO_TOG(v)        (BME_XOR32(HW_MCM_CPO_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual MCM_CPO bitfields
 */

/*!
 * @name Register MCM_CPO, field CPOREQ[0] (RW)
 *
 * This bit is auto-cleared by vector fetching if CPOWOI = 1.
 *
 * Values:
 * - 0 - Request is cleared.
 * - 1 - Request Compute Operation.
 */
//@{
#define BP_MCM_CPO_CPOREQ    (0U)          //!< Bit position for MCM_CPO_CPOREQ.
#define BM_MCM_CPO_CPOREQ    (0x00000001U) //!< Bit mask for MCM_CPO_CPOREQ.
#define BS_MCM_CPO_CPOREQ    (1U)          //!< Bit field size in bits for MCM_CPO_CPOREQ.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_CPO_CPOREQ field.
#define BR_MCM_CPO_CPOREQ    (BME_UBFX32(HW_MCM_CPO_ADDR, BP_MCM_CPO_CPOREQ, BS_MCM_CPO_CPOREQ))
#endif

//! @brief Format value for bitfield MCM_CPO_CPOREQ.
#define BF_MCM_CPO_CPOREQ(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_CPO_CPOREQ), uint32_t) & BM_MCM_CPO_CPOREQ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CPOREQ field to a new value.
#define BW_MCM_CPO_CPOREQ(v) (BME_BFI32(HW_MCM_CPO_ADDR, ((uint32_t)(v) << BP_MCM_CPO_CPOREQ), BP_MCM_CPO_CPOREQ, 1))
#endif
//@}

/*!
 * @name Register MCM_CPO, field CPOACK[1] (RO)
 *
 * Values:
 * - 0 - Compute operation entry has not completed or compute operation exit has
 *     completed.
 * - 1 - Compute operation entry has completed or compute operation exit has not
 *     completed.
 */
//@{
#define BP_MCM_CPO_CPOACK    (1U)          //!< Bit position for MCM_CPO_CPOACK.
#define BM_MCM_CPO_CPOACK    (0x00000002U) //!< Bit mask for MCM_CPO_CPOACK.
#define BS_MCM_CPO_CPOACK    (1U)          //!< Bit field size in bits for MCM_CPO_CPOACK.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_CPO_CPOACK field.
#define BR_MCM_CPO_CPOACK    (BME_UBFX32(HW_MCM_CPO_ADDR, BP_MCM_CPO_CPOACK, BS_MCM_CPO_CPOACK))
#endif
//@}

/*!
 * @name Register MCM_CPO, field CPOWOI[2] (RW)
 *
 * Values:
 * - 0 - No effect.
 * - 1 - When set, the CPOREQ is cleared on any interrupt or exception vector
 *     fetch.
 */
//@{
#define BP_MCM_CPO_CPOWOI    (2U)          //!< Bit position for MCM_CPO_CPOWOI.
#define BM_MCM_CPO_CPOWOI    (0x00000004U) //!< Bit mask for MCM_CPO_CPOWOI.
#define BS_MCM_CPO_CPOWOI    (1U)          //!< Bit field size in bits for MCM_CPO_CPOWOI.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the MCM_CPO_CPOWOI field.
#define BR_MCM_CPO_CPOWOI    (BME_UBFX32(HW_MCM_CPO_ADDR, BP_MCM_CPO_CPOWOI, BS_MCM_CPO_CPOWOI))
#endif

//! @brief Format value for bitfield MCM_CPO_CPOWOI.
#define BF_MCM_CPO_CPOWOI(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_MCM_CPO_CPOWOI), uint32_t) & BM_MCM_CPO_CPOWOI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CPOWOI field to a new value.
#define BW_MCM_CPO_CPOWOI(v) (BME_BFI32(HW_MCM_CPO_ADDR, ((uint32_t)(v) << BP_MCM_CPO_CPOWOI), BP_MCM_CPO_CPOWOI, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_mcm_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All MCM module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_mcm
{
    uint8_t _reserved0[8];
    __I hw_mcm_plasc_t PLASC;              //!< [0x8] Crossbar Switch (AXBS) Slave Configuration
    __I hw_mcm_plamc_t PLAMC;              //!< [0xA] Crossbar Switch (AXBS) Master Configuration
    __IO hw_mcm_placr_t PLACR;             //!< [0xC] Platform Control Register
    uint8_t _reserved1[48];
    __IO hw_mcm_cpo_t CPO;                 //!< [0x40] Compute Operation Control Register
} hw_mcm_t;
#pragma pack()

//! @brief Macro to access all MCM registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_MCM</code>.
#define HW_MCM         (*(hw_mcm_t *) REGS_MCM_BASE)
#endif

#endif // __HW_MCM_REGISTERS_H__
// v22/130726/0.9
// EOF
