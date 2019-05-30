

#增加opencv的依赖
FIND_PACKAGE(OpenCV REQUIRED)

ADD_EXECUTABLE(read_image readimage.cpp)
TARGET_LINK_LIBRARIES(read_image ${OpenCV_LIBS})
