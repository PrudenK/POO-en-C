default_target: all
.PHONY : default_target
.NOTPARALLEL:
.SUFFIXES:
% : %,v
% : RCS/%
% : RCS/%,v
% : SCCS/s.%
% : s.%
.SUFFIXES: .hpux_make_needs_suffix_list
$(VERBOSE)MAKESILENT = -s
$(VERBOSE).SILENT:
cmake_force:
.PHONY : cmake_force
SHELL = /bin/sh
CMAKE_COMMAND = /home/pruden/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake
RM = /home/pruden/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f
EQUALS = =
CMAKE_SOURCE_DIR = /home/pruden/CLionProjects/Formas
CMAKE_BINARY_DIR = /home/pruden/CLionProjects/Formas
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "No interactive CMake dialog available..."
	/home/pruden/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/home/pruden/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pruden/CLionProjects/Formas/CMakeFiles /home/pruden/CLionProjects/Formas//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pruden/CLionProjects/Formas/CMakeFiles 0
.PHONY : all
codegen: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pruden/CLionProjects/Formas/CMakeFiles /home/pruden/CLionProjects/Formas//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 codegen
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pruden/CLionProjects/Formas/CMakeFiles 0
.PHONY : codegen
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean
clean/fast: clean
.PHONY : clean/fast
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend
Formas: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Formas
.PHONY : Formas
Formas/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/build
.PHONY : Formas/fast
formas/circunferencia.o: formas/circunferencia.c.o
.PHONY : formas/circunferencia.o
formas/circunferencia.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/circunferencia.c.o
.PHONY : formas/circunferencia.c.o
formas/circunferencia.i: formas/circunferencia.c.i
.PHONY : formas/circunferencia.i
formas/circunferencia.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/circunferencia.c.i
.PHONY : formas/circunferencia.c.i
formas/circunferencia.s: formas/circunferencia.c.s
.PHONY : formas/circunferencia.s
formas/circunferencia.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/circunferencia.c.s
.PHONY : formas/circunferencia.c.s
formas/cuadrado.o: formas/cuadrado.c.o
.PHONY : formas/cuadrado.o
formas/cuadrado.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/cuadrado.c.o
.PHONY : formas/cuadrado.c.o
formas/cuadrado.i: formas/cuadrado.c.i
.PHONY : formas/cuadrado.i
formas/cuadrado.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/cuadrado.c.i
.PHONY : formas/cuadrado.c.i
formas/cuadrado.s: formas/cuadrado.c.s
.PHONY : formas/cuadrado.s
formas/cuadrado.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/cuadrado.c.s
.PHONY : formas/cuadrado.c.s
formas/forma.o: formas/forma.c.o
.PHONY : formas/forma.o
formas/forma.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/forma.c.o
.PHONY : formas/forma.c.o
formas/forma.i: formas/forma.c.i
.PHONY : formas/forma.i
formas/forma.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/forma.c.i
.PHONY : formas/forma.c.i
formas/forma.s: formas/forma.c.s
.PHONY : formas/forma.s
formas/forma.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/forma.c.s
.PHONY : formas/forma.c.s
formas/pentagono.o: formas/pentagono.c.o
.PHONY : formas/pentagono.o
formas/pentagono.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/pentagono.c.o
.PHONY : formas/pentagono.c.o
formas/pentagono.i: formas/pentagono.c.i
.PHONY : formas/pentagono.i
formas/pentagono.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/pentagono.c.i
.PHONY : formas/pentagono.c.i
formas/pentagono.s: formas/pentagono.c.s
.PHONY : formas/pentagono.s
formas/pentagono.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/pentagono.c.s
.PHONY : formas/pentagono.c.s
formas/triangulo_equi.o: formas/triangulo_equi.c.o
.PHONY : formas/triangulo_equi.o
formas/triangulo_equi.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/triangulo_equi.c.o
.PHONY : formas/triangulo_equi.c.o
formas/triangulo_equi.i: formas/triangulo_equi.c.i
.PHONY : formas/triangulo_equi.i
formas/triangulo_equi.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/triangulo_equi.c.i
.PHONY : formas/triangulo_equi.c.i
formas/triangulo_equi.s: formas/triangulo_equi.c.s
.PHONY : formas/triangulo_equi.s
formas/triangulo_equi.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/formas/triangulo_equi.c.s
.PHONY : formas/triangulo_equi.c.s
main.o: main.c.o
.PHONY : main.o
main.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/main.c.o
.PHONY : main.c.o
main.i: main.c.i
.PHONY : main.i
main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/main.c.i
.PHONY : main.c.i
main.s: main.c.s
.PHONY : main.s
main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/main.c.s
.PHONY : main.c.s
opciones_menu/opciones_menu_principal.o: opciones_menu/opciones_menu_principal.c.o
.PHONY : opciones_menu/opciones_menu_principal.o
opciones_menu/opciones_menu_principal.c.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/opciones_menu/opciones_menu_principal.c.o
.PHONY : opciones_menu/opciones_menu_principal.c.o
opciones_menu/opciones_menu_principal.i: opciones_menu/opciones_menu_principal.c.i
.PHONY : opciones_menu/opciones_menu_principal.i
opciones_menu/opciones_menu_principal.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/opciones_menu/opciones_menu_principal.c.i
.PHONY : opciones_menu/opciones_menu_principal.c.i
opciones_menu/opciones_menu_principal.s: opciones_menu/opciones_menu_principal.c.s
.PHONY : opciones_menu/opciones_menu_principal.s
opciones_menu/opciones_menu_principal.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Formas.dir/build.make CMakeFiles/Formas.dir/opciones_menu/opciones_menu_principal.c.s
.PHONY : opciones_menu/opciones_menu_principal.c.s
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... codegen"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Formas"
	@echo "... formas/circunferencia.o"
	@echo "... formas/circunferencia.i"
	@echo "... formas/circunferencia.s"
	@echo "... formas/cuadrado.o"
	@echo "... formas/cuadrado.i"
	@echo "... formas/cuadrado.s"
	@echo "... formas/forma.o"
	@echo "... formas/forma.i"
	@echo "... formas/forma.s"
	@echo "... formas/pentagono.o"
	@echo "... formas/pentagono.i"
	@echo "... formas/pentagono.s"
	@echo "... formas/triangulo_equi.o"
	@echo "... formas/triangulo_equi.i"
	@echo "... formas/triangulo_equi.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... opciones_menu/opciones_menu_principal.o"
	@echo "... opciones_menu/opciones_menu_principal.i"
	@echo "... opciones_menu/opciones_menu_principal.s"
.PHONY : help
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system