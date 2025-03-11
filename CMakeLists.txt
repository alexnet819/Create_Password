cmake_minimum_required(VERSION 3.10)

# プロジェクト名とバージョン
project(Create_Password VERSION 1.0)

# C++の標準を設定
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# サブディレクトリを追加
add_subdirectory(src)

# 実行ファイルを追加
add_executable(Create_Password main.cpp)

# ライブラリをリンク
target_link_libraries(Create_Password PRIVATE Random_Str)