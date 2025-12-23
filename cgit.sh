#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")"
gnome-terminal -- bash -lc '$HOME/bin/cgit; echo; echo "Press Enter to close..."; read'
