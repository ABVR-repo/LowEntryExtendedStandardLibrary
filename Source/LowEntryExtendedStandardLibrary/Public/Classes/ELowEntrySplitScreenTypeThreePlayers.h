#pragma once


#include "CoreMinimal.h"

#include "GameMapsSettings.h"

#include "ELowEntrySplitScreenTypeThreePlayers.generated.h"


UENUM()
enum class ELowEntrySplitScreenTypeThreePlayers : uint8
{
	FavorTop,
	FavorBottom
};


static EThreePlayerSplitScreenType::Type ELowEntrySplitScreenTypeThreePlayersToUE4(ELowEntrySplitScreenTypeThreePlayers Value)
{
	if(Value == ELowEntrySplitScreenTypeThreePlayers::FavorTop)
	{
		return EThreePlayerSplitScreenType::Type::FavorTop;
	}
	if(Value == ELowEntrySplitScreenTypeThreePlayers::FavorBottom)
	{
		return EThreePlayerSplitScreenType::Type::FavorBottom;
	}
	return EThreePlayerSplitScreenType::Type::FavorTop;
}

static ELowEntrySplitScreenTypeThreePlayers ELowEntrySplitScreenTypeThreePlayersFromUE4(EThreePlayerSplitScreenType::Type Value)
{
	if(Value == EThreePlayerSplitScreenType::Type::FavorTop)
	{
		return ELowEntrySplitScreenTypeThreePlayers::FavorTop;
	}
	if(Value == EThreePlayerSplitScreenType::Type::FavorBottom)
	{
		return ELowEntrySplitScreenTypeThreePlayers::FavorBottom;
	}
	return ELowEntrySplitScreenTypeThreePlayers::FavorTop;
}
