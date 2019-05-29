/*
 * Copyright (c) 2015 - 2017 gooroom <gooroom@gooroom.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef __CLEANUP_H__
#define __CLEANUP_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <glib.h>

G_BEGIN_DECLS

void     cleanup_users           (const char *except_user);
void     cleanup_cookies         (const char *except_user);

gboolean cleanup_function_enabled (void);


G_END_DECLS

#endif /* __CLEANUP_H__ */