/**************************************************************************/ 
/*                                                                        */ 
/*            Copyright (c) 1996-2000 by Express Logic Inc.               */ 
/*                                                                        */ 
/*  This software is copyrighted by and is the sole property of Express   */ 
/*  Logic, Inc.  All rights, title, ownership, or other interests         */ 
/*  in the software remain the property of Express Logic, Inc.  This      */ 
/*  software may only be used in accordance with the corresponding        */ 
/*  license agreement.  Any unauthorized use, duplication, transmission,  */ 
/*  distribution, or disclosure of this software is expressly forbidden.  */ 
/*                                                                        */
/*  This Copyright notice may not be removed or modified without prior    */ 
/*  written consent of Express Logic, Inc.                                */ 
/*                                                                        */ 
/*  Express Logic, Inc. reserves the right to modify this software        */ 
/*  without notice.                                                       */ 
/*                                                                        */ 
/*  Express Logic, Inc.                                                   */
/*  11440 West Bernardo Court               info@expresslogic.com         */
/*  Suite 366                               http://www.expresslogic.com   */
/*  San Diego, CA  92127                                                  */
/*                                                                        */
/**************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */ 
/** ThreadX Component                                                     */ 
/**                                                                       */
/**   Event Flags (EVE)                                                   */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/

#define TX_SOURCE_CODE


/* Locate event flags component data in this file.  */

#define TX_EVENT_FLAGS_INIT


/* Include necessary system files.  */

#include "tx_api.h"
#include "tx_eve.h"


/**************************************************************************/ 
/*                                                                        */ 
/*  FUNCTION                                               RELEASE        */ 
/*                                                                        */ 
/*    _tx_event_flags_initialize                          PORTABLE C      */ 
/*                                                           3.0f         */ 
/*  AUTHOR                                                                */ 
/*                                                                        */ 
/*    William E. Lamie, Express Logic, Inc.                               */ 
/*                                                                        */ 
/*  DESCRIPTION                                                           */ 
/*                                                                        */ 
/*    This function initializes the various control data structures for   */ 
/*    the event flags component.                                          */ 
/*                                                                        */ 
/*  INPUT                                                                 */ 
/*                                                                        */ 
/*    None                                                                */
/*                                                                        */ 
/*  OUTPUT                                                                */ 
/*                                                                        */ 
/*    None                                                                */
/*                                                                        */ 
/*  CALLS                                                                 */ 
/*                                                                        */ 
/*    None                                                                */
/*                                                                        */ 
/*  CALLED BY                                                             */ 
/*                                                                        */ 
/*    _tx_initialize_high_level         High level initialization         */ 
/*                                                                        */ 
/*  RELEASE HISTORY                                                       */ 
/*                                                                        */ 
/*    DATE              NAME                      DESCRIPTION             */ 
/*                                                                        */ 
/*  12-31-1996     William E. Lamie         Initial Version 3.0           */ 
/*  11-11-1997     William E. Lamie         Modified comment(s),          */ 
/*                                            resulting in version 3.0b.  */ 
/*  01-01-1999     William E. Lamie         Modified comment(s),          */ 
/*                                            resulting in version 3.0e.  */ 
/*  11-01-1999     William E. Lamie         Modified comment(s),          */ 
/*                                            resulting in version 3.0f.  */ 
/*                                                                        */ 
/**************************************************************************/ 
VOID    _tx_event_flags_initialize(VOID)
{

    /* Initialize the head pointer of the created event flags list and the
       number of event flags created.  */
    _tx_event_flags_created_ptr =        TX_NULL;
    _tx_event_flags_created_count =      0;
}

