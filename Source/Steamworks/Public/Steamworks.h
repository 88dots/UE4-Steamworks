//Copyright 2016 davevillz, https://github.com/davevill

#pragma once

#include "ModuleManager.h"


#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif

#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT

#include "steam/steam_api.h"
#include "steam/steam_gameserver.h"

#pragma pop_macro("ARRAY_COUNT")

#ifdef _MSC_VER
#pragma warning(pop)
#endif




class FSteamworksModule : public IModuleInterface
{
private:


	class FOnlineFactorySteam* SteamFactory;


public:


	virtual void StartupModule() override;
	virtual void ShutdownModule() override;



};

DECLARE_LOG_CATEGORY_EXTERN(SteamworksLog, Log, All);


DECLARE_STATS_GROUP(TEXT("Steamworks"), STATGROUP_Steamworks, STATCAT_Advanced);