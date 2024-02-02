project( elf_analysis_tool )

add_executable( elf_analysis_tool elf_analysis_tool.c )
target_compile_options( elf_analysis_tool PUBLIC -g -Wall )
set_target_properties( elf_analysis_tool PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )


