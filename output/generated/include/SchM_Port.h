/**
 * \file
 *
 * \brief Autosar SchM
 *
 * This file contains the implementation of the Autosar
 * module SchM.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined SCHM_PORT_H)
#define SCHM_PORT_H
/*==================[includes]==============================================*/

#include <TSAutosar.h>     /* EB specific standard types */
#include <SchM_Api.h>      /* SchM API */
#include <Os.h>




/*==================[macros]================================================*/
/* exclusive area/instance IDs/literals */
#define SCHM_PORT_INSTANCE_0 0U
#define SCHM_PORT_IORGR_RSC 0U
#define SCHM_PORT_CNTRLRGR_RSC 1U



/** \brief Number of instances for this module */
#define SCHM_NUM_INSTANCES_PORT   1U

/** \brief Maximum number of activation points assigned to an instance */
#define SCHM_NUM_ACTIVATION_POINTS_PORT 0U

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/
#define SCHM_START_SEC_CONST_UNSPECIFIED
#include <MemMap.h>


#define SCHM_STOP_SEC_CONST_UNSPECIFIED
#include <MemMap.h>
/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/
#define SCHM_START_SEC_VAR_UNSPECIFIED
#include <MemMap.h>


#define SCHM_STOP_SEC_VAR_UNSPECIFIED
#include <MemMap.h>
/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/* AUTOSAR Memory Mapping - start section for code */
#define SCHM_START_SEC_CODE
#include <MemMap.h>
/**
 ** \brief This function is called by the Port module to enter a critical
 ** section
 **
 **
 ** \param[in]  InstanceId ID of the Port module
 ** \param[in]  ExclusiveArea identifier of the exclusive area
 **
 **/
extern FUNC(void,SCHM_CODE) SchM_Enter_Port
(
  uint8 InstanceId,
  uint8 ExclusiveArea
);


/**
 ** \brief This function is called by the Port module to leave a critical
 ** section
 **
 **
 ** \param[in]  InstanceId ID of the Port module
 ** \param[in]  ExclusiveArea identifier of the exclusive area
 **
 **/
extern FUNC(void,SCHM_CODE) SchM_Exit_Port
(
  uint8 InstanceId,
  uint8 ExclusiveArea
);

/**
 ** \brief This function is called by the Port module to trigger a
 ** main function
 **
 **
 ** \param[in]  InstanceId ID of the Port module
 ** \param[in]  ActivationPoint ID of the activation point
 **
 **/
extern FUNC(SchM_ReturnType, SCHM_CODE) SchM_ActMainFunction_Port
(
  uint8 InstanceId,
  uint8 ActivationPoint
);

/**
 ** \brief This function is called by the Port module to cancel the
 ** activation of a main function
 **
 **
 ** \param[in]  InstanceId ID of the Port module
 ** \param[in]  ActivationPoint ID of the activation point
 **
 **/
extern FUNC(SchM_ReturnType, SCHM_CODE) SchM_CancelMainFunction_Port
(
  uint8 InstanceId,
  uint8 ActivationPoint
);

/* AUTOSAR Memory Mapping - end section for code */
#define SCHM_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function definitions]=========================*/

#endif /* if !defined( SCHM_PORT_H ) */
/*==================[end of file]===========================================*/
