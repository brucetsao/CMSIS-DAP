/*
 * Copyright (c) 2013, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _FLASH_H_
#define _FLASH_H_

#include "fsl_platform_status.h"
#include "src/fsl_flash_features.h"
#include "device/fsl_device_registers.h"
#include <stdint.h>
#include <stdbool.h>

//! @addtogroup flash
//! @{

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

//! @brief Flash driver status codes.
enum _flash_status
{
    kStatus_FlashSizeError = MAKE_STATUS(kStatusGroup_FlashDriver, 0),
    kStatus_FlashAlignmentError = MAKE_STATUS(kStatusGroup_FlashDriver, 1),
    kStatus_FlashAddressError = MAKE_STATUS(kStatusGroup_FlashDriver, 2),
    kStatus_FlashAccessError = MAKE_STATUS(kStatusGroup_FlashDriver, 3),
    kStatus_FlashProtectionViolation = MAKE_STATUS(kStatusGroup_FlashDriver, 4),
    kStatus_FlashCommandFailure = MAKE_STATUS(kStatusGroup_FlashDriver, 5),
    kStatus_FlashUnknownProperty = MAKE_STATUS(kStatusGroup_FlashDriver, 6)
};

//! @brief Enumeration for supported flash margin levels.
typedef enum _flash_margin_value {
    kFlashMargin_Normal,
    kFlashMargin_User,
    kFlashMargin_Factory
} flash_margin_value_t;

//! @brief Enumeration for the three possible flash security states.
typedef enum _flash_security_state {
    kFlashNotSecure,
    kFlashSecureBackdoorEnabled,
    kFlashSecureBackdoorDisabled
} flash_security_state_t;

//! @brief Enumeration for the three possible flash protection levels.
typedef enum _flash_protection_state {
    kFlashProtection_Unprotected,
    kFlashProtection_Protected,
    kFlashProtection_Mixed
} flash_protection_state_t;

//! @brief Enumeration for various flash properties.
typedef enum _flash_property {
    kFlashProperty_SectorSize,
    kFlashProperty_TotalFlashSize,
    kFlashProperty_BlockSize,
    kFlashProperty_BlockCount,
    kFlashProperty_FlashBlockBaseAddr
} flash_property_t;

//! @brief Flash driver state information.
//!
//! An instance of this structure is allocated by the user of the flash driver and
//! passed into each of the driver APIs.
typedef struct _flash_driver {
    uint32_t PFlashBlockBase;   //!< Base address of the first PFlash block
    uint32_t PFlashTotalSize;   //!< Size of all combined PFlash block.
    uint32_t PFlashBlockCount;  //!< Number of PFlash blocks.
    uint32_t PFlashSectorSize;  //!< Size in bytes of a sector of PFlash.
} flash_driver_t;

////////////////////////////////////////////////////////////////////////////////
// API
////////////////////////////////////////////////////////////////////////////////

#if defined(__cplusplus)
extern "C" {
#endif

//! @name Initialization
//@{

/*!
 * @brief Initializes global flash properties structure members
 *
 * This function checks and initializes Flash module for the other Flash APIs.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @return An error code or kStatus_Success
 */
status_t flash_init(flash_driver_t * driver);

//@}

//! @name Erasing
//@{

/*!
 * @brief Erases entire flash
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @return An error code or kStatus_Success
 */
status_t flash_erase_all(flash_driver_t * driver);

/*!
 * @brief Erases flash sectors encompassed by parameters passed into function
 *
 * This function erases the appropriate number of flash sectors based on the
 * desired start address and length.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param start The start address of the desired flash memory to be erased.
 *        The start address does not need to be sector aligned but must be word-aligned.
 * @param lengthInBytes The length, given in bytes (not words or long-words)
 *        to be erased. Must be word aligned.
 *
 * @return An error code or kStatus_Success
 */
status_t flash_erase(flash_driver_t * driver, uint32_t start, uint32_t lengthInBytes);

/*!
 * @brief Erases entire flash, including protected sectors.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @return An error code or kStatus_Success
 */
status_t flash_erase_all_unsecure(flash_driver_t * driver);

//@}

//! @name Programming
//@{

/*!
 * @brief Programs flash with data at locations passed in through parameters
 *
 * This function programs the flash memory with desired data for a given
 * flash area as determined by the start address and length.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param start The start address of the desired flash memory to be programmed. Must be
 *              word-aligned.
 * @param lengthInBytes The length, given in bytes (not words or long-words)
 *        to be programmed. Must be word-aligned.
 * @param src Pointer to the source buffer of data that is to be programmed
 *        into the flash.
 *
 * @return An error code or kStatus_Success
 */
status_t flash_program(flash_driver_t * driver, uint32_t start, uint32_t * src, uint32_t lengthInBytes);

//@}

//! @name Security
//@{

/*!
 * @brief Returns the security state via the pointer passed into the function
 *
 * This function retrieves the current Flash security status, including the
 * security enabling state and the backdoor key enabling state.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param state Pointer to the value returned for the current security status code:
 *          - #kFlashNotSecure
 *          - #kFlashSecureBackdoorEnabled
 *          - #kFlashSecureBackdoorDisabled
 *
 * @return kStatus_Success
 */
status_t flash_get_security_state(flash_driver_t * driver, flash_security_state_t * state);

/*!
 * @brief Allows user to bypass security with a backdoor key
 *
 * If the MCU is in secured state, this function will unsecure the MCU by
 * comparing the provided backdoor key with ones in the Flash Configuration
 * Field.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param backdoorKey Pointer to the user buffer containing the backdoor key.
 *
 * @return An error code or kStatus_Success
 */
status_t flash_security_bypass(flash_driver_t * driver, const uint8_t * backdoorKey);

//@}

//! @name Verification
//@{

/*!
 * @brief Verifies erasure of entire flash at specified margin level
 *
 * This function will check to see if the flash have been erased to the
 * specified read margin level.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param margin Read margin choice as follows: #kFlashMargin_Normal,
 *        #kFlashMargin_User, or #kFlashMargin_Factory
 *
 * @return An error code or kStatus_Success
 */
status_t flash_verify_erase_all(flash_driver_t * driver, flash_margin_value_t margin);

/*!
 * @brief Verifies erasure of desired flash area at specified margin level
 *
 * This function will check the appropriate number of flash sectors based on
 * the desired start address and length to see if the flash have been erased
 * to the specified read margin level.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param start The start address of the desired flash memory to be verified.
 *        The start address does not need to be sector aligned but must be word-aligned.
 * @param lengthInBytes The length, given in bytes (not words or long-words)
 *        to be verified. Must be word-aligned.
 * @param margin Read margin choice as follows: #kFlashMargin_Normal,
 *        #kFlashMargin_User, or #kFlashMargin_Factory
 *
 * @return An error code or kStatus_Success
 */
status_t flash_verify_erase(flash_driver_t * driver, uint32_t start, uint32_t lengthInBytes, flash_margin_value_t margin);

/*!
 * @brief Verifies programming of desired flash area at specified margin level
 *
 * This function verifies the data programed in the flash memory using the
 * Flash Program Check Command and compares it with expected data for a given
 * flash area as determined by the start address and length.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param start The start address of the desired flash memory to be verified. Must be word-aligned.
 * @param lengthInBytes The length, given in bytes (not words or long-words)
 *        to be verified. Must be word-aligned.
 * @param expectedData Pointer to the expected data that is to be
 *        verified against.
 * @param margin Read margin choice as follows: kFlashMargin_User or
 *        kFlashMargin_Factory
 * @param failedAddress Pointer to returned failing address.
 * @param failedData Pointer to returned failing data.  Some derivitives do
 *        not included failed data as part of the FCCOBx registers.  In this
 *        case, zeros are returned upon failure.
 *
 * @return An error code or kStatus_Success
 */
status_t flash_verify_program(flash_driver_t * driver, uint32_t start, uint32_t lengthInBytes,
                              const uint8_t * expectedData, flash_margin_value_t margin,
                              uint32_t * failedAddress, uint8_t * failedData);

//@}

//! @name Protection
//@{

/*!
 * @brief Returns the protection state of desired flash area via the pointer passed into the function
 *
 * This function retrieves the current Flash protect status for a given
 * flash area as determined by the start address and length.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param start The start address of the desired flash memory to be checked. Must be word-aligned.
 * @param lengthInBytes The length, given in bytes (not words or long-words)
 *        to be checked.  Must be word-aligned.
 * @param protection_state Pointer to the value returned for the current
 *        protection status code for the desired flash area.  The status code
 *        can be kFlashProtection_Unprotected, kFlashProtection_Protected, or
 *        kFlashProtection_Mixed.
 *
 * @return An error code or kStatus_Success
 */
status_t flash_is_protected(flash_driver_t * driver, uint32_t start, uint32_t lengthInBytes, flash_protection_state_t * protection_state);

//@}

//! @name Properties
//@{

/*!
 * @brief Returns the desired flash property.
 *
 * @param driver Pointer to storage for the driver runtime state.
 * @param whichProperty The desired property from the list of properties in
 *        enum flash_property_t
 * @param value Pointer to the value returned for the desired flash property
 *
 * @return An error code or kStatus_Success
 */
status_t flash_get_property(flash_driver_t * driver, flash_property_t whichProperty, uint32_t * value);

//@}

//! @name Cache
//@{

/*!
 * @brief Enable or disable the flash cache.
 */
static inline void flash_cache_enable(bool doEnable)
{
#if FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
    HW_MCM_PLACR.B.DFCC = (uint32_t)doEnable;
#else // FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
    HW_FMC_PFB0CR.B.B0DCE = (uint32_t)doEnable;
    HW_FMC_PFB0CR.B.B0ICE = (uint32_t)doEnable;
#if defined(HW_FMC_PFB1CR)
    HW_FMC_PFB1CR.B.B1DCE = (uint32_t)doEnable;
    HW_FMC_PFB1CR.B.B1ICE = (uint32_t)doEnable;
#endif // HW_FMC_PFB1CR
#endif // FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
}

/*!
 * @brief Clear the flash cache.
 */
static inline void flash_cache_clear(void)
{
#if FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
    HW_MCM_PLACR.B.CFCC = 1;
#else // FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
    HW_FMC_PFB0CR.B.CINV_WAY = 0xf;
#endif // FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS
}

//@}

#if defined(__cplusplus)
}
#endif

//! @}

#endif // _FLASH_H_
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
