/*
	This file is part of apfs-fuse, a read-only implementation of APFS
	(Apple File System) for FUSE.
	Copyright (C) 2017 Simon Gander

	Apfs-fuse is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	Apfs-fuse is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with apfs-fuse.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "ApfsTypes.h"

struct omap_res_t
{
	oid_t oid;
	xid_t xid;
	uint32_t flags;
	uint32_t size;
	paddr_t paddr;
};

class ApfsNodeMapper
{
public:
	ApfsNodeMapper();
	virtual ~ApfsNodeMapper();

	virtual bool Lookup(omap_res_t &res, oid_t oid, xid_t xid) = 0;
};
