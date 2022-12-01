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

		shell_exec("cat ./uploads/patchfile | dd conv=notrunc of=/app/patched bs=1 seek=$((0x4E5E))");
		echo "Patchfile has been successfully uploaded and calculator has been patched";
	}

	function resetBinary() {
		shell_exec("cp -f /app/calculator /app/patched");
		shell_exec("chmod 777 /app/patched");
		echo "Binary reset successfully!";
	}

	function getFlag() {
		if (shell_exec("/app/patched 5 - 3") == 2 && shell_exec("/app/patched 10 - 3") == 7) {
			echo "You successfully fixed the binary: Here's your Flag: " . shell_exec("printenv GOLDNUGGET");
			return;
		}

		echo "The binary is not functioning as intended, please try patching it again.";
	}
?>