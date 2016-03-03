/*
 *
 * @Component			OMAPCONF
 * @Filename			emif_am437x-defs.h
 * @Description			AM437X EMIF Register Address Definitions
 * @Author			Dave Gerlach <d-gerlach@ti.com>
 * @Date			2016
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2016 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#ifndef __EMIF_AM437X_DEFS_H__
#define __EMIF_AM437X_DEFS_H__

#include <reg.h>
#include <stdio.h>

/*
 * AM437x EMIF shares a lot in common with AM335x EMIF so use the register
 * definitions as a baseline.
 */

#include <emif_am335x-defs.h>

#define AM437X_EMIF4D_MOD_REGCOUNT			38
extern reg *am437x_emif4d_mod[AM437X_EMIF4D_MOD_REGCOUNT + 1];

typedef enum {
	EMIF_AM437X_EMIF4D,
	EMIF_AM437X_MODS_COUNT = 1
} emif_am437x_mod_id;


extern reg **emif_am437x_mods[EMIF_AM437X_MODS_COUNT];

extern const char *emif_am437x_mods_name[EMIF_AM437X_MODS_COUNT];


#endif
