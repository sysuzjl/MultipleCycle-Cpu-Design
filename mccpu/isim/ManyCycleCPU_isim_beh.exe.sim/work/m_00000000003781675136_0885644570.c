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
static const char *ng0 = "C:/xilinxProject/mccpu/sc_datemem.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {31, 0};
static int ng6[] = {24, 0};
static int ng7[] = {23, 0};
static int ng8[] = {16, 0};
static int ng9[] = {15, 0};
static int ng10[] = {8, 0};
static int ng11[] = {7, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2112);
    *((int *)t2) = 1;
    t3 = (t0 + 1800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t12 = (t0 + 600U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 24);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 24);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 255U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 255U);
    t21 = (t0 + 1104);
    t24 = (t0 + 1104);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t0 + 1104);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    t30 = (t0 + 692U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t31, 32, t30, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t26, t29, 2, 1, t32, 32, 2);
    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t23 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t32, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t35 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t38 = (!(t17));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t27, 32, t26, 32);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t32, 32, 2);
    t28 = (t22 + 4);
    t16 = *((unsigned int *)t28);
    t35 = (!(t16));
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t38 = (!(t17));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t5 = (t0 + 1104);
    t12 = (t0 + 1104);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t21 = (t0 + 1104);
    t24 = (t21 + 40U);
    t25 = *((char **)t24);
    t26 = (t0 + 692U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t22, t23, t14, t25, 2, 1, t27, 32, 2);
    t26 = (t22 + 4);
    t16 = *((unsigned int *)t26);
    t35 = (!(t16));
    t28 = (t23 + 4);
    t17 = *((unsigned int *)t28);
    t38 = (!(t17));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t23);
    t42 = (t40 - t41);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t21, t11, 0, *((unsigned int *)t23), t43);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t42 = (t18 - t19);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t43);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t42 = (t18 - t19);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t43);
    goto LAB15;

LAB16:    t18 = *((unsigned int *)t22);
    t19 = *((unsigned int *)t23);
    t42 = (t18 - t19);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t5, t11, 0, *((unsigned int *)t23), t43);
    goto LAB17;

}

static void Always_39_2(char *t0)
{
    char t4[8];
    char t22[8];
    char t31[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2120);
    *((int *)t2) = 1;
    t3 = (t0 + 1944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t19 = (t0 + 1104);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t23 = (t0 + 1104);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = (t0 + 1104);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    t29 = (t0 + 692U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t30, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t22, 8, t21, t25, t28, 2, 1, t31, 32, 2);
    t32 = (t0 + 1012);
    t36 = (t0 + 1012);
    t37 = (t36 + 44U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng5)));
    t40 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t33, t34, t35, ((int*)(t38)), 2, t39, 32, 1, t40, 32, 1);
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    t48 = (t35 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1104);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t19 = (t0 + 1104);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t23 = (t0 + 692U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t24, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t4, 8, t5, t13, t21, 2, 1, t22, 32, 2);
    t25 = (t0 + 1012);
    t26 = (t0 + 1012);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng7)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t31, t33, t34, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t31 + 4);
    t7 = *((unsigned int *)t32);
    t43 = (!(t7));
    t36 = (t33 + 4);
    t8 = *((unsigned int *)t36);
    t46 = (!(t8));
    t47 = (t43 && t46);
    t37 = (t34 + 4);
    t9 = *((unsigned int *)t37);
    t50 = (!(t9));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1104);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t19 = (t0 + 1104);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t23 = (t0 + 692U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t24, 32, t23, 32);
    xsi_vlog_generic_get_array_select_value(t4, 8, t5, t13, t21, 2, 1, t22, 32, 2);
    t25 = (t0 + 1012);
    t26 = (t0 + 1012);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng9)));
    t30 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t31, t33, t34, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t31 + 4);
    t7 = *((unsigned int *)t32);
    t43 = (!(t7));
    t36 = (t33 + 4);
    t8 = *((unsigned int *)t36);
    t46 = (!(t8));
    t47 = (t43 && t46);
    t37 = (t34 + 4);
    t9 = *((unsigned int *)t37);
    t50 = (!(t9));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1104);
    t12 = (t6 + 44U);
    t13 = *((char **)t12);
    t19 = (t0 + 1104);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t23 = (t0 + 692U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t4, 8, t5, t13, t21, 2, 1, t24, 32, 2);
    t23 = (t0 + 1012);
    t25 = (t0 + 1012);
    t26 = (t25 + 44U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng11)));
    t29 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t22, t31, t33, ((int*)(t27)), 2, t28, 32, 1, t29, 32, 1);
    t30 = (t22 + 4);
    t7 = *((unsigned int *)t30);
    t43 = (!(t7));
    t32 = (t31 + 4);
    t8 = *((unsigned int *)t32);
    t46 = (!(t8));
    t47 = (t43 && t46);
    t36 = (t33 + 4);
    t9 = *((unsigned int *)t36);
    t50 = (!(t9));
    t51 = (t47 && t50);
    if (t51 == 1)
        goto LAB20;

LAB21:    goto LAB12;

LAB14:    t52 = *((unsigned int *)t35);
    t53 = (t52 + 0);
    t54 = *((unsigned int *)t33);
    t55 = *((unsigned int *)t34);
    t56 = (t54 - t55);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t32, t22, t53, *((unsigned int *)t34), t57);
    goto LAB15;

LAB16:    t10 = *((unsigned int *)t34);
    t53 = (t10 + 0);
    t11 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t33);
    t56 = (t11 - t14);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t25, t4, t53, *((unsigned int *)t33), t57);
    goto LAB17;

LAB18:    t10 = *((unsigned int *)t34);
    t53 = (t10 + 0);
    t11 = *((unsigned int *)t31);
    t14 = *((unsigned int *)t33);
    t56 = (t11 - t14);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t25, t4, t53, *((unsigned int *)t33), t57);
    goto LAB19;

LAB20:    t10 = *((unsigned int *)t33);
    t53 = (t10 + 0);
    t11 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t31);
    t56 = (t11 - t14);
    t57 = (t56 + 1);
    xsi_vlogvar_assign_value(t23, t4, t53, *((unsigned int *)t31), t57);
    goto LAB21;

}


extern void work_m_00000000003781675136_0885644570_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_31_1,(void *)Always_39_2};
	xsi_register_didat("work_m_00000000003781675136_0885644570", "isim/ManyCycleCPU_isim_beh.exe.sim/work/m_00000000003781675136_0885644570.didat");
	xsi_register_executes(pe);
}
