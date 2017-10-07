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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *IEEE_P_3972351953;
char *STD_STANDARD;
char *WORK_P_2892063302;
char *IEEE_P_1242562249;
char *IEEE_P_3564397177;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3564397177_init();
    ieee_p_1242562249_init();
    ieee_p_3972351953_init();
    work_p_2892063302_init();
    work_a_3840338369_3212880686_init();
    work_a_0679969511_3212880686_init();
    work_a_0102906087_3212880686_init();
    work_a_0285804225_3212880686_init();
    work_a_3140770713_3212880686_init();
    work_a_1403669734_3212880686_init();
    work_a_0632073909_3212880686_init();
    work_a_3961140722_3212880686_init();
    work_a_1549447303_3212880686_init();
    work_a_1550741358_2372691052_init();


    xsi_register_tops("work_a_1550741358_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_2892063302 = xsi_get_engine_memory("work_p_2892063302");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
