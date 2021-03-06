/*********************************************************************************************************
**
**                                    中国软件开源组织
**
**                                   嵌入式实时操作系统
**
**                                SylixOS(TM)  LW : long wing
**
**                               Copyright All Rights Reserved
**
**--------------文件信息--------------------------------------------------------------------------------
**
** 文   件   名: mipsElf.h
**
** 创   建   人: Ryan.Xin (信金龙)
**
** 文件创建日期: 2015 年 09 月 09 日
**
** 描        述: 实现 MIPS 体系结构的 ELF 文件重定位.
*********************************************************************************************************/

#ifndef __ARCH_MIPSELF_H
#define __ARCH_MIPSELF_H

#ifdef LW_CFG_CPU_ARCH_MIPS                                             /*  MIPS 体系结构               */

#define ELF_CLASS       ELFCLASS32
#define ELF_ARCH        EM_MIPS

#endif                                                                  /*  LW_CFG_CPU_ARCH_MIPS        */
#endif                                                                  /*  __ARCH_MIPSELF_H            */
/*********************************************************************************************************
  END
*********************************************************************************************************/
