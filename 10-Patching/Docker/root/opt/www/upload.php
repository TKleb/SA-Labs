<?php
header( "refresh:2;url=/" );
$target_dir = "uploads/";
$target_file = $target_dir . "patchfile";
$uploadOk = 1;
$imageFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));

// Check file size
if ($_FILES["fileToUpload"]["size"] > 500000) {
  echo "Sorry, your file is too large.";
  $uploadOk = 0;
}

// Check if $uploadOk is set to 0 by an error
if ($uploadOk == 0) {
  echo "Sorry, your file was not uploaded.";
// if everything is ok, try to upload file
} else {
  if (move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $target_file)) {
    shell_exec("cat ./uploads/patchfile | dd conv=notrunc of=/app/patched bs=1 seek=$((0x4E5E))");
    echo "Patchfile has been successfully uploaded and calculator has been patched";
  } else {
    echo "Sorry, there was an error uploading your file.";
  }
}


?>