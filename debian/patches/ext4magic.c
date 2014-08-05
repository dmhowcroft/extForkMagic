Description: fix spelling errors.
Author: Joao Eriberto Mota Filho <eriberto@debian.org>
Last-Update: 2013-12-30
--- a/src/ext4magic.c
+++ b/src/ext4magic.c
@@ -627,13 +627,13 @@
 				fprintf(stderr,"Error: Invalid parameter: -s  %d\n", superblock);
 				switch (blocksize){
 					case 1024: 
-						fprintf(stderr, "blocksize 1024 posible 8193, 24577, 40961, 57345 ....\n");
+						fprintf(stderr, "blocksize 1024 possible 8193, 24577, 40961, 57345 ....\n");
 						break;
 					case 2048:
-						fprintf(stderr, "blocksize 2048 posible 16384, 49152, 81920, 114688 ....\n");
+						fprintf(stderr, "blocksize 2048 possible 16384, 49152, 81920, 114688 ....\n");
 						break;
 					case 4096:
-						fprintf(stderr, "blocksize 4096 posible 32768, 98304, 163840, 229376 ....\n");
+						fprintf(stderr, "blocksize 4096 possible 32768, 98304, 163840, 229376 ....\n");
 						break;
 					default:
 					  	fprintf(stderr, "blocksize unknown\n");
