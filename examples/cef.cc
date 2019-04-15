#include <iostream>
#include "darknet.h"

int main(int argc, char const *argv[]) {
  std::cout << "hello cef!" << std::endl;
  const char *cfg = argv[4];
  const char *weights = argv[5];
  float thresh = 0.5;
  int cam_index = 0;
  char *filename = 0;
  char **names = get_labels("data/names.list");
  int classes = 20;
  int frame_skip = 0;
  char *prefix = 0;
  int avg = 3;
  float hier_thresh = .5;
  int width = 0;
  int height = 0;
  int fps = 0;
  int fullscreen = 0;
  demo(cfg, weights, thresh, cam_index, filename, names, classes, frame_skip,
       prefix, avg, hier_thresh, width, height, fps, fullscreen);
  return 0;
}
