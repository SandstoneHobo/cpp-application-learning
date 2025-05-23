pkg_flags = `pkg-config gtkmm-4.0 --cflags --libs`
src_files = main.cpp windowGen.cpp
header_files = windowGen.h
executable_name = cpp_app

executable: $(src_files) $(header_files)
	g++ -Wall -o $(executable_name) $(src_files) $(pkg_flags) 
