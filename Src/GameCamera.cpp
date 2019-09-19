#include "GameCamera.h"

using namespace godot;

void GameCamera::_register_methods()
{
	register_method((char *)"_process", &GameCamera::_process);
	register_method("pan_left", &GameCamera::pan_left);
	register_method("pan_right", &GameCamera::pan_right);
	register_method("pan_up", &GameCamera::pan_up);
	register_method("pan_down", &GameCamera::pan_down);
}

GameCamera::GameCamera()
{
}

GameCamera::~GameCamera()
{
}

void GameCamera::_init()
{
	make_current();
}

void GameCamera::_process()
{
	set_position(get_position() + speed * heading);
	heading = Vector2(0, 0);
}


void GameCamera::pan_left(float amount)
{
	Godot::print("Panning left");
	Godot::print(get_position());
	heading.x = -amount;
}

void GameCamera::pan_right(float amount)
{
	heading.x = amount;
}

void GameCamera::pan_up(float amount)
{
	heading.y = -amount;
}

void GameCamera::pan_down(float amount)
{
	heading.y = amount;
}