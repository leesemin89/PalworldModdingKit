#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeB.generated.h"

UENUM(BlueprintType)
enum class EPalItemTypeB : uint8 {
    None,
    WeaponMelee,
    WeaponBow,
    WeaponCrossbow,
    WeaponHandgun,
    WeaponAssaultRifle,
    WeaponSniperRifle,
    WeaponRocketLauncher,
    WeaponShotgun,
    WeaponFlameThrower,
    WeaponGatlingGun,
    WeaponCollectionTool,
    WeaponThrowObject,
    SPWeaponCaptureBall,
    SPWeaponDamageTrap,
    SPWeaponCaptureTrap,
    SPWeaponCaptureRope,
    ArmorHead,
    ArmorBody,
    Accessory,
    MaterialOre,
    MaterialJewelry,
    MaterialIngot,
    MaterialWood,
    MaterialStone,
    MaterialProccessing,
    MaterialMonster,
    MaterialPalEgg,
    ConsumeBandage,
    ConsumeSeed,
    ConsumeBullet,
    ConsumeWazaMachine,
    ConsumeTechnologyBook,
    ConsumeOther,
    FoodMeat,
    FoodVegetable,
    FoodFish,
    FoodDishMeat,
    FoodDishVegetable,
    FoodDishFish,
    FoodProcessed,
    Essential,
    Essential_UnlockPlayerFuture,
    Glider,
    Shield,
    Money,
    Medicine,
    Drug,
    MonsterEquipWeapon,
    Blueprint,
};

