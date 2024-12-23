/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: QEI_READ.c
 *
 * Code generated for Simulink model 'QEI_READ'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct 16 15:03:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "QEI_READ.h"
#include "QEI_READ_types.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "QEI_READ_private.h"

/* Block signals (default storage) */
B_QEI_READ_T QEI_READ_B;

/* Block states (default storage) */
DW_QEI_READ_T QEI_READ_DW;

/* Real-time model */
static RT_MODEL_QEI_READ_T QEI_READ_M_;
RT_MODEL_QEI_READ_T *const QEI_READ_M = &QEI_READ_M_;

/* Forward declaration for local functions */
static void QEI_READ_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void QEI_READ_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void QEI_READ_step(void)
{
  /* MATLABSystem: '<Root>/Encoder' */
  QEI_READ_B.c = getTimerCounterValueForG4(QEI_READ_DW.obj.TimerHandle, false,
    NULL);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  QEI_READ_M->Timing.taskTime0 =
    ((time_T)(++QEI_READ_M->Timing.clockTick0)) * QEI_READ_M->Timing.stepSize0;
}

/* Model initialize function */
void QEI_READ_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(QEI_READ_M, -1);
  QEI_READ_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  QEI_READ_M->Sizes.checksums[0] = (258308877U);
  QEI_READ_M->Sizes.checksums[1] = (1193424423U);
  QEI_READ_M->Sizes.checksums[2] = (757401186U);
  QEI_READ_M->Sizes.checksums[3] = (2746882428U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    QEI_READ_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(QEI_READ_M->extModeInfo,
      &QEI_READ_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(QEI_READ_M->extModeInfo, QEI_READ_M->Sizes.checksums);
    rteiSetTPtr(QEI_READ_M->extModeInfo, rtmGetTPtr(QEI_READ_M));
  }

  /* Start for MATLABSystem: '<Root>/Encoder' */
  QEI_READ_DW.obj.isInitialized = 0;
  QEI_READ_DW.obj.matlabCodegenIsDeleted = false;
  QEI_READ_SystemCore_setup(&QEI_READ_DW.obj);
}

/* Model terminate function */
void QEI_READ_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder' */
  if (!QEI_READ_DW.obj.matlabCodegenIsDeleted) {
    QEI_READ_DW.obj.matlabCodegenIsDeleted = true;
    if ((QEI_READ_DW.obj.isInitialized == 1) && QEI_READ_DW.obj.isSetupComplete)
    {
      disableCounter(QEI_READ_DW.obj.TimerHandle);
      disableTimerInterrupts(QEI_READ_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(QEI_READ_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(QEI_READ_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
