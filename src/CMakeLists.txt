# ライブラリを追加
add_library(Random_Str STATIC Random_Str.cpp)

# インクルードディレクトリを指定
target_include_directories(Random_Str PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})