#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Store_BannerMessage

#include "Basic.hpp"

#include "Store_BannerMessage_classes.hpp"
#include "Store_BannerMessage_parameters.hpp"


namespace SDK
{

// Function Store_BannerMessage.Store_BannerMessage_C.Pulse
// (Public, BlueprintCallable, BlueprintEvent)

void UStore_BannerMessage_C::Pulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Store_BannerMessage_C", "Pulse");

	UObject::ProcessEvent(Func, nullptr);
}

}
