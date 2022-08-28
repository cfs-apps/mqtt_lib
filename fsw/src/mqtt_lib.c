/*
** Copyright 2022 bitValence, Inc.
** All Rights Reserved.
**
** This program is free software; you can modify and/or redistribute it
** under the terms of the GNU Affero General Public License
** as published by the Free Software Foundation; version 3 with
** attribution addendums as found in the LICENSE.txt
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU Affero General Public License for more details.
**
** Purpose:
**   Define entry point function for MQTT library
**
** Notes:
**   1. This library contains a subset of Ian Craggs's Paho MQTT library
**      https://github.com/eclipse/paho.mqtt.c
**
** References:
**   1. OpenSatKit Object-based Application Developer's Guide
**   2. cFS Application Developer's Guide
**
*/


/*
** Includes
*/

#include "mqtt_lib_ver.h"
#include "mqtt_lib.h"

/************************/
/** Exported Functions **/
/************************/

/******************************************************************************
** Function: MQTT_LibInit
**
** Provide a global function library entry point
**
** Notes:
**   None
*/
uint32 MQTT_LibInit(void)
{

   OS_printf("MQTT Library Initialized. Version %d.%d.%d\n",
             MQTT_LIB_MAJOR_VER, MQTT_LIB_MINOR_VER, MQTT_LIB_LOCAL_REV);
   
   return OS_SUCCESS;

} /* End MQTT_LIB_LibInit() */

