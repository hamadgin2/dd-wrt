/*
 * Copyright (C) 2001-2004 Sistina Software, Inc. All rights reserved.
 * Copyright (C) 2004-2007 Red Hat, Inc. All rights reserved.
 *
 * This file is part of LVM2.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "tools.h"

#include "lvm2cmdline.h"

int main(int argc, char **argv)
{
	init_is_static(1);
	return lvm2_main(argc, argv);
}

int lvm_shell(struct cmd_context *cmd __attribute__((unused)),
	      struct cmdline_context *cmdline __attribute__((unused)))
{
	return 0;
}
