#!\bin\bash
find . -type d -or -type f | wc -l | awk '{print$1}'
