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
** 文   件   名: ptimerDev.h
**
** 创   建   人: Han.Hui (韩辉)
**
** 文件创建日期: 2013 年 11 月 20 日
**
** 描        述: Linux 兼容 timerfd 实现.
*********************************************************************************************************/

#ifndef __TIMERDEV_H
#define __TIMERDEV_H

/*********************************************************************************************************
  裁减控制
*********************************************************************************************************/
#if (LW_CFG_PTIMER_EN > 0) && (LW_CFG_TIMERFD_EN > 0)

/*********************************************************************************************************
  设备路径
*********************************************************************************************************/

#define LW_TMRFD_DEV_PATH   "/dev/timerfd"

/*********************************************************************************************************
  设备与文件结构
*********************************************************************************************************/

typedef struct {
    LW_DEV_HDR          TD_devhdrHdr;                                   /*  设备头                      */
} LW_TMRFD_DEV;
typedef LW_TMRFD_DEV   *PLW_TMRFD_DEV;

typedef struct {
#define LW_TIMER_FILE_MAGIC 0x35ac796d
    UINT32              TF_uiMagic;
    INT                 TF_iFlag;                                       /*  打开文件的选项              */
    timer_t             TF_timer;
    LW_OBJECT_HANDLE    TF_ulReadLock;
    LW_SEL_WAKEUPLIST   TF_selwulist;
} LW_TMRFD_FILE;
typedef LW_TMRFD_FILE  *PLW_TMRFD_FILE;

/*********************************************************************************************************
  初始化操作
*********************************************************************************************************/

LW_API INT  API_TimerfdDrvInstall(VOID);
LW_API INT  API_TimerfdDevCreate(VOID);

#define timerfdDrv          API_TimerfdDrvInstall
#define timerfdDevCreate    API_TimerfdDevCreate

#endif                                                                  /*  LW_CFG_PTIMER_EN > 0        */
                                                                        /*  LW_CFG_TIMERFD_EN > 0       */
#endif                                                                  /*  __TIMERDEV_H                */
/*********************************************************************************************************
  END
*********************************************************************************************************/
