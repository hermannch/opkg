/* vi: set expandtab sw=4 sts=4: */
/* opkg_upgrade.c - the opkg package management system

   Copyright (C) 2003 Daniele Nicolodi <daniele@grinta.net>

   SPDX-License-Identifier: GPL-2.0-or-later

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.
*/
#ifndef OPKG_UPGRADE_INTERNAL_H
#define OPKG_UPGRADE_INTERNAL_H

#include "pkg.h"
#include "pkg_vec.h"

#ifdef __cplusplus
extern "C" {
#endif

int opkg_upgrade_pkg(pkg_t * old);
int opkg_upgrade_multiple_pkgs(pkg_vec_t * pkgs_to_upgrade);
void prepare_upgrade_list(struct list_head *head);

#ifdef __cplusplus
}
#endif
#endif                          /* OPKG_UPGRADE_INTERNAL_H */
