will do

cat h | cut -d '.' -f 1 | xargs touch
ls !(*.md|*.h) | xargs -i mv {} {}.c
ls *.c.c | cut -d '.' -f 1 | xargs -i mv {}.c.c {}.c
