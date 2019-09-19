#pragma once

#include <Godot.hpp>
#include <Node2D.hpp>
#include <Resource.hpp>
#include <ResourceLoader.hpp>
#include <PackedScene.hpp>
#include "Constants.h"

namespace godot
{
	class TileData : public Node2D
	{
		GODOT_CLASS(TileData, Node2D)
	private:
		Node2D * map[constants::MAP_W][constants::MAP_H];
		Ref<PackedScene> TileScene;
	public:
		static void _register_methods();
		TileData();
		~TileData();
		void _init();
		void _process(float delta);
	};
}