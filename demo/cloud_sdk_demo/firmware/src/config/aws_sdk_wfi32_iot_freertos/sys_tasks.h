/*******************************************************************************
 System Tasks Header File

  File Name:
    sys_tasks.h

  Summary:
    This file contains declarations for task handles.

  Description:
    Task handles declared in this header file can be used by the application
    to control the behavior of the tasks.

  Remarks:
    None
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *******************************************************************************/
// DOM-IGNORE-END

#ifndef SYS_TASKS_H
#define SYS_TASKS_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "configuration.h"
#include "definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: RTOS "Tasks" Handles
// *****************************************************************************
// *****************************************************************************
/* Declaration of  APP_Tasks task handle */
extern TaskHandle_t xAPP_Tasks;

/* Declaration of  APP_AWS_Tasks task handle */
extern TaskHandle_t xAPP_AWS_Tasks;

/* Declaration of  APP_USB_MSD_Tasks task handle */
extern TaskHandle_t xAPP_USB_MSD_Tasks;

/* Declaration of  APP_OLED_Tasks task handle */
extern TaskHandle_t xAPP_OLED_Tasks;

/* Declaration of  APP_CTRL_Tasks task handle */
extern TaskHandle_t xAPP_CTRL_Tasks;


/* Declaration of SYS_COMMAND task handle */
extern TaskHandle_t xSYS_CMD_Tasks;



#endif //SYS_TASKS_H