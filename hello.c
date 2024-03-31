int putchar(int x);
int main() {
  const char* msg = "Hello, world!\n";
  for (; *msg; msg++)
    putchar(*msg);
  return 0;
}
