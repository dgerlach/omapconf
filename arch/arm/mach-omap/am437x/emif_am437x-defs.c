/*
 *
 * @Component			OMAPCONF
 * @Filename			emif_am437x.c
 * @Description			AM437X EMIF Register Address Definitions
 * @Author			Dave Gerlach <d-gerlach@ti.com>
 * @Date			2016
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
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

#include <emif_am437x-defs.h>

reg *am437x_emif4d_mod[AM437X_EMIF4D_MOD_REGCOUNT + 1] = {
	&am335x_emif4d_emif_mod_id_rev,
	&am335x_emif4d_status,
	&am335x_emif4d_sdram_config,
	&am335x_emif4d_sdram_config_2,
	&am335x_emif4d_sdram_ref_ctrl,
	&am335x_emif4d_sdram_ref_ctrl_shdw,
	&am335x_emif4d_sdram_tim_1,
	&am335x_emif4d_sdram_tim_1_shdw,
	&am335x_emif4d_sdram_tim_2,
	&am335x_emif4d_sdram_tim_2_shdw,
	&am335x_emif4d_sdram_tim_3,
	&am335x_emif4d_sdram_tim_3_shdw,
	&am335x_emif4d_pwr_mgmt_ctrl,
	&am335x_emif4d_pwr_mgmt_ctrl_shdw,
	&am335x_emif4d_int_config,
	&am335x_emif4d_int_cfg_val_1,
	&am335x_emif4d_int_cfg_val_2,
	&am335x_emif4d_perf_cnt_1,
	&am335x_emif4d_perf_cnt_2,
	&am335x_emif4d_perf_cnt_cfg,
	&am335x_emif4d_perf_cnt_sel,
	&am335x_emif4d_perf_cnt_tim,
	&am335x_emif4d_read_idle_ctrl,
	&am335x_emif4d_read_idle_ctrl_shdw,
	&am335x_emif4d_irqstatus_raw_sys,
	&am335x_emif4d_irqstatus_sys,
	&am335x_emif4d_irqenable_set_sys,
	&am335x_emif4d_irqenable_clr_sys,
	&am335x_emif4d_zq_config,
	&am335x_emif4d_rdwr_lvl_rmp_win,
	&am335x_emif4d_rdwr_lvl_rmp_ctrl,
	&am335x_emif4d_rdwr_lvl_ctrl,
	&am335x_emif4d_ddr_phy_ctrl_1,
	&am335x_emif4d_ddr_phy_ctrl_1_shdw,
	&am335x_emif4d_pri_cos_map,
	&am335x_emif4d_connid_cos_1_map,
	&am335x_emif4d_connid_cos_2_map,
	&am335x_emif4d_rd_wr_exec_thrsh,
	NULL};

reg **emif_am437x_mods[EMIF_AM437X_MODS_COUNT] = {
	(reg **) &am437x_emif4d_mod};

const char *emif_am437x_mods_name[EMIF_AM437X_MODS_COUNT] = {
	"EMIF4D"};
