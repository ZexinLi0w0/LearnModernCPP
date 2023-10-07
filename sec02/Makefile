C = gcc
CXX = clang++

# 2,1
# SOURCE_CXX = null.cpp
# SOURCE_CXX = const.cpp

# 2.2
# SOURCE_CXX = if-switch.cpp
# SOURCE_CXX = if-switch-enhance.cpp
# SOURCE_CXX = old-initializer-list.cpp
# SOURCE_CXX = new-initializer-list.cpp
# SOURCE_CXX = structured-binding.cpp



TARGET = out
LDFLAGS_COMMON = -std=c++2a

all:
	$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(LDFLAGS_COMMON) -o $(TARGET)
clean:
	rm -rf *.o $(TARGET)
