/*
 * ZGA60FM_1200RPM.c
 *
 *  Created on: Dec 1, 2024
 *      Author: beamk
 */

#include "ZGA60FM_1200RPM.h"

MotorConstant_Structure ZGA60FM_1200RPM_Constant = {
  .Ke = 0.064916208276049,
  .Kt = 0.053045832734610,
  .L = 4.308570000000000e-05,
  .R = 0.742857142900000,
  .J = 0.001017157988027,
  .B = 0.001355987515051,
  .V_max = 12.0,
  .U_max = 65535.0,
  .qdd_max = 90.0,
  .qd_max = 150.0//rad/s

};

