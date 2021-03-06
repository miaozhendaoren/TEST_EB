#if !defined(RTE_CFG_H)
#define RTE_CFG_H
/**
  * \file Rte_Cfg.h
  *
  * \brief Autosar RTE Runtime Environment
  *
  * This file contains Rte configuration information
  *
  * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
  *
  * Copyright 2005-2010 Elektrobit Automotive GmbH
  * All rights exclusively reserved for Elektrobit Automotive GmbH,
  * unless expressly agreed to otherwise.
  */

 /*
  * This file has been automatically generated by
  * tresos RTE Generator Version 5.0.17
  * on Wed Feb 27 10:02:51 CET 2013. !!!IGNORE-LINE!!!
  */

 /* Misra deviations:
  * 1) Deviation against MISRA-C:1998 Rule 11 (required)
  *      and               MISRA-C:2004 Rule 5.1 (required)
  *      Description:
  *      Identifiers (internal and external) shall not rely
  *      on the significance of more than 31 characters.
  *      Reason:
  *      The defined RTE naming convention may result in
  *      identifiers with more than 31 characters.
  *      The compliance to this rule is under user's control.
  *
  */

 /* \addtogroup RTE Runtime Environment
  * @{ */

/*==================[inclusions]=============================================*/

/*==================[macros]=================================================*/

#define RTE_VFB_TRACE 1
#define Rte_CallHook_SWC_ModifyEcho_CS_EchoResult_SetCounterAndAdd_Start
#define Rte_SendHook_SWC_ModifyEcho_P_SpecialRequest_EventMessage_Start
#define Rte_ReadHook_SWC_ModifyEcho_P_NewCounterIn_CounterValue_Return
#define Rte_IWriteHook_SWC_ModifyEcho_P_EchoOut_CounterValue_Start
#define Rte_Runnable_SWC_ModifyEcho_R_ModifyEcho_Start
#define Rte_Runnable_SWC_ModifyEcho_R_ModifyEcho_Return
#define Rte_WriteHook_SWC_CyclicCounter_P_CounterOut_CounterValue_Start
#define Rte_ReceiveHook_SWC_CyclicCounter_P_SpecialHandling_EventMessage_Return
#define Rte_Runnable_SWC_CyclicCounter_R_SetCounterAndAdd_Start
#define Rte_Runnable_SWC_CyclicCounter_R_SetCounterAndAdd_Return
#define Rte_Runnable_SWC_CyclicCounter_R_Cyclic_Start
#define Rte_Runnable_SWC_CyclicCounter_R_Cyclic_Return

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/
/** @} doxygen end group definition */
#endif /* !defined(RTE_CFG_H) */
/*==================[end of file]============================================*/

