#include "Main.h"
#include "Tile.h"
#include "TileData.h"

using namespace godot;

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options * o)
{
	Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options * o)
{
	Godot::gdnative_terminate(0);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void * handle)
{
	Godot::nativescript_init(handle);
	register_class<Main>();
	register_class<Tile>();
	register_class<TileData>();
}