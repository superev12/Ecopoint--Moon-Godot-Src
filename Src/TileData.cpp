#include "TileData.h"

using namespace godot;

void TileData::_register_methods()
{
	register_method((char*)"_process", &TileData::_process);
}

TileData::TileData()
{
	Godot::print("Created Tiledata");
}

TileData::~TileData()
{
	delete [] map;
}

void TileData::_init()
{
	Godot::print("You made a tiledata manager. Hah! TEST");
	ResourceLoader * p = ResourceLoader::get_singleton();
	TileScene = p->load("res://Tile.tscn");
	Node2D * n = (Node2D *)TileScene->instance();
	n->set_name("Greg");
	n->set_position(Vector2(0, 0));
	add_child(n);
	
	//Add tiles to map
	for (int x = 0; x < constants::MAP_W; x++)
	{
		for (int y = 0; y < constants::MAP_H; y++)
		{
			map[x][y] = (Node2D *)TileScene->instance();
			String nodeName = "Tile (" + String(x) + ":" + String(y) + ")";
			map[x][y]->set_name(nodeName);
			add_child(map[x][y]);
			map[x][y]->set_position(Vector2(x*constants::GRID_SIZE, y*constants::GRID_SIZE));
		}
	}
}

void TileData::_process(float delta)
{
}