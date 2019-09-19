#include <NodePath.hpp>
#include "Main.h"

using namespace godot;

void Main::_register_methods()
{
	register_method((char *)"_process", &Main::_process);
	register_method((char *)"_ready", &Main::_ready);
	register_method((char *)"_input", &Main::_input);
}

Main::Main()
{
}

Main::~Main()
{
}

void Main::_init() {}

void Main::_ready()
{
	set_process_input(true);
	Godot::print("Hey");
	// Spawn a tile below
	Array children = get_children();
	for (int i = 0; i < children.size(); i++)
	{
		Godot::print(children[i]);
	}
	tileData = (TileData *)get_children()[1];
	mycamera = (GameCamera *)get_children()[2];
}

void Main::_process(float delta) {}

void Main::_input(InputEvent * event)
{
	doInput(event);
}

void Main::doInput(InputEventKey * event)
{
	if (event->is_action_type())
	{	
		if (event->is_action_pressed("ui_left"))
		{
			mycamera->pan_left(constants::CAMERA_SPEED);
		}
		if (event->is_action_pressed("ui_right"))
		{
			mycamera->pan_right(constants::CAMERA_SPEED);
		}
		if (event->is_action_pressed("ui_up"))
		{
			mycamera->pan_up(constants::CAMERA_SPEED);
		}
		if (event->is_action_pressed("ui_down"))
		{
			mycamera->pan_down(constants::CAMERA_SPEED);
		}
	}
}

void Main::doInput(InputEventMouseButton * event)
{
	Godot::print("Did something with mouse");
}
