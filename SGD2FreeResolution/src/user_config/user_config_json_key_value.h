/**
 * SlashGaming Diablo II Free Resolution
 * Copyright (C) 2019-2021  Mir Drualga
 *
 * This file is part of SlashGaming Diablo II Free Resolution.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Additional permissions under GNU Affero General Public License version 3
 *  section 7
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with Diablo II (or a modified version of that game and its
 *  libraries), containing parts covered by the terms of Blizzard End User
 *  License Agreement, the licensors of this Program grant you additional
 *  permission to convey the resulting work. This additional permission is
 *  also extended to any combination of expansions, mods, and remasters of
 *  the game.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any Graphics Device Interface (GDI), DirectDraw, Direct3D,
 *  Glide, OpenGL, or Rave wrapper (or modified versions of those
 *  libraries), containing parts not covered by a compatible license, the
 *  licensors of this Program grant you additional permission to convey the
 *  resulting work.
 *
 *  If you modify this Program, or any covered work, by linking or combining
 *  it with any library (or a modified version of that library) that links
 *  to Diablo II (or a modified version of that game and its libraries),
 *  containing parts not covered by a compatible license, the licensors of
 *  this Program grant you additional permission to convey the resulting
 *  work.
 */

#ifndef SGD2FR_USER_CONFIG_USER_CONFIG_JSON_KEY_VALUE_H_
#define SGD2FR_USER_CONFIG_USER_CONFIG_JSON_KEY_VALUE_H_

#define CONFIG_MAIN "sgd2FreeResolution"

#define CONFIG_METADATA "!!!metadata(DoNotModify)!!!"

#define CONFIG_METADATA_VERSION "version"

#define CONFIG_METADATA_VERSION_MAJOR_HIGH "majorHigh"
#define CONFIG_METADATA_VERSION_MAJOR_LOW "majorLow"
#define CONFIG_METADATA_VERSION_MINOR_HIGH "minorHigh"
#define CONFIG_METADATA_VERSION_MINOR_LOW "minorLow"

#define CONFIG_INGAME_RESOLUTION_MODE "ingameResolutionMode"
#define CONFIG_INGAME_RESOLUTIONS "ingameResolutions"

#define CONFIG_MAIN_MENU_RESOLUTION "mainMenuResolution"

#define CONFIG_IS_ENABLE_SCREEN_BORDER_FRAME "enableScreenBorderFrame"
#define CONFIG_IS_USE_ORIGINAL_SCREEN_BORDER_FRAME \
    "useOriginalScreenBorderFrame"
#define CONFIG_IS_USE_800_INTERFACE_BAR "use800InterfaceBar?"

#define CONFIG_CUSTOM_MPQ_PATH "customMpqPath"

#endif /* SGD2FR_USER_CONFIG_USER_CONFIG_JSON_KEY_VALUE_H_ */
