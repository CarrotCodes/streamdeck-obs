/*
Plugin Name
Copyright (C) <Year> <Developer> <Email Address>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#ifndef PLUGINNAME_H
#define PLUGINNAME_H

#define PLUGIN_NAME "StreamDeckPlugin-carrot"
#define PLUGIN_VERSION "1.1.0"
#define STREAMDECK_VERSION_MAJOR 1
#define STREAMDECK_VERSION_MINOR 1
#define STREAMDECK_VERSION_PATCH 0
#define STREAMDECK_VERSION_BUILD
#define STREAMDECK_COMMIT ""
#define STREAMDECK_VERSION ""

#define blog(level, msg, ...) \
	blog(level, "[" PLUGIN_NAME "] " msg, ##__VA_ARGS__)

#endif // PLUGINNAME_H