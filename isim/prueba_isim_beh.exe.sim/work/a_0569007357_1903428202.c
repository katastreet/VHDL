/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/satyarth/Documents/VHDL/shit_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0569007357_1903428202_p_0(char *t0)
{
    char t14[16];
    char t15[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t17;
    int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 2896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);

LAB4:    t2 = (t0 + 1936U);
    t3 = std_textio_endfile(t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(33, ng0);

LAB21:    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;

LAB1:    return;
LAB5:    xsi_set_current_line(22, ng0);
    t5 = (t0 + 2704);
    t6 = (t0 + 1936U);
    t7 = (t0 + 2112U);
    std_textio_readline(STD_TEXTIO, t5, t6, t7);
    xsi_set_current_line(23, ng0);

LAB8:    t2 = (t0 + 2112U);
    t5 = xsi_access_variable_all(t2);
    t6 = (t5 + 64U);
    t6 = *((char **)t6);
    t7 = (t6 + 12U);
    t8 = *((unsigned int *)t7);
    t3 = (t8 > 0);
    if (t3 != 0)
        goto LAB9;

LAB11:    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(24, ng0);
    t9 = (t0 + 2704);
    t10 = (t0 + 2112U);
    t11 = (t0 + 1488U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    std_textio_read8(STD_TEXTIO, t9, t10, t11);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2112U);
    t5 = xsi_access_variable_all(t2);
    t6 = (t5 + 64U);
    t6 = *((char **)t6);
    t7 = (t6 + 12U);
    t8 = *((unsigned int *)t7);
    t3 = (t8 > 0);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(28, ng0);

LAB17:    t2 = (t0 + 3464);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB10:;
LAB12:    xsi_set_current_line(26, ng0);
    t9 = (t0 + 2704);
    t10 = (t0 + 2112U);
    t11 = (t0 + 1608U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    std_textio_read8(STD_TEXTIO, t9, t10, t11);
    goto LAB13;

LAB15:    t6 = (t0 + 3464);
    *((int *)t6) = 0;
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2112U);
    t5 = xsi_access_variable_all(t2);
    t6 = (t5 + 64U);
    t6 = *((char **)t6);
    t7 = (t6 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t0 + 3560);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t8;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5538);
    t6 = ((STD_STANDARD) + 192);
    t7 = (t0 + 1488U);
    t9 = *((char **)t7);
    t3 = *((unsigned char *)t9);
    t7 = xsi_char_to_mem(t3);
    t10 = xsi_string_variable_get_image(t14, t6, t7);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 1;
    t17 = (t13 + 4U);
    *((int *)t17) = 12;
    t17 = (t13 + 8U);
    *((int *)t17) = 1;
    t18 = (12 - 1);
    t8 = (t18 * 1);
    t8 = (t8 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t8;
    t11 = xsi_base_array_concat(t11, t15, t12, (char)97, t2, t16, (char)97, t10, t14, (char)101);
    t17 = (t14 + 12U);
    t8 = *((unsigned int *)t17);
    t19 = (12U + t8);
    xsi_report(t11, t19, 0);
    goto LAB8;

LAB16:    t5 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t3 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

LAB19:    t6 = (t0 + 3480);
    *((int *)t6) = 0;
    xsi_set_current_line(34, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    t5 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t3 == 1)
        goto LAB19;
    else
        goto LAB21;

LAB22:    goto LAB20;

LAB23:    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void work_a_0569007357_1903428202_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t2 = (t0 + 3624);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(41, ng0);
    t3 = xsi_get_sim_current_time();
    t11 = (250 * 1000LL);
    t5 = (t3 > t11);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(42, ng0);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_0569007357_1903428202_init()
{
	static char *pe[] = {(void *)work_a_0569007357_1903428202_p_0,(void *)work_a_0569007357_1903428202_p_1};
	xsi_register_didat("work_a_0569007357_1903428202", "isim/prueba_isim_beh.exe.sim/work/a_0569007357_1903428202.didat");
	xsi_register_executes(pe);
}
