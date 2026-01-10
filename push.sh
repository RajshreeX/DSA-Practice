#!/bin/bash
DATE=$(date +"%Y-%m-%d")
git add .
git commit -m "Daily DSA practice: $DATE"
git push
