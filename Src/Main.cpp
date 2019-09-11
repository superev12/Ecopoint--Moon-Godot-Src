#include "Main.h"

using namespace godot;

void Main::_register_methods()
{
	register_method((char*)"_process", &Main::_process);
}

Main::Main()
{
}

Main::~Main()
{
}

void godot::Main::_init()
{
	Godot::print("Hey");
	// Spawn a tile below
	ResourceLoader * p = ResourceLoader::get_singleton();
	TileScene = p->load("res://Tile.tscn");
	Node2D * n = (Node2D *)TileScene->instance();
	n->set_name("Greg");
	n->set_position(Vector2(0, 0));
	add_child(n);
}

void godot::Main::_process(float delta)
{
}
