#!/bin/bash
find . -name '*.sh' -type f -execdir basename {} ';' | sed 's/.sh$//'
