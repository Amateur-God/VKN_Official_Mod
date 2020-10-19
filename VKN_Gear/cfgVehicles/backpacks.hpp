class VKN_Kitbag_Base: B_Kitbag_rgr {
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	scope = private;
	model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
};

class VKN_Kitbag_Black: VKN_Kitbag_Base {
	author = "Curious";
	scope = public;
	displayName="[VKN] Backpack - Black";
	hiddenSelectionsTextures[]={"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
};

class VKN_Kitbag_Black_Medical: VKN_Kitbag_Base {
	author = "Curious";
	scope = public;
	displayName="[VKN] Backpack - Black + Medical";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_blk_medical_co.paa"};
};

class VKN_Kitbag_OD_Medical: VKN_Kitbag_Base {
	author = "Apple";
	scope = public;
	displayName="[VKN] Backpack - OD + Medical";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_od_medical_co.paa"};
};
class VKN_Kitbag_OCP_Medical: VKN_Kitbag_Base {
	author = "Apple";
	scope = public;
	displayName="[VKN] Backpack - OCP + Medical";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_ocp_medical_co.paa"};
};
class VKN_Black_Kitbag: VKN_Kitbag_Base {
	displayName="[VKN] FBA Kitbag - Black";
	author="Apple";
	scope = public;
	model="A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_Bag_Kitbag.paa"};
};
class VKN_Black_Carryall: B_Carryall_Base {
	scope=2;
	displayName="[VKN] FBA Carryall - Black";
	author="Apple";
	model="A3\weapons_f\ammoboxes\bags\Backpack_Tortila.p3d";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_Bag_Carryall.paa"};
};
class VKN_Black_Assault: B_AssaultPack_Base {
	scope=2;
	displayName="[VKN] FBA Assault Pack (BLACK-er)";
	author="Apple";
	model="A3\weapons_f\ammoboxes\bags\Backpack_Compact.p3d";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_Bag_Assault.paa"};
};

class VKN_M98_Assault: B_AssaultPack_Base {
	scope=2;
	displayName="[VKN] Assault Pack (M98)";
	author="Jonmo";
	model="A3\weapons_f\ammoboxes\bags\Backpack_Compact.p3d";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_compact_M98_co.paa"};
};

class VKN_M90_Assault: B_AssaultPack_Base {
	scope=2;
	displayName="[VKN] Assault Pack (M90)";
	author="Jonmo";
	model="A3\weapons_f\ammoboxes\bags\Backpack_Compact.p3d";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_compact_M90_co.paa"};
};

class TRYK_B_Medbag_OD: Bag_Base {
	scope = public;
	author = "Teriyaki";
	picture = "\TRYK_Unit\Data\tryk.paa";
	model = "\VKN_Gear\data\Models\backpack_MED.p3d";
	displayName = "[VKN] TRYK Medical Backpack (OD)";
	maximumLoad = 280;
	mass = 50;
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_medic_bag_OD.paa"};
};
class TRYK_B_Medbag_BK: TRYK_B_Medbag_OD {
	picture = "\TRYK_Unit\Data\tryk.paa";
	displayName = "[VKN] TRYK Medical Backpack (Black)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_medic_bag_BK.paa"};
};
