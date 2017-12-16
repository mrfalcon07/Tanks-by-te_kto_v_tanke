cmake_minimum_required(VERSION 3.8)
project(Tanks)

set(CMAKE_CXX_STANDARD 17)

include_directories(/home/mrfalcon/CLionProjects/Tanks/SFML-2.4.2/include)
link_libraries(/home/mrfalcon/CLionProjects/Tanks/SFML-2.4.2/lib)

set(SOURCE_FILES main.cpp config.h config.cpp AbstructBullet.h AbstructBullet.cpp AbstructMovable.h AbstructMovable.cpp AbstructObject.h AbstructObject.cpp AbstructSciene.h AbstructSciene.cpp AbstructTank.h AbstructTank.cpp InterfaceObject.h InterfaceObject.cpp InterfaceSciene.h PhisicalBullet.h PhisicalBullet.cpp PhisicalMovable.h PhisicalMovable.cpp PhisicalObject.h PhisicalObject.cpp PhisicalSciene.h PhisicalSciene.cpp PhisicalTank.h PhisicalTank.cpp RenderBullet.h RenderBullet.cpp RenderMovable.h RenderMovable.cpp RenderObject.h RenderObject.cpp RenderSciene.h RenderSciene.cpp RenderTank.h RenderTank.cpp InterfaceSciene.cpp RenderBoom.h RenderBoom.cpp AbstructBoom.h AbstructBoom.cpp PhisicalBoom.h PhisicalBoom.cpp)
add_executable(Tanks ${SOURCE_FILES})

target_link_libraries(Tanks sfml-system sfml-window sfml-graphics sfml-network)