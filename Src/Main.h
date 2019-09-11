#pragma once

#include <Godot.hpp>
#include <Node2D.hpp>
#include <Resource.hpp>
#include <ResourceLoader.hpp>
#include <PackedScene.hpp>

namespace godot
{
	class Main : public Node2D
	{
		GODOT_CLASS(Main, Node2D)
	private:
		Ref<PackedScene> TileScene;
	public:
		static void _register_methods();
		Main();
		~Main();
		void _init();
		void _process(float delta);
	};
}
