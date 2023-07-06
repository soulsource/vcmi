/*
 * CArtifactsOfHeroBackpack.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */
#pragma once

#include "CArtifactsOfHeroBase.h"

VCMI_LIB_NAMESPACE_BEGIN

struct ArtifactLocation;

VCMI_LIB_NAMESPACE_END

class CArtifactsOfHeroBackpack : public CArtifactsOfHeroBase
{
public:
	using DestroyHandler = std::function<void()>;

	CArtifactsOfHeroBackpack(const Point & position, DestroyHandler destroyThisCallback);
	void swapArtifacts(const ArtifactLocation & srcLoc, const ArtifactLocation & dstLoc);
	void pickUpArtifact(CHeroArtPlace & artPlace);
	void destroyThis();
	
private:
	DestroyHandler destroyThisCallback;

	const size_t HERO_BACKPACK_WINDOW_SLOT_COLUMNS = 8;
	const size_t HERO_BACKPACK_WINDOW_SLOT_LINES = 8;
};