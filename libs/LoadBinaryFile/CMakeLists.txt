add_library( LoadBinaryFile LoadBinaryFile.c )

target_compile_options( LoadBinaryFile PUBLIC -g -Wall )
target_include_directories( LoadBinaryFile PUBLIC "${PROJECT_SOURCE_DIR}/include" )
