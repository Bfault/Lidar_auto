#!/bin/bash
IA_LANGUAGE=$1
IA_PATH=""

if [ ! $IA_LANGUAGE == python ] && [ ! $IA_LANGUAGE == c ] || [ ! $IA_LANGUAGE ]; then
    echo "Use 'python' or 'c' in argument"
    exit 1
fi

if [ $IA_LANGUAGE == python ]
then
    IA_PATH="../lidar_ai_python/dist/lidar_ai/lidar_ai"
else
    IA_PATH="../lidar_ai_c/ai"
fi

( cd miscelianous ; ./pipes.sh $IA_PATH )