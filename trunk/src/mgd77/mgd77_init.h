/*---------------------------------------------------------------------------
 *	$Id: mgd77_init.h,v 1.2 2007-01-30 20:37:09 pwessel Exp $
 *
 *    Copyright (c) 2005-2007 by P. Wessel
 *    See README file for copying and redistribution conditions.
 *
 *  File:	mgd77_init.h
 *
 *  Include file for mgd77.c
 *
 *  Authors:    Paul Wessel, Primary Investigator, SOEST, U. of Hawaii
 *		Michael Chandler, Master's Candidate, SOEST, U. of Hawaii
 *		
 *  This include file contains initializations for the MGD77 system.
 *  MUST BE INCUDED AFTER mgd77.h IN mgd77.c
 *
 *  Version:	1.1
 *  Revised:	1-JAN-2006
 * 
 *-------------------------------------------------------------------------*/

BOOLEAN MGD77_format_allowed[MGD77_N_FORMATS] = {TRUE, TRUE, TRUE};	/* By default we allow opening of files in any format.  See MGD77_Ignore_Format() */

char *MGD77_suffix[MGD77_N_FORMATS] = {"mgd77", "nc", "dat"};
