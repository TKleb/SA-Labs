<?php
header( "refresh:1;url=/" );
shell_exec("cp /app/calculator /app/patched");
shell_exec("chmod 777 /app/calculator");
echo "resetting..";
?>