//*****************************************************************************
// Copyright (C) 2014 Texas Instruments Incorporated
//
// All rights reserved. Property of Texas Instruments Incorporated.
// Restricted rights to use, duplicate or disclose this code are
// granted through contract.
// The program may not be used without the written permission of
// Texas Instruments Incorporated or against the terms and conditions
// stipulated in the agreement under which this program has been supplied,
// and under no circumstances can it be used with non-TI connectivity device.
//
//*****************************************************************************

#ifndef DEMO_CONFIG_H
#define DEMO_CONFIG_H

//#include "config_defs.h"

//
// Modify the following settings as necessary to run the demo
//

#define IP_ALLOC_METHOD USE_DHCP

// Default SSID Settings
#define DEFAULT_OUT_OF_BOX_SSID       "cc3200demo"
#define AP_SECURITY                   SL_SEC_TYPE_OPEN
#define AP_KEY                        "connectme"

///////////////////////////////////////////////////////////////////////////////
//All SMTP defines
#define SMTP_BUF_LEN 		100
#define GMAIL_HOST_NAME         "smtp.gmail.com"
#define GMAIL_HOST_PORT         465
#define YAHOO_HOST_NAME			"smtp.mail.yahoo.com"
#define YAHOO_HOST_PORT			25
#define USER                    "predragkrza@gmail.com" //Set Sender/Source Email Address
#define USER_RFC                "<Predrag Krza>" //Set Sender/Source Email Address
#define PASS                    "2409990840000"              //Set Sender/Source Email Password
#define RCPT_RFC                "<predragkrza@gmail.com> <dule.ko991@gmail.com> <milivojevicvoja@gmail.com>  "  //Set Recipient Email Password
#define EMAIL_SUB               "Prognoza"
///////////////////////////////////////////////////////////////////////////////

#endif
