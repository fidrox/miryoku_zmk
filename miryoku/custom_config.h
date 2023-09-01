// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
// #define MIRYOKU_ALTERNATIVES_NAV_VI
// #define MIRYOKU_ALPHAS_QWERTY

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, TAB),U_LT(U_SWITCH, RET),U_LT(U_SYM, SPACE),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_REM \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
&kp 3,             &kp Z,             &kp X,             &kp C,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              &kp ESC,&kp LCTRL,&kp SPACE,U_LT(U_MOUSE, SPACE),  U_LT(U_NUM, BSPC), &u_to_U_BASE,  U_NP,              U_NP

#define MIRYOKU_LAYER_SWITCH \
&u_to_U_REM,       &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &u_to_U_REM,             U_NU,       U_NU,              U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &u_to_U_COLEMAK,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_COLEMAK \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp G,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,     &kp R,     &kp S,    &kp T,    &kp D,             &kp H,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    &kp I,     &kp O,     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp K,             &kp M,             jCOMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, RET),U_LT(U_MOUSE, SPACE),U_LT(U_SYM, SPACE),  U_LT(U_NUM, BSPC), &kp TAB,  U_NP,              U_NP


// #define MIRYOKU_LAYOUTMAPPING_CORNE( \
//      K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//      K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//      K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//      N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
// XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
// XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
//                K32  K34  K35       K36  K33  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(COLEMAK,    "Colemak") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(SWITCH,   "Switch") \
MIRYOKU_X(REM,   "Remnant") 



#define MIRYOKU_LAYERMAPPING_REM MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_SWITCH MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_COLEMAK MIRYOKU_MAPPING



#define U_BASE   0
#define U_EXTRA  1
#define U_COLEMAK    2
#define U_TAP    3
#define U_BUTTON 4
#define U_NAV    5
#define U_MOUSE  6
#define U_MEDIA  7
#define U_NUM    8
#define U_SYM    9
#define U_FUN    10
#define U_SWITCH   11
#define U_REM   12

