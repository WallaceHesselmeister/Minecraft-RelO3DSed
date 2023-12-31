#pragma once
#include <stdbool.h>
#include <world/World.h>
#include <gui/Inventory.h>
#include <inventory/ItemStack.h>
#include <misc/Raycast.h>
#include <misc/VecMath.h>
#define PLAYER_EYEHEIGHT (1.65f)
#define PLAYER_HEIGHT (1.8f)
#define PLAYER_COLLISIONBOX_SIZE (0.65f)
#define PLAYER_HALFEYEDIFF (0.13f)
#define PLAYER_PLACE_REPLACE_TIMEOUT (0.2f)

typedef struct {
	float3 position;
	float pitch, yaw;
	float bobbing, fovAdd, crouchAdd;
	bool grounded, jumped, sprinting, flying, crouching;
	World* world;

	float3 view;

	bool autoJumpEnabled;

	float3 velocity;
	float simStepAccum;

	float breakPlaceTimeout;

	ItemStack inventory[50]; //MODIFY THIS FOR MORE/LESS INVENTORY SPACES

	int quickSelectBarSlots;
	int quickSelectBarSlot;
	ItemStack quickSelectBar[INVENTORY_QUICKSELECT_MAXSLOTS];  // TODO: wenn die Fenstergröße verändert wird irgendwas tuen --- do something when the window size is changed

	Raycast_Result viewRayCast;
	bool blockInSeight, blockInActionRange;
} Player;

void Player_Init(Player* player, World* world);

void Player_Update(Player* player);

void Player_Move(Player* player, float dt, float3 accl);

void Player_PlaceBlock(Player* player);
void Player_BreakBlock(Player* player);

void Player_Jump(Player* player, float3 accl);

void Player_Forward(Player* player, float3 accl);

void Player_Teleport(Player* player, float x, float y, float z);
