/**
 * @brief Header file for define the project's configuration variables procedurally, so they
 *        can be included and used later in the source code.
 * 
 *        The data that initializes the constant evaluated expresions are just placeholders that
 *        will be parsed and filled by CMake at build time. This configuration file later will be
 *        copied to a concrete location in the build folder, and converted into a real CPP header 
 * @file config.hpp.in
 * @author Alex Vergara (alex.vergara.dev@gmail.com)
 * @version 0.1.0
 * @date 2024-01-03
 */

#pragma once

#include <string_view>

static constexpr std::string_view project_name {"rumble_lol_plugin"};
static constexpr std::string_view project_version {"0.1.0"};

static constexpr std::string_view project_version_major {"0"};
static constexpr std::string_view project_version_minor {"1"};
static constexpr std::string_view project_version_patch {"0"};
