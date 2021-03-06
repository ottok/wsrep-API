/* Copyright (c) 2019, Codership Oy. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

/**
 * @file This unit defines performance statistics loop
 */

#ifndef NODE_STATS_H
#define NODE_STATS_H

#include "ctx.h"

/**
 * Prints out statistics with a given period.
 *
 * @param[in] node   node context
 * @param[in] period in seconds
 */
extern void
node_stats_loop(const struct node_ctx* node, int period);

#endif /* NODE_STATS_H */
