/*
*    Copyrigt  (c)  2013,   BadTudou
*    All  rights   reserved
*
*     �������ƣ�ͼ���
*     ��    �ߣ�BadTudou
*     ������ڣ�2014��1��3��
*     ��ǰ�汾��Test 1.0
*
*     �ļ����ƣ�Turing.h
*     �ļ���ʶ��ͷ�ļ� 
*     ��    ע����������
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

void InitDateStrip(void);			/*	��ʼ�����ݷ���	*/
void InitControlState(void);		/*	��ʼ��������״̬	*/
void InitControlPos(void); 			/*		��ʼ��������	*/
void ReadWorkCodes(void);			/*	��ȡ��������	*/
void LookUpCode(void);				/*	���Ҵ���	*/

void StartMachine();				/*	����ͼ���	*/
void StopMachine();					/*	ֹͣͼ���	*/

void ReadStrip();					/*	��ȡ����	*/
void WriteStrip();					/*	д�����	*/

void ControlMovment();				/*	����������	*/
void SetControlState();				/*	���ÿ�����״̬	*/
void IsStopMachine();				/*	�Ƿ�ͣ��		*/
void RefreshStrip();				/*	ˢ�����ݷ���		*/


