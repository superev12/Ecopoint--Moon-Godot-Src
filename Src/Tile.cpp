#include "Tile.h"

using namespace godot;

void Tile::_register_methods()
{
	register_method((char*)"_process", &Tile::_process);
}

Tile::Tile()
{
}

Tile::~Tile()
{
}

void godot::Tile::_init()
{
	Godot::print("You made a tile.");
}

void godot::Tile::_process(float delta)
{
}
