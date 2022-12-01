<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
    <title>RE Labs - Remote Login</title>
    <link rel="stylesheet" type="text/css" href="main.css" />
  </head>
  <body>
	<div class="main_page">
    	<div class="content_section floating_element">
			<div class="section_header">
				<h1>Welcome to the Patching Lab</h1><br>
	  			<a href="calculator">Executable for analysis</a><br>
				Find out where the bug is and upload a patch for it in order to get the flag.<br>
			</div>
			<br>
			<div class="section_header">
				<h2>Patching Area</h2><br>
				<form method="post" enctype="multipart/form-data">
					Select patchfile to patch:
					<input type="file" name="fileToUpload" id="fileToUpload">
					<button type="submit" name="uploadAndPatch" value="Upload Image">Patch</button>
				</form>
				<br>
				<form method="post">
					<button type="submit" name="reset" value="Reset Calculator">Reset Calculator</button>
					<button type="submit" name="getFlag" value="Get Flag">Get Flag</button>
				</form>
			</div>
		</div>
    </div>
  </body>
</html>

<?php
require "functions.php";
        if (array_key_exists('uploadAndPatch', $_POST)) {
            uploadAndPatch();
        } else if (array_key_exists('reset', $_POST)) {
            resetBinary();
        } else if (array_key_exists('getFlag', $_POST)) {
            getFlag();
        } 
?>