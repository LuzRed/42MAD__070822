#!/bin/sh
commits_id=$(git log -5 --pretty=format:"%H")
echo "$commits_id"
