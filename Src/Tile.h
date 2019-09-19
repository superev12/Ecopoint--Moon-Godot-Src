#pragma once

#include <Godot.hpp>
#include <Node2D.hpp>

namespace godot
{
	class Tile : public Node2D
	{
		GODOT_CLASS(Tile, Node2D)
	private:
		bool room = false;
	public:
		static void _register_methods();
		Tile();
		~Tile();
		void _init();
		void _process(float delta);

		bool has_room();
	};
}