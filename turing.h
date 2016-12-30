/*
*    Copyrigt  (c)  2013,   BadTudou
*    All  rights   reserved
*
*     程序名称：图灵机
*     作    者：BadTudou
*     完成日期：2014年1月3日
*     当前版本：Test 1.0
*
*     文件名称：Turing.h
*     文件标识：头文件 
*     备    注：函数定义
*/


#include <stdio.h>
//#include <TCHAR.h>
#include <stdlib.h>
#include <string.h>

#define	DATESTRIPS 16
#define CONTROLSTEPS 5
#define CODELINES 48
#define R 'R'
#define L 'L'
#define H 'H'

void InitDateStrip(void);			/*	初始化数据符号	*/
void InitControlState(void);		/*	初始化控制器状态	*/
void InitControlPos(void); 			/*		初始化控制器	*/
void ReadWorkCodes(void);			/*	读取工作代码	*/
void LookUpCode(void);				/*	查找代码	*/

void StartMachine();				/*	运行图灵机	*/
void StopMachine();					/*	停止图灵机	*/

void ReadStrip();					/*	读取符号	*/
void WriteStrip();					/*	写入符号	*/

void ControlMovment();				/*	控制器动作	*/
void SetControlState();				/*	设置控制器状态	*/
void IsStopMachine();				/*	是否停机		*/
void RefreshStrip();				/*	刷新数据符号		*/


