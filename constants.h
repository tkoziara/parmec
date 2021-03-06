/*
The MIT License (MIT)

Copyright (c) 2015 Tomasz Koziara

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef __constants__
#define __constants__

#ifdef __cplusplus
namespace parmec
{
#endif

enum {DENSITY = 0, YOUNG, POISSON, NMAT}; /* bulk material constants */

enum {GRANULAR_FORCE, USER_FORCE}; /* interaction force kind */

enum {SPRING = 0, DAMPER, FRISTAT, FRIDYN, FRIROL, FRIDRIL, KSKN, NIPARAM}; /* surface material constants */

enum {ANALYTICAL = 1, OUTREST = 2, SKIP = 4}; /* particle flags */

enum {HIS_LIST = 1, HIS_SPHERE = 2, HIS_BOX = 4, HIS_POINT = 8}; /* history kind flags */

enum {HIS_PX, HIS_PY, HIS_PZ, HIS_PL, HIS_DX, HIS_DY, HIS_DZ, HIS_DL,
      HIS_VX, HIS_VY, HIS_VZ, HIS_VL, HIS_OX, HIS_OY, HIS_OZ, HIS_OL,
      HIS_FX, HIS_FY, HIS_FZ, HIS_FL, HIS_TX, HIS_TY, HIS_TZ, HIS_TL, 
      HIS_LENGTH, HIS_STROKE, HIS_F, HIS_SF, HIS_FF, HIS_SS,
      HIS_ZDIR_X, HIS_ZDIR_Y, HIS_ZDIR_Z, HIS_XDIR_X, HIS_XDIR_Y, HIS_XDIR_Z,
      HIS_ROLL, HIS_PITCH, HIS_YAW, HIS_TRQTOT_R, HIS_TRQTOT_P, HIS_TRQTOT_Y,
      HIS_TRQSPR_R, HIS_TRQSPR_P, HIS_TRQSPR_Y, HIS_JREAC_X, HIS_JREAC_Y,
      HIS_JREAC_Z, HIS_JREAC_L, HIS_TIME}; /* history entities */

enum {OUT_FORMAT_DUMP = 1, OUT_FORMAT_VTK = 2, OUT_FORMAT_XDMF = 4, OUT_FORMAT_MED = 8}; /* output format */

enum {OUT_MODE_SPH = 1, OUT_MODE_MESH = 2, OUT_MODE_RB = 4, OUT_MODE_CD = 8, OUT_MODE_SL = 16, OUT_MODE_ST = 32, OUT_MODE_JT = 64}; /* output modes */

enum {OUT_NUMBER = 1, OUT_COLOR = 2, OUT_DISPL = 4, OUT_ORIENT = 8, OUT_ORIENT1 = 16, OUT_ORIENT2 = 32, OUT_ORIENT3 = 64,
      OUT_LINVEL = 128, OUT_ANGVEL = 256, OUT_FORCE = 512, OUT_TORQUE = 1024, OUT_F = 2048, OUT_FN = 4096, OUT_FT = 8192,
      OUT_SF = 16384, OUT_AREA = 32768, OUT_PAIR = 65536, OUT_LENGTH = 131072, OUT_SS = 262144, OUT_FF = 524288,
      OUT_XDIR = 1048576, OUT_YDIR = 2097152, OUT_ZDIR = 4194304, OUT_TRQROT = 8388608, OUT_TRQTOT = 16777216, OUT_TRQSPR = 33554432,
      OUT_JREAC = 67108864}; /* output entities */

enum {SPRING_NONLINEAR_ELASTIC, SPRING_GENERAL_NONLINEAR}; /* spring type */

enum {SPRING_YIELDED = 1, SPRING_UNLOADING = 2, SPRDIR_CONSTANT = 4, SPRDIR_PLANAR = 8, SPRDIR_FOLLOWER = 16, SPRDIR_PROJECT = 32}; /* spring flags */

enum {TRQCONE_ROLL = 1, TRQCONE_PITCH = 2, TRQCONE_YAW = 4,
      TRQCONE_ROLL_PITCH = 3, TRQCONE_ROLL_YAW = 5, TRQCONE_PITCH_YAW = 6,
      TRQCONE_ROLL_PITCH_YAW = 7}; /* torsional spring cone constraint flags */

enum {OP_SUM, OP_MAX, OP_MIN}; /* unspring operators */

#ifdef __cplusplus
}
#endif

#endif
