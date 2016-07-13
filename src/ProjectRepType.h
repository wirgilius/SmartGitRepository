/*
 * ProjectRepType.h
 *
 *  Created on: 13 lip 2016
 *      Author: maleka
 */

#ifndef PROJECTREPTYPE_H_
#define PROJECTREPTYPE_H_

typedef enum
{
    PAB_LAMP_OFF,
    PAB_LAMP_ON,
    PAB_LAMP_FAULT,
    PAB_LAMP_SNA
} Pabl_LampState_t;


typedef enum
{
    Stop,
    Check,
    Start,
    Error
} State_Machine_t;

#endif /* PROJECTREPTYPE_H_ */
