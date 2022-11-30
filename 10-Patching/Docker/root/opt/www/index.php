<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8" />
    <meta http-equiv="x-ua-compatible" content="ie=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />

    <title>Patching Challenge</title>
    <link rel="stylesheet" href="main.css" />
  </head>
  <body>
    <code>
        <?php 
            echo  "5 + 3 = " . shell_exec("/app/patched 5 + 3") . "
12 - 4 = " . shell_exec("/app/patched 12 - 4") . "
3 * 8 = " . shell_exec("/app/patched 3 * 8") . "
27 / 9 = " . shell_exec("/app/patched 27 / 3");
        ?>
    </code>
    <br>
    <form action="/upload" method="post" enctype="multipart/form-data">
      Select patchfile to patch:
      <input type="file" name="fileToUpload" id="fileToUpload">
      <button type="submit" value="Upload Image">Patch</button>
    </form>
    <form action="/reset" method="get">
      <button type="submit" value="Reset Calculator">Reset Calculator</button>
    </form>
  </body>
</html>