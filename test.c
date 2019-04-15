struct s {
  float x;
  float y;
  float w;
  float h;
};

struct w {
  int n;
  struct s st[2];
};

int main(int argc, char const *argv[]) {
  struct s ss[2];
  struct w h;
  struct s *ps0, *ps1;
  int *o;
  ps0 = &h.st[0];
  ps1 = &h.st[1];
  o = &h.n;
  return 0;
}
