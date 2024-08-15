
user_groups=$(groups $FT_USER)

formatted_groups=$(echo $user_groups | sed 's/: /:/g' | cut -d: -f2 | tr ' ' ',' | tr -d '\n')

echo $formatted_groups
