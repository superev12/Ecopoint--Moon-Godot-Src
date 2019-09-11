#pragma once

#include <Godot.hpp>
#include <Node2D.hpp>

namespace godot
{
	class TileData : public Node2D
	{
		GODOT_CLASS(TileData, Node2D)
	public:
		static void _register_methods();
		TileData();
		~TileData();
		void _init();
		void _process(float delta);
	};
}