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

void Tile::_init()
{
}

void Tile::_process(float delta)
{
}

bool Tile::has_room()
{
	return room;
}