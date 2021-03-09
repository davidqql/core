import sys
import os
sys.path.append("../../../../../build_tools/scripts")
import base

base.configure_common_apps()

# remove previous version
if base.is_dir("./deploy"):
    base.delete_dir("./deploy")
base.create_dir("./deploy")
base.create_dir("./deploy/spell")

# fetch emsdk
command_prefix = "" if ("windows" == base.host_platform()) else "./"
if not base.is_dir("emsdk"):
    base.cmd("git", ["clone", "https://github.com/emscripten-core/emsdk.git"])
    os.chdir("emsdk")
    base.cmd(command_prefix + "emsdk", ["install", "latest"])
    base.cmd(command_prefix + "emsdk", ["activate", "latest"])
    os.chdir("../")

# compile
compiler_flags = ["-o spell.js",
                  "-O3",
                  "-fno-exceptions",
                  "-fno-rtti",
                  "-s WASM=1",
                  "-s ALLOW_MEMORY_GROWTH=1",
                  "-s FILESYSTEM=0",
                  "-s ENVIRONMENT='web,worker'"]

exported_functions = ["_BgraFrame_Create",
                      "_BgraFrame_Destroy"]

libRaster_src_path = "./../../../raster"
input_sources = ["BgraFrame.cpp"]

sources = []
for item in input_sources:
    if base.is_file(libRaster_src_path + '/' + item):
        sources.append(libRaster_src_path + '/' + item)
sources.append("./wasm/src/base.cpp")

compiler_flags.append("-I" + libRaster_src_path)
compiler_flags.append("-DWIN32 -DNDEBUG -DBGRAFRAME_STATIC -DBUILDING_LIBBGRAFRAME -DBGRAFRAME_WASM_MODULE")

# arguments
arguments = ""
for item in compiler_flags:
    arguments += (item + ' ')

arguments += "-s EXPORTED_FUNCTIONS=\"["
for item in exported_functions:
    arguments += ("'" + item + "',")
arguments = arguments[:-1]
arguments += "]\" "

for item in sources:
    arguments += (item + " ")

# command
windows_bat = []
if base.host_platform() == "windows":
    windows_bat.append("call emsdk/emsdk_env.bat")
    windows_bat.append("call emcc " + arguments)
else:
    windows_bat.append("#!/bin/bash")
    windows_bat.append("source ./emsdk/emsdk_env.sh")
    windows_bat.append("emcc " + arguments)
base.run_as_bat(windows_bat)

# write new version
base.copy_file("spell.js",     "./deploy/spell/spell.js")
base.copy_file("spell.wasm",   "./deploy/spell/spell.wasm")
base.copy_file("spell.js.mem", "./deploy/spell/spell.js.mem")
