#include "z_en_torch2.h"

#define FLAGS 0x00000010

#define THIS ((EnTorch2*)thisx)

void EnTorch2_Init(Actor* thisx, GlobalContext* globalCtx);
void EnTorch2_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnTorch2_Update(Actor* thisx, GlobalContext* globalCtx);
void EnTorch2_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Torch2_InitVars = {
    ACTOR_EN_TORCH2,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnTorch2),
    (ActorFunc)EnTorch2_Init,
    (ActorFunc)EnTorch2_Destroy,
    (ActorFunc)EnTorch2_Update,
    (ActorFunc)EnTorch2_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/EnTorch2_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/EnTorch2_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/EnTorch2_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/func_808A3428.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/func_808A3458.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Torch2_0x808A31B0/EnTorch2_Draw.asm")
