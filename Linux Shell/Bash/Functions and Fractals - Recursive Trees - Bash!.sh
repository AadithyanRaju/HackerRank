#!/bin/bash

declare -A asciiPattern

generateFractalTree() {
    local depth=$1 left=$2 row=$3 col=$4

    [[ $depth -eq 0 ]] && return

    for ((i=left; i; i--)); do
        asciiPattern[$((row-i)).$col]=1
    done

    ((row -= left))
    for ((i=left; i; i--)); do
        asciiPattern[$((row-i)).$((col-i))]=1
        asciiPattern[$((row-i)).$((col+i))]=1
    done

    generateFractalTree $((depth-1)) $((left/2)) $((row-left)) $((col-left))
    generateFractalTree $((depth-1)) $((left/2)) $((row-left)) $((col+left))
}

read -p "Enter the number of iterations: " iterations

generateFractalTree $iterations 16 63 49

for ((i=0; i<63; i++)); do
    for ((j=0; j<100; j++)); do
        if [[ ${asciiPattern[$i.$j]} ]]; then
            printf 1
        else
            printf _
        fi
    done
    echo
done
