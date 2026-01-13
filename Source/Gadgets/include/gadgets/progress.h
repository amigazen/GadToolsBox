/**
 **    $VER:  progress.h 37.2 (28.10.25)
 **
 **    main include file for BOOPSI progress.gadget
 **
 **    (C) Copyright 2025 by amigazen project
 **    All rights reserved.
 **
 **/

 #ifndef PROGRESS_PROGRESS_H
 #define PROGRESS_PROGRESS_H
 
 #ifndef UTILITY_TAGITEM_H
 #include <utility/tagitem.h>
 #endif
 
 #ifndef INTUITION_GADGETCLASS_H
 #include <intuition/gadgetclass.h>
 #endif
 
 #ifndef EXEC_LIBRARIES_H
 #include <exec/libraries.h>
 #endif
 
 /* this defines the ProgressBase-structure */
 
 struct ProgressBase
     {
         struct Library		progress_LibNode;
         UBYTE							progress_Flags;
         UBYTE							progress_PadByte;
         APTR							progress_SegList;
         struct Library		*progress_SysBase;
         struct Library		*progress_DOSBase;
         struct Library		*progress_IntuitionBase;
         struct Library		*progress_GfxBase;
         struct Library		*progress_UtilityBase;
 
         /* PRIVATE */
 
     };
 
 /* the tags you may pass to NewObject() or SetGadgetAttrsA() or
    GetAttrsA() */
 
 #define PROG_MaxVal				(TAG_USER + 0)		/* maximum value for progress bar */
 #define PROG_CurVal				(TAG_USER + 1)		/* current value for progress bar */
 #define PROG_Border				(TAG_USER + 2)		/* draw border around progress bar */
 #define PROG_ConvertToPercents	(TAG_USER + 3)		/* convert values to percentages for display */
 #define PROG_Format				(TAG_USER + 4)		/* format string for text display */
 #define PROG_Placement			(TAG_USER + 5)		/* text placement (PLACETEXT_* flags) */
 #define PROG_TextFont			(TAG_USER + 6)		/* ptr to TextFont for text display */
 
 #endif /* PROGRESS_PROGRESS_H */
 