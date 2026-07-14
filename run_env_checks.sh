#!/user/bin/env bash
set -e
gcc --version >/dev/null
make --version >/dev/null
gdb --version >/dev/null
valgrind --version >/dev/null
echo "ENV OK"
