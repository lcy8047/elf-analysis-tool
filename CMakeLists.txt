project( elf_analysis_tool )

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )

add_subdirectory( libs )

add_executable( elf_analysis_tool elf_analysis_tool.c )
target_compile_options( elf_analysis_tool PUBLIC -g -Wall )
target_link_libraries( elf_analysis_tool LoadBinaryFile )
target_include_directories( elf_analysis_tool PUBLIC "${PROJECT_SOURCE_DIR}/include" )
set_target_properties( elf_analysis_tool PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

