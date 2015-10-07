/* Include files */

#include <stddef.h>
#include "blas.h"
#include "WBCLibrary_sfun.h"
#include "c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "WBCLibrary_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c1_K609Rm7ptn8v3rQ4xprp8_debug_family_names[6] = { "nargin",
  "nargout", "s", "unused", "s0", "state" };

/* Function Declarations */
static void initialize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void initialize_params_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void enable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void disable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void c1_K609Rm7ptn8v3rQ4xprp8_update_debugger_state_c1_K609Rm7ptn8v3r
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_st);
static void finalize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void sf_gateway_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void initSimStructsc1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_machineNumber, uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_chartNumber, uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_instanceNumber);
static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData);
static void c1_K609Rm7ptn8v3rQ4xprp8_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_state, const char_T
   *c1_K609Rm7ptn8v3rQ4xprp8_identifier, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3]);
static void c1_K609Rm7ptn8v3rQ4xprp8_b_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3]);
static void c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData);
static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData);
static void c1_K609Rm7ptn8v3rQ4xprp8_c_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_s0, const char_T
   *c1_K609Rm7ptn8v3rQ4xprp8_identifier, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3]);
static void c1_K609Rm7ptn8v3rQ4xprp8_d_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3]);
static void c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData);
static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData);
static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData);
static real_T c1_K609Rm7ptn8v3rQ4xprp8_e_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId);
static void c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData);
static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_e_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData);
static int32_T c1_K609Rm7ptn8v3rQ4xprp8_f_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId);
static void c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData);
static uint8_T c1_K609Rm7ptn8v3rQ4xprp8_g_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WB,
   const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier);
static uint8_T c1_K609Rm7ptn8v3rQ4xprp8_h_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId);
static void init_dsm_address_info
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty = false;
  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WBCL
    = 0U;
}

static void initialize_params_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_K609Rm7ptn8v3rQ4xprp8_update_debugger_state_c1_K609Rm7ptn8v3r
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_st;
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i0;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_u[3];
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_y = NULL;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i1;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_b_u[3];
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_c_y = NULL;
  uint8_T c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal;
  uint8_T c1_K609Rm7ptn8v3rQ4xprp8_c_u;
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_d_y = NULL;
  real_T (*c1_K609Rm7ptn8v3rQ4xprp8_s0)[3];
  c1_K609Rm7ptn8v3rQ4xprp8_s0 = (real_T (*)[3])ssGetOutputPortSignal
    (chartInstance->S, 1);
  c1_K609Rm7ptn8v3rQ4xprp8_st = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_st = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_createcellmatrix(3, 1),
                false);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i0 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i0 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i0++) {
    c1_K609Rm7ptn8v3rQ4xprp8_u[c1_K609Rm7ptn8v3rQ4xprp8_i0] =
      (*c1_K609Rm7ptn8v3rQ4xprp8_s0)[c1_K609Rm7ptn8v3rQ4xprp8_i0];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_b_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_b_y, sf_mex_create("y",
    c1_K609Rm7ptn8v3rQ4xprp8_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c1_K609Rm7ptn8v3rQ4xprp8_y, 0, c1_K609Rm7ptn8v3rQ4xprp8_b_y);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i1 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i1 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i1++) {
    c1_K609Rm7ptn8v3rQ4xprp8_b_u[c1_K609Rm7ptn8v3rQ4xprp8_i1] =
      chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state[c1_K609Rm7ptn8v3rQ4xprp8_i1];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_c_y = NULL;
  if (!chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty) {
    sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_c_y, sf_mex_create("y", NULL, 0, 0U,
      1U, 0U, 2, 0, 0), false);
  } else {
    sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_c_y, sf_mex_create("y",
      c1_K609Rm7ptn8v3rQ4xprp8_b_u, 0, 0U, 1U, 0U, 1, 3), false);
  }

  sf_mex_setcell(c1_K609Rm7ptn8v3rQ4xprp8_y, 1, c1_K609Rm7ptn8v3rQ4xprp8_c_y);
  c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal =
    chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WBCL;
  c1_K609Rm7ptn8v3rQ4xprp8_c_u = c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal;
  c1_K609Rm7ptn8v3rQ4xprp8_d_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_d_y, sf_mex_create("y",
    &c1_K609Rm7ptn8v3rQ4xprp8_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_K609Rm7ptn8v3rQ4xprp8_y, 2, c1_K609Rm7ptn8v3rQ4xprp8_d_y);
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_st, c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_st;
}

static void set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_st)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_dv0[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i2;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_dv1[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i3;
  real_T (*c1_K609Rm7ptn8v3rQ4xprp8_s0)[3];
  c1_K609Rm7ptn8v3rQ4xprp8_s0 = (real_T (*)[3])ssGetOutputPortSignal
    (chartInstance->S, 1);
  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_doneDoubleBufferReInit = true;
  c1_K609Rm7ptn8v3rQ4xprp8_u = sf_mex_dup(c1_K609Rm7ptn8v3rQ4xprp8_st);
  c1_K609Rm7ptn8v3rQ4xprp8_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_K609Rm7ptn8v3rQ4xprp8_u, 0)), "s0",
    c1_K609Rm7ptn8v3rQ4xprp8_dv0);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i2 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i2 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i2++) {
    (*c1_K609Rm7ptn8v3rQ4xprp8_s0)[c1_K609Rm7ptn8v3rQ4xprp8_i2] =
      c1_K609Rm7ptn8v3rQ4xprp8_dv0[c1_K609Rm7ptn8v3rQ4xprp8_i2];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_K609Rm7ptn8v3rQ4xprp8_u, 1)), "state",
    c1_K609Rm7ptn8v3rQ4xprp8_dv1);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i3 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i3 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i3++) {
    chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state[c1_K609Rm7ptn8v3rQ4xprp8_i3] =
      c1_K609Rm7ptn8v3rQ4xprp8_dv1[c1_K609Rm7ptn8v3rQ4xprp8_i3];
  }

  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WBCL
    = c1_K609Rm7ptn8v3rQ4xprp8_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_K609Rm7ptn8v3rQ4xprp8_u, 2)),
    "is_active_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary");
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
  c1_K609Rm7ptn8v3rQ4xprp8_update_debugger_state_c1_K609Rm7ptn8v3r(chartInstance);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_st);
}

static void finalize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i4;
  boolean_T c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i5;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_s[3];
  boolean_T c1_K609Rm7ptn8v3rQ4xprp8_unused;
  uint32_T c1_K609Rm7ptn8v3rQ4xprp8_debug_family_var_map[6];
  real_T c1_K609Rm7ptn8v3rQ4xprp8_nargin = 2.0;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_nargout = 1.0;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_s0[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i6;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i7;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i8;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i9;
  boolean_T *c1_K609Rm7ptn8v3rQ4xprp8_b_unused;
  real_T (*c1_K609Rm7ptn8v3rQ4xprp8_b_s0)[3];
  real_T (*c1_K609Rm7ptn8v3rQ4xprp8_b_s)[3];
  c1_K609Rm7ptn8v3rQ4xprp8_b_unused = (boolean_T *)ssGetInputPortSignal
    (chartInstance->S, 1);
  c1_K609Rm7ptn8v3rQ4xprp8_b_s0 = (real_T (*)[3])ssGetOutputPortSignal
    (chartInstance->S, 1);
  c1_K609Rm7ptn8v3rQ4xprp8_b_s = (real_T (*)[3])ssGetInputPortSignal
    (chartInstance->S, 0);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U,
               chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i4 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i4 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i4++) {
    _SFD_DATA_RANGE_CHECK((*c1_K609Rm7ptn8v3rQ4xprp8_b_s)
                          [c1_K609Rm7ptn8v3rQ4xprp8_i4], 0U);
  }

  chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent);
  c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal = *c1_K609Rm7ptn8v3rQ4xprp8_b_unused;
  for (c1_K609Rm7ptn8v3rQ4xprp8_i5 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i5 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i5++) {
    c1_K609Rm7ptn8v3rQ4xprp8_s[c1_K609Rm7ptn8v3rQ4xprp8_i5] =
      (*c1_K609Rm7ptn8v3rQ4xprp8_b_s)[c1_K609Rm7ptn8v3rQ4xprp8_i5];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_unused = c1_K609Rm7ptn8v3rQ4xprp8_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U,
    c1_K609Rm7ptn8v3rQ4xprp8_debug_family_names,
    c1_K609Rm7ptn8v3rQ4xprp8_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_K609Rm7ptn8v3rQ4xprp8_nargin, 0U,
    c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallOut,
    c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_K609Rm7ptn8v3rQ4xprp8_nargout, 1U,
    c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallOut,
    c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_K609Rm7ptn8v3rQ4xprp8_s, 2U,
    c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_K609Rm7ptn8v3rQ4xprp8_unused, 3U,
    c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_K609Rm7ptn8v3rQ4xprp8_s0, 4U,
    c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut,
    c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE
    (chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state, 5U,
     c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallOut,
     c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent, 2);
  _SFD_EML_CALL(0U, chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent, 5);
  if (CV_EML_IF(0, 1, 0,
                !chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty)) {
    _SFD_EML_CALL(0U, chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent, 6);
    for (c1_K609Rm7ptn8v3rQ4xprp8_i6 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i6 < 3;
         c1_K609Rm7ptn8v3rQ4xprp8_i6++) {
      chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state[c1_K609Rm7ptn8v3rQ4xprp8_i6]
        = c1_K609Rm7ptn8v3rQ4xprp8_s[c1_K609Rm7ptn8v3rQ4xprp8_i6];
    }

    chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty = true;
  }

  _SFD_EML_CALL(0U, chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent, 9);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i7 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i7 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i7++) {
    c1_K609Rm7ptn8v3rQ4xprp8_s0[c1_K609Rm7ptn8v3rQ4xprp8_i7] =
      chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state[c1_K609Rm7ptn8v3rQ4xprp8_i7];
  }

  _SFD_EML_CALL(0U, chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent, -9);
  _SFD_SYMBOL_SCOPE_POP();
  for (c1_K609Rm7ptn8v3rQ4xprp8_i8 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i8 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i8++) {
    (*c1_K609Rm7ptn8v3rQ4xprp8_b_s0)[c1_K609Rm7ptn8v3rQ4xprp8_i8] =
      c1_K609Rm7ptn8v3rQ4xprp8_s0[c1_K609Rm7ptn8v3rQ4xprp8_i8];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_WBCLibraryMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i9 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i9 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i9++) {
    _SFD_DATA_RANGE_CHECK((*c1_K609Rm7ptn8v3rQ4xprp8_b_s0)
                          [c1_K609Rm7ptn8v3rQ4xprp8_i9], 1U);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*c1_K609Rm7ptn8v3rQ4xprp8_b_unused, 2U);
}

static void initSimStructsc1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_machineNumber, uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_chartNumber, uint32_T
  c1_K609Rm7ptn8v3rQ4xprp8_instanceNumber)
{
  (void)c1_K609Rm7ptn8v3rQ4xprp8_machineNumber;
  (void)c1_K609Rm7ptn8v3rQ4xprp8_chartNumber;
  (void)c1_K609Rm7ptn8v3rQ4xprp8_instanceNumber;
}

static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i10;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_b_inData[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i11;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_u[3];
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  for (c1_K609Rm7ptn8v3rQ4xprp8_i10 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i10 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i10++) {
    c1_K609Rm7ptn8v3rQ4xprp8_b_inData[c1_K609Rm7ptn8v3rQ4xprp8_i10] = (*(real_T
      (*)[3])c1_K609Rm7ptn8v3rQ4xprp8_inData)[c1_K609Rm7ptn8v3rQ4xprp8_i10];
  }

  for (c1_K609Rm7ptn8v3rQ4xprp8_i11 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i11 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i11++) {
    c1_K609Rm7ptn8v3rQ4xprp8_u[c1_K609Rm7ptn8v3rQ4xprp8_i11] =
      c1_K609Rm7ptn8v3rQ4xprp8_b_inData[c1_K609Rm7ptn8v3rQ4xprp8_i11];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  if (!chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty) {
    sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y", NULL, 0, 0U,
      1U, 0U, 2, 0, 0), false);
  } else {
    sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y",
      c1_K609Rm7ptn8v3rQ4xprp8_u, 0, 0U, 1U, 0U, 1, 3), false);
  }

  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData,
                c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData;
}

static void c1_K609Rm7ptn8v3rQ4xprp8_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_state, const char_T
   *c1_K609Rm7ptn8v3rQ4xprp8_identifier, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3])
{
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_b_state), &c1_K609Rm7ptn8v3rQ4xprp8_thisId,
    c1_K609Rm7ptn8v3rQ4xprp8_y);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_b_state);
}

static void c1_K609Rm7ptn8v3rQ4xprp8_b_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3])
{
  real_T c1_K609Rm7ptn8v3rQ4xprp8_dv2[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i12;
  if (mxIsEmpty(c1_K609Rm7ptn8v3rQ4xprp8_u)) {
    chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty = false;
  } else {
    chartInstance->c1_K609Rm7ptn8v3rQ4xprp8_state_not_empty = true;
    sf_mex_import(c1_K609Rm7ptn8v3rQ4xprp8_parentId, sf_mex_dup
                  (c1_K609Rm7ptn8v3rQ4xprp8_u), c1_K609Rm7ptn8v3rQ4xprp8_dv2, 1,
                  0, 0U, 1, 0U, 1, 3);
    for (c1_K609Rm7ptn8v3rQ4xprp8_i12 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i12 < 3;
         c1_K609Rm7ptn8v3rQ4xprp8_i12++) {
      c1_K609Rm7ptn8v3rQ4xprp8_y[c1_K609Rm7ptn8v3rQ4xprp8_i12] =
        c1_K609Rm7ptn8v3rQ4xprp8_dv2[c1_K609Rm7ptn8v3rQ4xprp8_i12];
    }
  }

  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
}

static void c1_K609Rm7ptn8v3rQ4xprp8_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_state;
  const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i13;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_b_state = sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
  c1_K609Rm7ptn8v3rQ4xprp8_identifier = c1_K609Rm7ptn8v3rQ4xprp8_varName;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_b_state), &c1_K609Rm7ptn8v3rQ4xprp8_thisId,
    c1_K609Rm7ptn8v3rQ4xprp8_y);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_b_state);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i13 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i13 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i13++) {
    (*(real_T (*)[3])c1_K609Rm7ptn8v3rQ4xprp8_outData)
      [c1_K609Rm7ptn8v3rQ4xprp8_i13] =
      c1_K609Rm7ptn8v3rQ4xprp8_y[c1_K609Rm7ptn8v3rQ4xprp8_i13];
  }

  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
}

static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i14;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_b_inData[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i15;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_u[3];
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  for (c1_K609Rm7ptn8v3rQ4xprp8_i14 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i14 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i14++) {
    c1_K609Rm7ptn8v3rQ4xprp8_b_inData[c1_K609Rm7ptn8v3rQ4xprp8_i14] = (*(real_T
      (*)[3])c1_K609Rm7ptn8v3rQ4xprp8_inData)[c1_K609Rm7ptn8v3rQ4xprp8_i14];
  }

  for (c1_K609Rm7ptn8v3rQ4xprp8_i15 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i15 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i15++) {
    c1_K609Rm7ptn8v3rQ4xprp8_u[c1_K609Rm7ptn8v3rQ4xprp8_i15] =
      c1_K609Rm7ptn8v3rQ4xprp8_b_inData[c1_K609Rm7ptn8v3rQ4xprp8_i15];
  }

  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y",
    c1_K609Rm7ptn8v3rQ4xprp8_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData,
                c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData;
}

static void c1_K609Rm7ptn8v3rQ4xprp8_c_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_s0, const char_T
   *c1_K609Rm7ptn8v3rQ4xprp8_identifier, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3])
{
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_s0), &c1_K609Rm7ptn8v3rQ4xprp8_thisId,
    c1_K609Rm7ptn8v3rQ4xprp8_y);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_s0);
}

static void c1_K609Rm7ptn8v3rQ4xprp8_d_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId, real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3])
{
  real_T c1_K609Rm7ptn8v3rQ4xprp8_dv3[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i16;
  (void)chartInstance;
  sf_mex_import(c1_K609Rm7ptn8v3rQ4xprp8_parentId, sf_mex_dup
                (c1_K609Rm7ptn8v3rQ4xprp8_u), c1_K609Rm7ptn8v3rQ4xprp8_dv3, 1, 0,
                0U, 1, 0U, 1, 3);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i16 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i16 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i16++) {
    c1_K609Rm7ptn8v3rQ4xprp8_y[c1_K609Rm7ptn8v3rQ4xprp8_i16] =
      c1_K609Rm7ptn8v3rQ4xprp8_dv3[c1_K609Rm7ptn8v3rQ4xprp8_i16];
  }

  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
}

static void c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_s0;
  const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_y[3];
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i17;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_s0 = sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
  c1_K609Rm7ptn8v3rQ4xprp8_identifier = c1_K609Rm7ptn8v3rQ4xprp8_varName;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_s0), &c1_K609Rm7ptn8v3rQ4xprp8_thisId,
    c1_K609Rm7ptn8v3rQ4xprp8_y);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_s0);
  for (c1_K609Rm7ptn8v3rQ4xprp8_i17 = 0; c1_K609Rm7ptn8v3rQ4xprp8_i17 < 3;
       c1_K609Rm7ptn8v3rQ4xprp8_i17++) {
    (*(real_T (*)[3])c1_K609Rm7ptn8v3rQ4xprp8_outData)
      [c1_K609Rm7ptn8v3rQ4xprp8_i17] =
      c1_K609Rm7ptn8v3rQ4xprp8_y[c1_K609Rm7ptn8v3rQ4xprp8_i17];
  }

  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
}

static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  boolean_T c1_K609Rm7ptn8v3rQ4xprp8_u;
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_u = *(boolean_T *)c1_K609Rm7ptn8v3rQ4xprp8_inData;
  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y",
    &c1_K609Rm7ptn8v3rQ4xprp8_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData,
                c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData;
}

static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_u;
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_u = *(real_T *)c1_K609Rm7ptn8v3rQ4xprp8_inData;
  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y",
    &c1_K609Rm7ptn8v3rQ4xprp8_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData,
                c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData;
}

static real_T c1_K609Rm7ptn8v3rQ4xprp8_e_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId)
{
  real_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_d0;
  (void)chartInstance;
  sf_mex_import(c1_K609Rm7ptn8v3rQ4xprp8_parentId, sf_mex_dup
                (c1_K609Rm7ptn8v3rQ4xprp8_u), &c1_K609Rm7ptn8v3rQ4xprp8_d0, 1, 0,
                0U, 0, 0U, 0);
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_d0;
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
  return c1_K609Rm7ptn8v3rQ4xprp8_y;
}

static void c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_nargout;
  const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  real_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_nargout = sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
  c1_K609Rm7ptn8v3rQ4xprp8_identifier = c1_K609Rm7ptn8v3rQ4xprp8_varName;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c1_K609Rm7ptn8v3rQ4xprp8_nargout),
     &c1_K609Rm7ptn8v3rQ4xprp8_thisId);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_nargout);
  *(real_T *)c1_K609Rm7ptn8v3rQ4xprp8_outData = c1_K609Rm7ptn8v3rQ4xprp8_y;
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
}

const mxArray
  *sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_nameCaptureInfo = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_nameCaptureInfo, sf_mex_create(
    "nameCaptureInfo", NULL, 0, 0U, 1U, 0U, 2, 0, 1), false);
  return c1_K609Rm7ptn8v3rQ4xprp8_nameCaptureInfo;
}

static const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_e_sf_marshallOut(void
  *chartInstanceVoid, void *c1_K609Rm7ptn8v3rQ4xprp8_inData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_u;
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_u = *(int32_T *)c1_K609Rm7ptn8v3rQ4xprp8_inData;
  c1_K609Rm7ptn8v3rQ4xprp8_y = NULL;
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_y, sf_mex_create("y",
    &c1_K609Rm7ptn8v3rQ4xprp8_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData,
                c1_K609Rm7ptn8v3rQ4xprp8_y, false);
  return c1_K609Rm7ptn8v3rQ4xprp8_mxArrayOutData;
}

static int32_T c1_K609Rm7ptn8v3rQ4xprp8_f_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId)
{
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_i18;
  (void)chartInstance;
  sf_mex_import(c1_K609Rm7ptn8v3rQ4xprp8_parentId, sf_mex_dup
                (c1_K609Rm7ptn8v3rQ4xprp8_u), &c1_K609Rm7ptn8v3rQ4xprp8_i18, 1,
                6, 0U, 0, 0U, 0);
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_i18;
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
  return c1_K609Rm7ptn8v3rQ4xprp8_y;
}

static void c1_K609Rm7ptn8v3rQ4xprp8_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData, const char_T
  *c1_K609Rm7ptn8v3rQ4xprp8_varName, void *c1_K609Rm7ptn8v3rQ4xprp8_outData)
{
  const mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_sfEvent;
  const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  int32_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    chartInstanceVoid;
  c1_K609Rm7ptn8v3rQ4xprp8_b_sfEvent = sf_mex_dup
    (c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
  c1_K609Rm7ptn8v3rQ4xprp8_identifier = c1_K609Rm7ptn8v3rQ4xprp8_varName;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c1_K609Rm7ptn8v3rQ4xprp8_b_sfEvent),
     &c1_K609Rm7ptn8v3rQ4xprp8_thisId);
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_b_sfEvent);
  *(int32_T *)c1_K609Rm7ptn8v3rQ4xprp8_outData = c1_K609Rm7ptn8v3rQ4xprp8_y;
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_mxArrayInData);
}

static uint8_T c1_K609Rm7ptn8v3rQ4xprp8_g_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_b_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WB,
   const char_T *c1_K609Rm7ptn8v3rQ4xprp8_identifier)
{
  uint8_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  emlrtMsgIdentifier c1_K609Rm7ptn8v3rQ4xprp8_thisId;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fIdentifier =
    c1_K609Rm7ptn8v3rQ4xprp8_identifier;
  c1_K609Rm7ptn8v3rQ4xprp8_thisId.fParent = NULL;
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_h_emlrt_marshallIn
    (chartInstance, sf_mex_dup
     (c1_K609Rm7ptn8v3rQ4xprp8_b_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WB),
     &c1_K609Rm7ptn8v3rQ4xprp8_thisId);
  sf_mex_destroy
    (&c1_K609Rm7ptn8v3rQ4xprp8_b_is_active_c1_K609Rm7ptn8v3rQ4xprp8_WB);
  return c1_K609Rm7ptn8v3rQ4xprp8_y;
}

static uint8_T c1_K609Rm7ptn8v3rQ4xprp8_h_emlrt_marshallIn
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance, const
   mxArray *c1_K609Rm7ptn8v3rQ4xprp8_u, const emlrtMsgIdentifier
   *c1_K609Rm7ptn8v3rQ4xprp8_parentId)
{
  uint8_T c1_K609Rm7ptn8v3rQ4xprp8_y;
  uint8_T c1_K609Rm7ptn8v3rQ4xprp8_u0;
  (void)chartInstance;
  sf_mex_import(c1_K609Rm7ptn8v3rQ4xprp8_parentId, sf_mex_dup
                (c1_K609Rm7ptn8v3rQ4xprp8_u), &c1_K609Rm7ptn8v3rQ4xprp8_u0, 1, 3,
                0U, 0, 0U, 0);
  c1_K609Rm7ptn8v3rQ4xprp8_y = c1_K609Rm7ptn8v3rQ4xprp8_u0;
  sf_mex_destroy(&c1_K609Rm7ptn8v3rQ4xprp8_u);
  return c1_K609Rm7ptn8v3rQ4xprp8_y;
}

static void init_dsm_address_info
  (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1855555101U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3415305948U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(412130435U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3923382848U);
}

mxArray *sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("001U3moJZgYiwaWFxBpiHB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[8],T\"s0\",},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[35 40],M[0],}}},{M[8],M[0],T\"is_active_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _WBCLibraryMachineNumber_,
           1,
           1,
           1,
           0,
           3,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize ist own list of scripts */
        init_script_number_translation(_WBCLibraryMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_WBCLibraryMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _WBCLibraryMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"s");
          _SFD_SET_DATA_PROPS(1,2,0,1,"s0");
          _SFD_SET_DATA_PROPS(2,1,1,0,"unused");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,101);
        _SFD_CV_INIT_EML_IF(0,1,0,52,69,-1,88);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallOut,
            (MexInFcnForType)c1_K609Rm7ptn8v3rQ4xprp8_b_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_K609Rm7ptn8v3rQ4xprp8_c_sf_marshallOut,
          (MexInFcnForType)NULL);

        {
          boolean_T *c1_K609Rm7ptn8v3rQ4xprp8_unused;
          real_T (*c1_K609Rm7ptn8v3rQ4xprp8_s)[3];
          real_T (*c1_K609Rm7ptn8v3rQ4xprp8_s0)[3];
          c1_K609Rm7ptn8v3rQ4xprp8_unused = (boolean_T *)ssGetInputPortSignal
            (chartInstance->S, 1);
          c1_K609Rm7ptn8v3rQ4xprp8_s0 = (real_T (*)[3])ssGetOutputPortSignal
            (chartInstance->S, 1);
          c1_K609Rm7ptn8v3rQ4xprp8_s = (real_T (*)[3])ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c1_K609Rm7ptn8v3rQ4xprp8_s);
          _SFD_SET_DATA_VALUE_PTR(1U, *c1_K609Rm7ptn8v3rQ4xprp8_s0);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_K609Rm7ptn8v3rQ4xprp8_unused);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _WBCLibraryMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "K609Rm7ptn8v3rQ4xprp8";
}

static void sf_opaque_initialize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar)
     ->S,0);
  initialize_params_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
  initialize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(void
  *chartInstanceVar)
{
  enable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(void
  *chartInstanceVar)
{
  disable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(void
  *chartInstanceVar)
{
  sf_gateway_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ();                                /* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[3];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxDuplicateArray(st);      /* high level simctx */
  prhs[2] = (mxArray*) sf_get_sim_state_info_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ();                                /* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 3, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(S);
}

static void sf_opaque_set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(S, st);
}

static void sf_opaque_terminate_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*)
                    chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_WBCLibrary_optimization_info();
    }

    finalize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
      ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
    utFree((void *)chartInstanceVar);
    if (crtInfo != NULL) {
      utFree((void *)crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
    ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct
  *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary
      ((SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct*)
       (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_WBCLibrary_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1855555101U));
  ssSetChecksum1(S,(3415305948U));
  ssSetChecksum2(S,(412130435U));
  ssSetChecksum3(S,(3923382848U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(SimStruct *S)
{
  SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct *)
    utMalloc(sizeof(SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc1_K609Rm7ptn8v3rQ4xprp8_WBCLibraryInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_K609Rm7ptn8v3rQ4xprp8_WBCLibrary_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
