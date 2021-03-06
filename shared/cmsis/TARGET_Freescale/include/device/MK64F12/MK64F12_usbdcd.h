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
#ifndef __HW_USBDCD_REGISTERS_H__
#define __HW_USBDCD_REGISTERS_H__

#include "regs.h"

/*
 * MK64F12 USBDCD
 *
 * USB Device Charger Detection module
 *
 * Registers defined in this header file:
 * - HW_USBDCD_CONTROL - Control register
 * - HW_USBDCD_CLOCK - Clock register
 * - HW_USBDCD_STATUS - Status register
 * - HW_USBDCD_TIMER0 - TIMER0 register
 * - HW_USBDCD_TIMER1 - TIMER1 register
 * - HW_USBDCD_TIMER2_BC11 - TIMER2_BC11 register
 * - HW_USBDCD_TIMER2_BC12 - TIMER2_BC12 register
 *
 * - hw_usbdcd_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_USBDCD_BASE
#define HW_USBDCD_INSTANCE_COUNT (1U) //!< Number of instances of the USBDCD module.
#define HW_USBDCD0 (0U) //!< Instance number for USBDCD.
#define REGS_USBDCD0_BASE (0x40035000U) //!< Base address for USBDCD.

//! @brief Table of base addresses for USBDCD instances.
static const uint32_t __g_regs_USBDCD_base_addresses[] = {
        REGS_USBDCD0_BASE,
    };

//! @brief Get the base address of USBDCD by instance number.
//! @param x USBDCD instance number, from 0 through 0.
#define REGS_USBDCD_BASE(x) (__g_regs_USBDCD_base_addresses[(x)])

//! @brief Get the instance number given a base address.
//! @param b Base address for an instance of USBDCD.
#define REGS_USBDCD_INSTANCE(b) ((b) == REGS_USBDCD0_BASE ? HW_USBDCD0 : 0)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_CONTROL - Control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_CONTROL - Control register (RW)
 *
 * Reset value: 0x00010000U
 *
 * Contains the control and interrupt bit fields.
 */
typedef union _hw_usbdcd_control
{
    uint32_t U;
    struct _hw_usbdcd_control_bitfields
    {
        uint32_t IACK : 1;             //!< [0] Interrupt Acknowledge
        uint32_t RESERVED0 : 7;        //!< [7:1]
        uint32_t IF : 1;               //!< [8] Interrupt Flag
        uint32_t RESERVED1 : 7;        //!< [15:9]
        uint32_t IE : 1;               //!< [16] Interrupt Enable
        uint32_t BC12 : 1;             //!< [17]
        uint32_t RESERVED2 : 6;        //!< [23:18]
        uint32_t START : 1;            //!< [24] Start Change Detection Sequence
        uint32_t SR : 1;               //!< [25] Software Reset
        uint32_t RESERVED3 : 6;        //!< [31:26]
    } B;
} hw_usbdcd_control_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_CONTROL register
 */
//@{
#define HW_USBDCD_CONTROL_ADDR(x) (REGS_USBDCD_BASE(x) + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_CONTROL(x)     (*(__IO hw_usbdcd_control_t *) HW_USBDCD_CONTROL_ADDR(x))
#define HW_USBDCD_CONTROL_RD(x)  (HW_USBDCD_CONTROL(x).U)
#define HW_USBDCD_CONTROL_WR(x, v) (HW_USBDCD_CONTROL(x).U = (v))
#define HW_USBDCD_CONTROL_SET(x, v) (HW_USBDCD_CONTROL_WR(x, HW_USBDCD_CONTROL_RD(x) |  (v)))
#define HW_USBDCD_CONTROL_CLR(x, v) (HW_USBDCD_CONTROL_WR(x, HW_USBDCD_CONTROL_RD(x) & ~(v)))
#define HW_USBDCD_CONTROL_TOG(x, v) (HW_USBDCD_CONTROL_WR(x, HW_USBDCD_CONTROL_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_CONTROL bitfields
 */

/*!
 * @name Register USBDCD_CONTROL, field IACK[0] (WORZ)
 *
 * Determines whether the interrupt is cleared.
 *
 * Values:
 * - 0 - Do not clear the interrupt.
 * - 1 - Clear the IF bit (interrupt flag).
 */
//@{
#define BP_USBDCD_CONTROL_IACK (0U)        //!< Bit position for USBDCD_CONTROL_IACK.
#define BM_USBDCD_CONTROL_IACK (0x00000001U) //!< Bit mask for USBDCD_CONTROL_IACK.
#define BS_USBDCD_CONTROL_IACK (1U)        //!< Bit field size in bits for USBDCD_CONTROL_IACK.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_IACK field.
#define BR_USBDCD_CONTROL_IACK(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_IACK))
#endif

//! @brief Format value for bitfield USBDCD_CONTROL_IACK.
#define BF_USBDCD_CONTROL_IACK(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CONTROL_IACK), uint32_t) & BM_USBDCD_CONTROL_IACK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IACK field to a new value.
#define BW_USBDCD_CONTROL_IACK(x, v) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_IACK) = (v))
#endif
//@}

/*!
 * @name Register USBDCD_CONTROL, field IF[8] (RO)
 *
 * Determines whether an interrupt is pending.
 *
 * Values:
 * - 0 - No interrupt is pending.
 * - 1 - An interrupt is pending.
 */
//@{
#define BP_USBDCD_CONTROL_IF (8U)          //!< Bit position for USBDCD_CONTROL_IF.
#define BM_USBDCD_CONTROL_IF (0x00000100U) //!< Bit mask for USBDCD_CONTROL_IF.
#define BS_USBDCD_CONTROL_IF (1U)          //!< Bit field size in bits for USBDCD_CONTROL_IF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_IF field.
#define BR_USBDCD_CONTROL_IF(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_IF))
#endif
//@}

/*!
 * @name Register USBDCD_CONTROL, field IE[16] (RW)
 *
 * Enables/disables interrupts to the system.
 *
 * Values:
 * - 0 - Disable interrupts to the system.
 * - 1 - Enable interrupts to the system.
 */
//@{
#define BP_USBDCD_CONTROL_IE (16U)         //!< Bit position for USBDCD_CONTROL_IE.
#define BM_USBDCD_CONTROL_IE (0x00010000U) //!< Bit mask for USBDCD_CONTROL_IE.
#define BS_USBDCD_CONTROL_IE (1U)          //!< Bit field size in bits for USBDCD_CONTROL_IE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_IE field.
#define BR_USBDCD_CONTROL_IE(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_IE))
#endif

//! @brief Format value for bitfield USBDCD_CONTROL_IE.
#define BF_USBDCD_CONTROL_IE(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CONTROL_IE), uint32_t) & BM_USBDCD_CONTROL_IE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IE field to a new value.
#define BW_USBDCD_CONTROL_IE(x, v) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_IE) = (v))
#endif
//@}

/*!
 * @name Register USBDCD_CONTROL, field BC12[17] (RW)
 *
 * BC1.2 compatibility. This bit cannot be changed after start detection.
 *
 * Values:
 * - 0 - Compatible with BC1.1 (default)
 * - 1 - Compatible with BC1.2
 */
//@{
#define BP_USBDCD_CONTROL_BC12 (17U)       //!< Bit position for USBDCD_CONTROL_BC12.
#define BM_USBDCD_CONTROL_BC12 (0x00020000U) //!< Bit mask for USBDCD_CONTROL_BC12.
#define BS_USBDCD_CONTROL_BC12 (1U)        //!< Bit field size in bits for USBDCD_CONTROL_BC12.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_BC12 field.
#define BR_USBDCD_CONTROL_BC12(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_BC12))
#endif

//! @brief Format value for bitfield USBDCD_CONTROL_BC12.
#define BF_USBDCD_CONTROL_BC12(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CONTROL_BC12), uint32_t) & BM_USBDCD_CONTROL_BC12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BC12 field to a new value.
#define BW_USBDCD_CONTROL_BC12(x, v) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_BC12) = (v))
#endif
//@}

/*!
 * @name Register USBDCD_CONTROL, field START[24] (WORZ)
 *
 * Determines whether the charger detection sequence is initiated.
 *
 * Values:
 * - 0 - Do not start the sequence. Writes of this value have no effect.
 * - 1 - Initiate the charger detection sequence. If the sequence is already
 *     running, writes of this value have no effect.
 */
//@{
#define BP_USBDCD_CONTROL_START (24U)      //!< Bit position for USBDCD_CONTROL_START.
#define BM_USBDCD_CONTROL_START (0x01000000U) //!< Bit mask for USBDCD_CONTROL_START.
#define BS_USBDCD_CONTROL_START (1U)       //!< Bit field size in bits for USBDCD_CONTROL_START.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_START field.
#define BR_USBDCD_CONTROL_START(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_START))
#endif

//! @brief Format value for bitfield USBDCD_CONTROL_START.
#define BF_USBDCD_CONTROL_START(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CONTROL_START), uint32_t) & BM_USBDCD_CONTROL_START)

#ifndef __LANGUAGE_ASM__
//! @brief Set the START field to a new value.
#define BW_USBDCD_CONTROL_START(x, v) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_START) = (v))
#endif
//@}

/*!
 * @name Register USBDCD_CONTROL, field SR[25] (WORZ)
 *
 * Determines whether a software reset is performed.
 *
 * Values:
 * - 0 - Do not perform a software reset.
 * - 1 - Perform a software reset.
 */
//@{
#define BP_USBDCD_CONTROL_SR (25U)         //!< Bit position for USBDCD_CONTROL_SR.
#define BM_USBDCD_CONTROL_SR (0x02000000U) //!< Bit mask for USBDCD_CONTROL_SR.
#define BS_USBDCD_CONTROL_SR (1U)          //!< Bit field size in bits for USBDCD_CONTROL_SR.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CONTROL_SR field.
#define BR_USBDCD_CONTROL_SR(x) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_SR))
#endif

//! @brief Format value for bitfield USBDCD_CONTROL_SR.
#define BF_USBDCD_CONTROL_SR(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CONTROL_SR), uint32_t) & BM_USBDCD_CONTROL_SR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SR field to a new value.
#define BW_USBDCD_CONTROL_SR(x, v) (BITBAND_ACCESS32(HW_USBDCD_CONTROL_ADDR(x), BP_USBDCD_CONTROL_SR) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_CLOCK - Clock register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_CLOCK - Clock register (RW)
 *
 * Reset value: 0x000000C1U
 */
typedef union _hw_usbdcd_clock
{
    uint32_t U;
    struct _hw_usbdcd_clock_bitfields
    {
        uint32_t CLOCK_UNIT : 1;       //!< [0] Unit of Measurement Encoding for
                                       //! Clock Speed
        uint32_t RESERVED0 : 1;        //!< [1]
        uint32_t CLOCK_SPEED : 10;     //!< [11:2] Numerical Value of Clock Speed
                                       //! in Binary
        uint32_t RESERVED1 : 20;       //!< [31:12]
    } B;
} hw_usbdcd_clock_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_CLOCK register
 */
//@{
#define HW_USBDCD_CLOCK_ADDR(x)  (REGS_USBDCD_BASE(x) + 0x4U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_CLOCK(x)       (*(__IO hw_usbdcd_clock_t *) HW_USBDCD_CLOCK_ADDR(x))
#define HW_USBDCD_CLOCK_RD(x)    (HW_USBDCD_CLOCK(x).U)
#define HW_USBDCD_CLOCK_WR(x, v) (HW_USBDCD_CLOCK(x).U = (v))
#define HW_USBDCD_CLOCK_SET(x, v) (HW_USBDCD_CLOCK_WR(x, HW_USBDCD_CLOCK_RD(x) |  (v)))
#define HW_USBDCD_CLOCK_CLR(x, v) (HW_USBDCD_CLOCK_WR(x, HW_USBDCD_CLOCK_RD(x) & ~(v)))
#define HW_USBDCD_CLOCK_TOG(x, v) (HW_USBDCD_CLOCK_WR(x, HW_USBDCD_CLOCK_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_CLOCK bitfields
 */

/*!
 * @name Register USBDCD_CLOCK, field CLOCK_UNIT[0] (RW)
 *
 * Specifies the unit of measure for the clock speed.
 *
 * Values:
 * - 0 - kHz Speed (between 1 kHz and 1023 kHz)
 * - 1 - MHz Speed (between 1 MHz and 1023 MHz)
 */
//@{
#define BP_USBDCD_CLOCK_CLOCK_UNIT (0U)    //!< Bit position for USBDCD_CLOCK_CLOCK_UNIT.
#define BM_USBDCD_CLOCK_CLOCK_UNIT (0x00000001U) //!< Bit mask for USBDCD_CLOCK_CLOCK_UNIT.
#define BS_USBDCD_CLOCK_CLOCK_UNIT (1U)    //!< Bit field size in bits for USBDCD_CLOCK_CLOCK_UNIT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CLOCK_CLOCK_UNIT field.
#define BR_USBDCD_CLOCK_CLOCK_UNIT(x) (BITBAND_ACCESS32(HW_USBDCD_CLOCK_ADDR(x), BP_USBDCD_CLOCK_CLOCK_UNIT))
#endif

//! @brief Format value for bitfield USBDCD_CLOCK_CLOCK_UNIT.
#define BF_USBDCD_CLOCK_CLOCK_UNIT(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CLOCK_CLOCK_UNIT), uint32_t) & BM_USBDCD_CLOCK_CLOCK_UNIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLOCK_UNIT field to a new value.
#define BW_USBDCD_CLOCK_CLOCK_UNIT(x, v) (BITBAND_ACCESS32(HW_USBDCD_CLOCK_ADDR(x), BP_USBDCD_CLOCK_CLOCK_UNIT) = (v))
#endif
//@}

/*!
 * @name Register USBDCD_CLOCK, field CLOCK_SPEED[11:2] (RW)
 *
 * The unit of measure is programmed in CLOCK_UNIT. The valid range is from 1 to
 * 1023 when clock unit is MHz and 4 to 1023 when clock unit is kHz. Examples
 * with CLOCK_UNIT = 1: For 48 MHz: 0b00_0011_0000 (48) (Default) For 24 MHz:
 * 0b00_0001_1000 (24) Examples with CLOCK_UNIT = 0: For 100 kHz: 0b00_0110_0100 (100)
 * For 500 kHz: 0b01_1111_0100 (500)
 */
//@{
#define BP_USBDCD_CLOCK_CLOCK_SPEED (2U)   //!< Bit position for USBDCD_CLOCK_CLOCK_SPEED.
#define BM_USBDCD_CLOCK_CLOCK_SPEED (0x00000FFCU) //!< Bit mask for USBDCD_CLOCK_CLOCK_SPEED.
#define BS_USBDCD_CLOCK_CLOCK_SPEED (10U)  //!< Bit field size in bits for USBDCD_CLOCK_CLOCK_SPEED.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_CLOCK_CLOCK_SPEED field.
#define BR_USBDCD_CLOCK_CLOCK_SPEED(x) (HW_USBDCD_CLOCK(x).B.CLOCK_SPEED)
#endif

//! @brief Format value for bitfield USBDCD_CLOCK_CLOCK_SPEED.
#define BF_USBDCD_CLOCK_CLOCK_SPEED(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_CLOCK_CLOCK_SPEED), uint32_t) & BM_USBDCD_CLOCK_CLOCK_SPEED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLOCK_SPEED field to a new value.
#define BW_USBDCD_CLOCK_CLOCK_SPEED(x, v) (HW_USBDCD_CLOCK_WR(x, (HW_USBDCD_CLOCK_RD(x) & ~BM_USBDCD_CLOCK_CLOCK_SPEED) | BF_USBDCD_CLOCK_CLOCK_SPEED(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_STATUS - Status register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_STATUS - Status register (RO)
 *
 * Reset value: 0x00000000U
 *
 * Provides the current state of the module for system software monitoring.
 */
typedef union _hw_usbdcd_status
{
    uint32_t U;
    struct _hw_usbdcd_status_bitfields
    {
        uint32_t RESERVED0 : 16;       //!< [15:0]
        uint32_t SEQ_RES : 2;          //!< [17:16] Charger Detection Sequence Results
        uint32_t SEQ_STAT : 2;         //!< [19:18] Charger Detection Sequence Status
        uint32_t ERR : 1;              //!< [20] Error Flag
        uint32_t TO : 1;               //!< [21] Timeout Flag
        uint32_t ACTIVE : 1;           //!< [22] Active Status Indicator
        uint32_t RESERVED1 : 9;        //!< [31:23]
    } B;
} hw_usbdcd_status_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_STATUS register
 */
//@{
#define HW_USBDCD_STATUS_ADDR(x) (REGS_USBDCD_BASE(x) + 0x8U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_STATUS(x)      (*(__I hw_usbdcd_status_t *) HW_USBDCD_STATUS_ADDR(x))
#define HW_USBDCD_STATUS_RD(x)   (HW_USBDCD_STATUS(x).U)
#endif
//@}

/*
 * Constants & macros for individual USBDCD_STATUS bitfields
 */

/*!
 * @name Register USBDCD_STATUS, field SEQ_RES[17:16] (RO)
 *
 * Reports how the charger detection is attached.
 *
 * Values:
 * - 00 - No results to report.
 * - 01 - Attached to a standard host. Must comply with USB 2.0 by drawing only
 *     2.5 mA (max) until connected.
 * - 10 - Attached to a charging port. The exact meaning depends on bit 18: 0:
 *     Attached to either a charging host or a dedicated charger. The charger type
 *     detection has not completed. 1: Attached to a charging host. The charger
 *     type detection has completed.
 * - 11 - Attached to a dedicated charger.
 */
//@{
#define BP_USBDCD_STATUS_SEQ_RES (16U)     //!< Bit position for USBDCD_STATUS_SEQ_RES.
#define BM_USBDCD_STATUS_SEQ_RES (0x00030000U) //!< Bit mask for USBDCD_STATUS_SEQ_RES.
#define BS_USBDCD_STATUS_SEQ_RES (2U)      //!< Bit field size in bits for USBDCD_STATUS_SEQ_RES.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_STATUS_SEQ_RES field.
#define BR_USBDCD_STATUS_SEQ_RES(x) (HW_USBDCD_STATUS(x).B.SEQ_RES)
#endif
//@}

/*!
 * @name Register USBDCD_STATUS, field SEQ_STAT[19:18] (RO)
 *
 * Indicates the status of the charger detection sequence.
 *
 * Values:
 * - 00 - The module is either not enabled, or the module is enabled but the
 *     data pins have not yet been detected.
 * - 01 - Data pin contact detection is complete.
 * - 10 - Charging port detection is complete.
 * - 11 - Charger type detection is complete.
 */
//@{
#define BP_USBDCD_STATUS_SEQ_STAT (18U)    //!< Bit position for USBDCD_STATUS_SEQ_STAT.
#define BM_USBDCD_STATUS_SEQ_STAT (0x000C0000U) //!< Bit mask for USBDCD_STATUS_SEQ_STAT.
#define BS_USBDCD_STATUS_SEQ_STAT (2U)     //!< Bit field size in bits for USBDCD_STATUS_SEQ_STAT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_STATUS_SEQ_STAT field.
#define BR_USBDCD_STATUS_SEQ_STAT(x) (HW_USBDCD_STATUS(x).B.SEQ_STAT)
#endif
//@}

/*!
 * @name Register USBDCD_STATUS, field ERR[20] (RO)
 *
 * Indicates whether there is an error in the detection sequence.
 *
 * Values:
 * - 0 - No sequence errors.
 * - 1 - Error in the detection sequence. See the SEQ_STAT field to determine
 *     the phase in which the error occurred.
 */
//@{
#define BP_USBDCD_STATUS_ERR (20U)         //!< Bit position for USBDCD_STATUS_ERR.
#define BM_USBDCD_STATUS_ERR (0x00100000U) //!< Bit mask for USBDCD_STATUS_ERR.
#define BS_USBDCD_STATUS_ERR (1U)          //!< Bit field size in bits for USBDCD_STATUS_ERR.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_STATUS_ERR field.
#define BR_USBDCD_STATUS_ERR(x) (BITBAND_ACCESS32(HW_USBDCD_STATUS_ADDR(x), BP_USBDCD_STATUS_ERR))
#endif
//@}

/*!
 * @name Register USBDCD_STATUS, field TO[21] (RO)
 *
 * Indicates whether the detection sequence has passed the timeout threshhold.
 *
 * Values:
 * - 0 - The detection sequence has not been running for over 1 s.
 * - 1 - It has been over 1 s since the data pin contact was detected and
 *     debounced.
 */
//@{
#define BP_USBDCD_STATUS_TO  (21U)         //!< Bit position for USBDCD_STATUS_TO.
#define BM_USBDCD_STATUS_TO  (0x00200000U) //!< Bit mask for USBDCD_STATUS_TO.
#define BS_USBDCD_STATUS_TO  (1U)          //!< Bit field size in bits for USBDCD_STATUS_TO.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_STATUS_TO field.
#define BR_USBDCD_STATUS_TO(x) (BITBAND_ACCESS32(HW_USBDCD_STATUS_ADDR(x), BP_USBDCD_STATUS_TO))
#endif
//@}

/*!
 * @name Register USBDCD_STATUS, field ACTIVE[22] (RO)
 *
 * Indicates whether the sequence is running.
 *
 * Values:
 * - 0 - The sequence is not running.
 * - 1 - The sequence is running.
 */
//@{
#define BP_USBDCD_STATUS_ACTIVE (22U)      //!< Bit position for USBDCD_STATUS_ACTIVE.
#define BM_USBDCD_STATUS_ACTIVE (0x00400000U) //!< Bit mask for USBDCD_STATUS_ACTIVE.
#define BS_USBDCD_STATUS_ACTIVE (1U)       //!< Bit field size in bits for USBDCD_STATUS_ACTIVE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_STATUS_ACTIVE field.
#define BR_USBDCD_STATUS_ACTIVE(x) (BITBAND_ACCESS32(HW_USBDCD_STATUS_ADDR(x), BP_USBDCD_STATUS_ACTIVE))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_TIMER0 - TIMER0 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_TIMER0 - TIMER0 register (RW)
 *
 * Reset value: 0x00100000U
 *
 * TIMER0 has an TSEQ_INIT field that represents the system latency in ms.
 * Latency is measured from the time when VBUS goes active until the time system
 * software initiates charger detection sequence in USBDCD module. When software sets
 * the CONTROL[START] bit, the Unit Connection Timer (TUNITCON) is initialized
 * with the value of TSEQ_INIT. Valid values are 0-1023, however the USB Battery
 * Charging Specification requires the entire sequence, including TSEQ_INIT, to be
 * completed in 1s or less.
 */
typedef union _hw_usbdcd_timer0
{
    uint32_t U;
    struct _hw_usbdcd_timer0_bitfields
    {
        uint32_t TUNITCON : 12;        //!< [11:0] Unit Connection Timer Elapse (in
                                       //! ms)
        uint32_t RESERVED0 : 4;        //!< [15:12]
        uint32_t TSEQ_INIT : 10;       //!< [25:16] Sequence Initiation Time
        uint32_t RESERVED1 : 6;        //!< [31:26]
    } B;
} hw_usbdcd_timer0_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_TIMER0 register
 */
//@{
#define HW_USBDCD_TIMER0_ADDR(x) (REGS_USBDCD_BASE(x) + 0x10U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_TIMER0(x)      (*(__IO hw_usbdcd_timer0_t *) HW_USBDCD_TIMER0_ADDR(x))
#define HW_USBDCD_TIMER0_RD(x)   (HW_USBDCD_TIMER0(x).U)
#define HW_USBDCD_TIMER0_WR(x, v) (HW_USBDCD_TIMER0(x).U = (v))
#define HW_USBDCD_TIMER0_SET(x, v) (HW_USBDCD_TIMER0_WR(x, HW_USBDCD_TIMER0_RD(x) |  (v)))
#define HW_USBDCD_TIMER0_CLR(x, v) (HW_USBDCD_TIMER0_WR(x, HW_USBDCD_TIMER0_RD(x) & ~(v)))
#define HW_USBDCD_TIMER0_TOG(x, v) (HW_USBDCD_TIMER0_WR(x, HW_USBDCD_TIMER0_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_TIMER0 bitfields
 */

/*!
 * @name Register USBDCD_TIMER0, field TUNITCON[11:0] (RO)
 *
 * Displays the amount of elapsed time since the event of setting the START bit
 * plus the value of TSEQ_INIT. The timer is automatically initialized with the
 * value of TSEQ_INIT before starting to count. This timer enables compliance with
 * the maximum time allowed to connect T UNIT_CON under the USB Battery Charging
 * Specification. If the timer reaches the one second limit, the module triggers
 * an interrupt and sets the error flag STATUS[ERR]. The timer continues
 * counting throughout the charger detection sequence, even when control has been passed
 * to software. As long as the module is active, the timer continues to count
 * until it reaches the maximum value of 0xFFF (4095 ms). The timer does not
 * rollover to zero. A software reset clears the timer.
 */
//@{
#define BP_USBDCD_TIMER0_TUNITCON (0U)     //!< Bit position for USBDCD_TIMER0_TUNITCON.
#define BM_USBDCD_TIMER0_TUNITCON (0x00000FFFU) //!< Bit mask for USBDCD_TIMER0_TUNITCON.
#define BS_USBDCD_TIMER0_TUNITCON (12U)    //!< Bit field size in bits for USBDCD_TIMER0_TUNITCON.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER0_TUNITCON field.
#define BR_USBDCD_TIMER0_TUNITCON(x) (HW_USBDCD_TIMER0(x).B.TUNITCON)
#endif
//@}

/*!
 * @name Register USBDCD_TIMER0, field TSEQ_INIT[25:16] (RW)
 *
 * TSEQ_INIT represents the system latency (in ms) measured from the time VBUS
 * goes active to the time system software initiates the charger detection
 * sequence in the USBDCD module. When software sets the CONTROL[START] bit, the Unit
 * Connection Timer (TUNITCON) is initialized with the value of TSEQ_INIT. Valid
 * values are 0-1023, but the USB Battery Charging Specification requires the
 * entire sequence, including TSEQ_INIT, to be completed in 1s or less.
 */
//@{
#define BP_USBDCD_TIMER0_TSEQ_INIT (16U)   //!< Bit position for USBDCD_TIMER0_TSEQ_INIT.
#define BM_USBDCD_TIMER0_TSEQ_INIT (0x03FF0000U) //!< Bit mask for USBDCD_TIMER0_TSEQ_INIT.
#define BS_USBDCD_TIMER0_TSEQ_INIT (10U)   //!< Bit field size in bits for USBDCD_TIMER0_TSEQ_INIT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER0_TSEQ_INIT field.
#define BR_USBDCD_TIMER0_TSEQ_INIT(x) (HW_USBDCD_TIMER0(x).B.TSEQ_INIT)
#endif

//! @brief Format value for bitfield USBDCD_TIMER0_TSEQ_INIT.
#define BF_USBDCD_TIMER0_TSEQ_INIT(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER0_TSEQ_INIT), uint32_t) & BM_USBDCD_TIMER0_TSEQ_INIT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TSEQ_INIT field to a new value.
#define BW_USBDCD_TIMER0_TSEQ_INIT(x, v) (HW_USBDCD_TIMER0_WR(x, (HW_USBDCD_TIMER0_RD(x) & ~BM_USBDCD_TIMER0_TSEQ_INIT) | BF_USBDCD_TIMER0_TSEQ_INIT(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_TIMER1 - TIMER1 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_TIMER1 - TIMER1 register (RW)
 *
 * Reset value: 0x000A0028U
 *
 * TIMER1 contains timing parameters. Note that register values can be written
 * that are not compliant with the USB Battery Charging Specification, so care
 * should be taken when overwriting the default values.
 */
typedef union _hw_usbdcd_timer1
{
    uint32_t U;
    struct _hw_usbdcd_timer1_bitfields
    {
        uint32_t TVDPSRC_ON : 10;      //!< [9:0] Time Period Comparator Enabled
        uint32_t RESERVED0 : 6;        //!< [15:10]
        uint32_t TDCD_DBNC : 10;       //!< [25:16] Time Period to Debounce D+
                                       //! Signal
        uint32_t RESERVED1 : 6;        //!< [31:26]
    } B;
} hw_usbdcd_timer1_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_TIMER1 register
 */
//@{
#define HW_USBDCD_TIMER1_ADDR(x) (REGS_USBDCD_BASE(x) + 0x14U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_TIMER1(x)      (*(__IO hw_usbdcd_timer1_t *) HW_USBDCD_TIMER1_ADDR(x))
#define HW_USBDCD_TIMER1_RD(x)   (HW_USBDCD_TIMER1(x).U)
#define HW_USBDCD_TIMER1_WR(x, v) (HW_USBDCD_TIMER1(x).U = (v))
#define HW_USBDCD_TIMER1_SET(x, v) (HW_USBDCD_TIMER1_WR(x, HW_USBDCD_TIMER1_RD(x) |  (v)))
#define HW_USBDCD_TIMER1_CLR(x, v) (HW_USBDCD_TIMER1_WR(x, HW_USBDCD_TIMER1_RD(x) & ~(v)))
#define HW_USBDCD_TIMER1_TOG(x, v) (HW_USBDCD_TIMER1_WR(x, HW_USBDCD_TIMER1_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_TIMER1 bitfields
 */

/*!
 * @name Register USBDCD_TIMER1, field TVDPSRC_ON[9:0] (RW)
 *
 * This timing parameter is used after detection of the data pin. See "Charging
 * Port Detection". Valid values are 1-1023, but the USB Battery Charging
 * Specification requires a minimum value of 40 ms.
 */
//@{
#define BP_USBDCD_TIMER1_TVDPSRC_ON (0U)   //!< Bit position for USBDCD_TIMER1_TVDPSRC_ON.
#define BM_USBDCD_TIMER1_TVDPSRC_ON (0x000003FFU) //!< Bit mask for USBDCD_TIMER1_TVDPSRC_ON.
#define BS_USBDCD_TIMER1_TVDPSRC_ON (10U)  //!< Bit field size in bits for USBDCD_TIMER1_TVDPSRC_ON.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER1_TVDPSRC_ON field.
#define BR_USBDCD_TIMER1_TVDPSRC_ON(x) (HW_USBDCD_TIMER1(x).B.TVDPSRC_ON)
#endif

//! @brief Format value for bitfield USBDCD_TIMER1_TVDPSRC_ON.
#define BF_USBDCD_TIMER1_TVDPSRC_ON(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER1_TVDPSRC_ON), uint32_t) & BM_USBDCD_TIMER1_TVDPSRC_ON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TVDPSRC_ON field to a new value.
#define BW_USBDCD_TIMER1_TVDPSRC_ON(x, v) (HW_USBDCD_TIMER1_WR(x, (HW_USBDCD_TIMER1_RD(x) & ~BM_USBDCD_TIMER1_TVDPSRC_ON) | BF_USBDCD_TIMER1_TVDPSRC_ON(v)))
#endif
//@}

/*!
 * @name Register USBDCD_TIMER1, field TDCD_DBNC[25:16] (RW)
 *
 * Sets the time period (ms) to debounce the D+ signal during the data pin
 * contact detection phase. See "Debouncing the data pin contact" Valid values are
 * 1-1023, but the USB Battery Charging Specification requires a minimum value of 10
 * ms.
 */
//@{
#define BP_USBDCD_TIMER1_TDCD_DBNC (16U)   //!< Bit position for USBDCD_TIMER1_TDCD_DBNC.
#define BM_USBDCD_TIMER1_TDCD_DBNC (0x03FF0000U) //!< Bit mask for USBDCD_TIMER1_TDCD_DBNC.
#define BS_USBDCD_TIMER1_TDCD_DBNC (10U)   //!< Bit field size in bits for USBDCD_TIMER1_TDCD_DBNC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER1_TDCD_DBNC field.
#define BR_USBDCD_TIMER1_TDCD_DBNC(x) (HW_USBDCD_TIMER1(x).B.TDCD_DBNC)
#endif

//! @brief Format value for bitfield USBDCD_TIMER1_TDCD_DBNC.
#define BF_USBDCD_TIMER1_TDCD_DBNC(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER1_TDCD_DBNC), uint32_t) & BM_USBDCD_TIMER1_TDCD_DBNC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TDCD_DBNC field to a new value.
#define BW_USBDCD_TIMER1_TDCD_DBNC(x, v) (HW_USBDCD_TIMER1_WR(x, (HW_USBDCD_TIMER1_RD(x) & ~BM_USBDCD_TIMER1_TDCD_DBNC) | BF_USBDCD_TIMER1_TDCD_DBNC(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_USBDCD_TIMER2_BC11 - TIMER2_BC11 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_TIMER2_BC11 - TIMER2_BC11 register (RW)
 *
 * Reset value: 0x00280001U
 *
 * TIMER2_BC11 contains timing parameters for USB Battery Charging
 * Specification, v1.1. Register values can be written that are not compliant with the USB
 * Battery Charging Specification, so care should be taken when overwriting the
 * default values.
 */
typedef union _hw_usbdcd_timer2_bc11
{
    uint32_t U;
    struct _hw_usbdcd_timer2_bc11_bitfields
    {
        uint32_t CHECK_DM : 4;         //!< [3:0] Time Before Check of D- Line
        uint32_t RESERVED0 : 12;       //!< [15:4]
        uint32_t TVDPSRC_CON : 10;     //!< [25:16] Time Period Before Enabling
                                       //! D+ Pullup
        uint32_t RESERVED1 : 6;        //!< [31:26]
    } B;
} hw_usbdcd_timer2_bc11_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_TIMER2_BC11 register
 */
//@{
#define HW_USBDCD_TIMER2_BC11_ADDR(x) (REGS_USBDCD_BASE(x) + 0x18U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_TIMER2_BC11(x) (*(__IO hw_usbdcd_timer2_bc11_t *) HW_USBDCD_TIMER2_BC11_ADDR(x))
#define HW_USBDCD_TIMER2_BC11_RD(x) (HW_USBDCD_TIMER2_BC11(x).U)
#define HW_USBDCD_TIMER2_BC11_WR(x, v) (HW_USBDCD_TIMER2_BC11(x).U = (v))
#define HW_USBDCD_TIMER2_BC11_SET(x, v) (HW_USBDCD_TIMER2_BC11_WR(x, HW_USBDCD_TIMER2_BC11_RD(x) |  (v)))
#define HW_USBDCD_TIMER2_BC11_CLR(x, v) (HW_USBDCD_TIMER2_BC11_WR(x, HW_USBDCD_TIMER2_BC11_RD(x) & ~(v)))
#define HW_USBDCD_TIMER2_BC11_TOG(x, v) (HW_USBDCD_TIMER2_BC11_WR(x, HW_USBDCD_TIMER2_BC11_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_TIMER2_BC11 bitfields
 */

/*!
 * @name Register USBDCD_TIMER2_BC11, field CHECK_DM[3:0] (RW)
 *
 * Sets the amount of time (in ms) that the module waits after the device
 * connects to the USB bus until checking the state of the D- line to determine the
 * type of charging port. See "Charger Type Detection." Valid values are 1-15ms.
 */
//@{
#define BP_USBDCD_TIMER2_BC11_CHECK_DM (0U) //!< Bit position for USBDCD_TIMER2_BC11_CHECK_DM.
#define BM_USBDCD_TIMER2_BC11_CHECK_DM (0x0000000FU) //!< Bit mask for USBDCD_TIMER2_BC11_CHECK_DM.
#define BS_USBDCD_TIMER2_BC11_CHECK_DM (4U) //!< Bit field size in bits for USBDCD_TIMER2_BC11_CHECK_DM.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER2_BC11_CHECK_DM field.
#define BR_USBDCD_TIMER2_BC11_CHECK_DM(x) (HW_USBDCD_TIMER2_BC11(x).B.CHECK_DM)
#endif

//! @brief Format value for bitfield USBDCD_TIMER2_BC11_CHECK_DM.
#define BF_USBDCD_TIMER2_BC11_CHECK_DM(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER2_BC11_CHECK_DM), uint32_t) & BM_USBDCD_TIMER2_BC11_CHECK_DM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CHECK_DM field to a new value.
#define BW_USBDCD_TIMER2_BC11_CHECK_DM(x, v) (HW_USBDCD_TIMER2_BC11_WR(x, (HW_USBDCD_TIMER2_BC11_RD(x) & ~BM_USBDCD_TIMER2_BC11_CHECK_DM) | BF_USBDCD_TIMER2_BC11_CHECK_DM(v)))
#endif
//@}

/*!
 * @name Register USBDCD_TIMER2_BC11, field TVDPSRC_CON[25:16] (RW)
 *
 * Sets the time period (ms) that the module waits after charging port detection
 * before system software must enable the D+ pullup to connect to the USB host.
 * Valid values are 1-1023, but the USB Battery Charging Specification requires a
 * minimum value of 40 ms.
 */
//@{
#define BP_USBDCD_TIMER2_BC11_TVDPSRC_CON (16U) //!< Bit position for USBDCD_TIMER2_BC11_TVDPSRC_CON.
#define BM_USBDCD_TIMER2_BC11_TVDPSRC_CON (0x03FF0000U) //!< Bit mask for USBDCD_TIMER2_BC11_TVDPSRC_CON.
#define BS_USBDCD_TIMER2_BC11_TVDPSRC_CON (10U) //!< Bit field size in bits for USBDCD_TIMER2_BC11_TVDPSRC_CON.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER2_BC11_TVDPSRC_CON field.
#define BR_USBDCD_TIMER2_BC11_TVDPSRC_CON(x) (HW_USBDCD_TIMER2_BC11(x).B.TVDPSRC_CON)
#endif

//! @brief Format value for bitfield USBDCD_TIMER2_BC11_TVDPSRC_CON.
#define BF_USBDCD_TIMER2_BC11_TVDPSRC_CON(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER2_BC11_TVDPSRC_CON), uint32_t) & BM_USBDCD_TIMER2_BC11_TVDPSRC_CON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TVDPSRC_CON field to a new value.
#define BW_USBDCD_TIMER2_BC11_TVDPSRC_CON(x, v) (HW_USBDCD_TIMER2_BC11_WR(x, (HW_USBDCD_TIMER2_BC11_RD(x) & ~BM_USBDCD_TIMER2_BC11_TVDPSRC_CON) | BF_USBDCD_TIMER2_BC11_TVDPSRC_CON(v)))
#endif
//@}
//-------------------------------------------------------------------------------------------
// HW_USBDCD_TIMER2_BC12 - TIMER2_BC12 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBDCD_TIMER2_BC12 - TIMER2_BC12 register (RW)
 *
 * Reset value: 0x00010028U
 *
 * TIMER2_BC12 contains timing parameters for USB Battery Charging
 * Specification, v1.2. Register values can be written that are not compliant with the USB
 * Battery Charging Specification, so care should be taken when overwriting the
 * default values.
 */
typedef union _hw_usbdcd_timer2_bc12
{
    uint32_t U;
    struct _hw_usbdcd_timer2_bc12_bitfields
    {
        uint32_t TVDMSRC_ON : 10;      //!< [9:0]
        uint32_t RESERVED0 : 6;        //!< [15:10]
        uint32_t TWAIT_AFTER_PRD : 10; //!< [25:16]
        uint32_t RESERVED1 : 6;        //!< [31:26]
    } B;
} hw_usbdcd_timer2_bc12_t;
#endif

/*!
 * @name Constants and macros for entire USBDCD_TIMER2_BC12 register
 */
//@{
#define HW_USBDCD_TIMER2_BC12_ADDR(x) (REGS_USBDCD_BASE(x) + 0x18U)

#ifndef __LANGUAGE_ASM__
#define HW_USBDCD_TIMER2_BC12(x) (*(__IO hw_usbdcd_timer2_bc12_t *) HW_USBDCD_TIMER2_BC12_ADDR(x))
#define HW_USBDCD_TIMER2_BC12_RD(x) (HW_USBDCD_TIMER2_BC12(x).U)
#define HW_USBDCD_TIMER2_BC12_WR(x, v) (HW_USBDCD_TIMER2_BC12(x).U = (v))
#define HW_USBDCD_TIMER2_BC12_SET(x, v) (HW_USBDCD_TIMER2_BC12_WR(x, HW_USBDCD_TIMER2_BC12_RD(x) |  (v)))
#define HW_USBDCD_TIMER2_BC12_CLR(x, v) (HW_USBDCD_TIMER2_BC12_WR(x, HW_USBDCD_TIMER2_BC12_RD(x) & ~(v)))
#define HW_USBDCD_TIMER2_BC12_TOG(x, v) (HW_USBDCD_TIMER2_BC12_WR(x, HW_USBDCD_TIMER2_BC12_RD(x) ^  (v)))
#endif
//@}

/*
 * Constants & macros for individual USBDCD_TIMER2_BC12 bitfields
 */

/*!
 * @name Register USBDCD_TIMER2_BC12, field TVDMSRC_ON[9:0] (RW)
 *
 * Sets the amount of time (in ms) that the module enables the VDM_SRC. Valid
 * values are 0-40ms.
 */
//@{
#define BP_USBDCD_TIMER2_BC12_TVDMSRC_ON (0U) //!< Bit position for USBDCD_TIMER2_BC12_TVDMSRC_ON.
#define BM_USBDCD_TIMER2_BC12_TVDMSRC_ON (0x000003FFU) //!< Bit mask for USBDCD_TIMER2_BC12_TVDMSRC_ON.
#define BS_USBDCD_TIMER2_BC12_TVDMSRC_ON (10U) //!< Bit field size in bits for USBDCD_TIMER2_BC12_TVDMSRC_ON.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER2_BC12_TVDMSRC_ON field.
#define BR_USBDCD_TIMER2_BC12_TVDMSRC_ON(x) (HW_USBDCD_TIMER2_BC12(x).B.TVDMSRC_ON)
#endif

//! @brief Format value for bitfield USBDCD_TIMER2_BC12_TVDMSRC_ON.
#define BF_USBDCD_TIMER2_BC12_TVDMSRC_ON(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER2_BC12_TVDMSRC_ON), uint32_t) & BM_USBDCD_TIMER2_BC12_TVDMSRC_ON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TVDMSRC_ON field to a new value.
#define BW_USBDCD_TIMER2_BC12_TVDMSRC_ON(x, v) (HW_USBDCD_TIMER2_BC12_WR(x, (HW_USBDCD_TIMER2_BC12_RD(x) & ~BM_USBDCD_TIMER2_BC12_TVDMSRC_ON) | BF_USBDCD_TIMER2_BC12_TVDMSRC_ON(v)))
#endif
//@}

/*!
 * @name Register USBDCD_TIMER2_BC12, field TWAIT_AFTER_PRD[25:16] (RW)
 *
 * Sets the amount of time (in ms) that the module waits after primary detection
 * before start to secondary detection. Valid values are 1-1023ms. Default is
 * 1ms.
 */
//@{
#define BP_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD (16U) //!< Bit position for USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD.
#define BM_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD (0x03FF0000U) //!< Bit mask for USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD.
#define BS_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD (10U) //!< Bit field size in bits for USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD field.
#define BR_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD(x) (HW_USBDCD_TIMER2_BC12(x).B.TWAIT_AFTER_PRD)
#endif

//! @brief Format value for bitfield USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD.
#define BF_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD), uint32_t) & BM_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TWAIT_AFTER_PRD field to a new value.
#define BW_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD(x, v) (HW_USBDCD_TIMER2_BC12_WR(x, (HW_USBDCD_TIMER2_BC12_RD(x) & ~BM_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD) | BF_USBDCD_TIMER2_BC12_TWAIT_AFTER_PRD(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_usbdcd_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All USBDCD module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_usbdcd
{
    __IO hw_usbdcd_control_t CONTROL;      //!< [0x0] Control register
    __IO hw_usbdcd_clock_t CLOCK;          //!< [0x4] Clock register
    __I hw_usbdcd_status_t STATUS;         //!< [0x8] Status register
    uint8_t _reserved0[4];
    __IO hw_usbdcd_timer0_t TIMER0;        //!< [0x10] TIMER0 register
    __IO hw_usbdcd_timer1_t TIMER1;        //!< [0x14] TIMER1 register
    union {
        __IO hw_usbdcd_timer2_bc11_t TIMER2_BC11; //!< [0x18] TIMER2_BC11 register
        __IO hw_usbdcd_timer2_bc12_t TIMER2_BC12; //!< [0x18] TIMER2_BC12 register
    };
} hw_usbdcd_t;
#pragma pack()

//! @brief Macro to access all USBDCD registers.
//! @param x USBDCD instance number.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_USBDCD(0)</code>.
#define HW_USBDCD(x)   (*(hw_usbdcd_t *) REGS_USBDCD_BASE(x))
#endif

#endif // __HW_USBDCD_REGISTERS_H__
// v22/130726/0.9
// EOF
