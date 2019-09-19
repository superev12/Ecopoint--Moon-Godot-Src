#pragma once

#include <Godot.hpp>
#include <Node2D.hpp>
#include <Resource.hpp>
#include <ResourceLoader.hpp>
#include <PackedScene.hpp>
#include <Input.hpp>
#include <InputEvent.hpp>
#include <InputEventMouse.hpp>
#include <InputEventMouseButton.hpp>
#include <InputEventKey.hpp>
#include "Constants.h"
#include "GameCamera.h"
#include "TileData.h"

namespace godot
{

	class Main : public Node2D
	{
		GODOT_CLASS(Main, Node2D)
	private:
		GameCamera * mycamera;
		TileData * tileData;
	public:
		static void _register_methods();
		Main();
		~Main();
		void _init();
		void _ready();
		void _process(float delta);
		void _input(InputEvent * event);
		void doInput(InputEventKey * event);
		void doInput(InputEventMouseButton * event);
	};
};
