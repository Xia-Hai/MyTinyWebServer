CXX ?= g++

DEBUG ?= 1
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g
else
    CXXFLAGS += -O2

endif

server: ./src/*.cpp
	$(CXX) -o server  $^ $(CXXFLAGS) -lpthread -lmysqlclient -I/usr/include/mysql	-L/usr/lib64/mysql

clean:
	rm  -r server
