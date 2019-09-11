#include "TileData.h"

using namespace godot;

void TileData::_register_methods()
{
	register_method((char*)"_process", &TileData::_process);
}

TileData::TileData()
{

}

TileData::~TileData()
{

}

void TileData::_init()
{
	Godot::print("You made a tiledata manager. Hah! TEST");
}

void TileData::_process(float delta)
{
}