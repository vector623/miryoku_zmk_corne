// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT, &kp A           \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K38 \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K39 \
K40  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K41 \
               K32  K33  K34       K35  K36  K37
// to revise sym layer, see
// https://github.com/mnivoliez/miryoku_zmk/blob/master/miryoku/custom_config.h

#define K38 &kp F5
#define K39 &kp F9
#define K40 &kp LSHFT
#define K41 &kp RSHFT

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K42, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K38, \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX, \
K40  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX, \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_CORNE
