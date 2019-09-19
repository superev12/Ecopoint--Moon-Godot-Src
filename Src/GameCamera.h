#pragma once

#include <Godot.hpp>
#include <Camera2D.hpp>
#include "Constants.h"

namespace godot
{
	class GameCamera : public Camera2D
	{
		GODOT_CLASS(GameCamera, Camera2D)
	private:
		Vector2 heading = Vector2(0, 0);
		static const int speed = 20;
	public:
		static void _register_methods();
		GameCamera();
		~GameCamera();
		void _init();
		void _process();
		void pan_left(float amount);
		void pan_right(float amount);
		void pan_up(float amount);
		void pan_down(float amount);
	};
}