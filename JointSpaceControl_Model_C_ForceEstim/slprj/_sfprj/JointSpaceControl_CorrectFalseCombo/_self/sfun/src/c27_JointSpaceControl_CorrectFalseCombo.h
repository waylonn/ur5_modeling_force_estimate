#ifndef __c27_JointSpaceControl_CorrectFalseCombo_h__
#define __c27_JointSpaceControl_CorrectFalseCombo_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c27_ResolvedFunctionInfo
#define typedef_c27_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} c27_ResolvedFunctionInfo;

#endif                                 /*typedef_c27_ResolvedFunctionInfo*/

#ifndef typedef_SFc27_JointSpaceControl_CorrectFalseComboInstanceStruct
#define typedef_SFc27_JointSpaceControl_CorrectFalseComboInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c27_sfEvent;
  boolean_T c27_isStable;
  boolean_T c27_doneDoubleBufferReInit;
  uint8_T c27_is_active_c27_JointSpaceControl_CorrectFalseCombo;
} SFc27_JointSpaceControl_CorrectFalseComboInstanceStruct;

#endif                                 /*typedef_SFc27_JointSpaceControl_CorrectFalseComboInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c27_JointSpaceControl_CorrectFalseCombo_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c27_JointSpaceControl_CorrectFalseCombo_get_check_sum(mxArray
  *plhs[]);
extern void c27_JointSpaceControl_CorrectFalseCombo_method_dispatcher(SimStruct *
  S, int_T method, void *data);

#endif
