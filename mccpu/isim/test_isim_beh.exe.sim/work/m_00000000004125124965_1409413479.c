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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/xilinxProject/mccpu/sc_pcdirect.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {28, 0};
static int ng4[] = {27, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {1, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t4[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1784);
    *((int *)t2) = 1;
    t3 = (t0 + 1616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 28);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 28);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = (t0 + 920);
    t18 = (t0 + 920);
    t19 = (t18 + 44U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    t22 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 67108863U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 67108863U);
    t6 = (t0 + 920);
    t7 = (t0 + 920);
    t14 = (t7 + 44U);
    t18 = *((char **)t14);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t15 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (!(t24));
    t22 = (t16 + 4);
    t27 = *((unsigned int *)t22);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t23 = (t17 + 4);
    t31 = *((unsigned int *)t23);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng7)));
    t18 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t15, t16, ((int*)(t7)), 2, t14, 32, 1, t18, 32, 1);
    t19 = (t4 + 4);
    t8 = *((unsigned int *)t19);
    t25 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t28 = (!(t9));
    t29 = (t25 && t28);
    t21 = (t16 + 4);
    t10 = *((unsigned int *)t21);
    t32 = (!(t10));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB10;

LAB11:    goto LAB2;

LAB6:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t14, t4, t35, *((unsigned int *)t16), t39);
    goto LAB7;

LAB8:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t6, t4, t35, *((unsigned int *)t16), t39);
    goto LAB9;

LAB10:    t11 = *((unsigned int *)t16);
    t35 = (t11 + 0);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t15);
    t38 = (t12 - t13);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t3, t2, t35, *((unsigned int *)t15), t39);
    goto LAB11;

}


extern void work_m_00000000004125124965_1409413479_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_29_1};
	xsi_register_didat("work_m_00000000004125124965_1409413479", "isim/test_isim_beh.exe.sim/work/m_00000000004125124965_1409413479.didat");
	xsi_register_executes(pe);
}
