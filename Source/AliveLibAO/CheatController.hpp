#pragma once

#include "BaseGameObject.hpp"
#include "FunctionFwd.hpp"

namespace AO {

class CheatController : public BaseGameObject
{
public:
    EXPORT CheatController* ctor_40FBF0();

    virtual BaseGameObject* VDestructor(signed int flags) override;

    virtual void VScreenChanged() override;

    EXPORT BaseGameObject* dtor_40FC20();

    EXPORT CheatController* Vdtor_40FCD0(signed int flags);

    virtual void VUpdate() override;

    EXPORT void VUpdate_40FC40();

    __int16 field_10;
    __int16 field_12;
};
ALIVE_ASSERT_SIZEOF(CheatController, 0x14);

ALIVE_VAR_EXTERN(CheatController*, pCheatController_4FF958);

ALIVE_VAR_EXTERN(short, sEnableFartGasCheat_507704);
ALIVE_VAR_EXTERN(short, sVoiceCheat_507708);
ALIVE_VAR_EXTERN(short, sEnableCheatFMV_50770C);
ALIVE_VAR_EXTERN(short, sEnableCheatLevelSelect_507710);

}
