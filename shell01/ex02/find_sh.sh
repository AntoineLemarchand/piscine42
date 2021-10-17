find . -type f -name "*.sh" | sed "s/.sh//g; s/\// /g" | awk '{print $NF}'
