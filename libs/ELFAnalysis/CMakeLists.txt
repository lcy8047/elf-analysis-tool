add_library( ELFAnalysis ELFAnalysis.c )

target_compile_options( ELFAnalysis PUBLIC -g -Wall )
target_include_directories( ELFAnalysis PUBLIC "${PROJECT_SOURCE_DIR}/include" )
