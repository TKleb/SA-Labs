<?php
	function uploadAndPatch() {
		$target_dir = "uploads/";
		$target_file = $target_dir . "patchfile";
		// Check file size
		if ($_FILES["fileToUpload"]["size"] > 500000) {
			echo "Sorry, your file is too large.";
			return;
		}

		if (!move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $target_file)) {
			echo "Sorry, there was an error uploading your file.";
			return;
		}

		shell_exec("xdelta3 -d -s /app/calculator_target /opt/www/uploads/patchfile /app/calculator_patched");
		echo "Patchfile has been successfully uploaded and calculator has been patched";
	}

	function resetBinary() {
		shell_exec("rm /app/calculator_patched");
		echo "Binary reset successfully!";
	}

	function getFlag() {
		if (shell_exec("/app/calculator_patched 5 - 3") == 2 && shell_exec("/app/calculator_patched 10 - 3") == 7) {
			echo "You successfully fixed the binary: Here's your Flag: " . shell_exec("printenv GOLDNUGGET");
			return;
		}
		echo "The binary is not functioning as intended, please try patching it again.";
	}
?>