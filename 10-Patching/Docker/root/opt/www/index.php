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
            echo shell_exec("ls ./uploads");
        ?>
    </code>
    <br>
    <button>Patch</button>
    <button>Execute</button>
    <br>
    <form action="/upload" method="post" enctype="multipart/form-data">
      Select image to upload:
      <input type="file" name="fileToUpload" id="fileToUpload">
      <button type="submit" value="Upload Image">Submit</button>
    </form>
  </body>
</html>