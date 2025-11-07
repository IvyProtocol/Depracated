    #!/bin/bash

    # Replace 'kitty' with your preferred terminal emulator if different
    TERMINAL_COMMAND="kitty --class=$dropterm"

    if hyprctl clients | grep -q "class: $dropterm"; then
        hyprctl dispatch movetoworkspace special silent, class:$dropterm
    else
        exec $TERMINAL_COMMAND
    fi
