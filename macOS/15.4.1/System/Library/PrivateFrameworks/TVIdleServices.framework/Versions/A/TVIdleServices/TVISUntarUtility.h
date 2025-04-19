@interface TVISUntarUtility : NSObject

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (void)_setupWriteArchive:(struct archive **)a0 withOptions:(int)a1;
+ (void)_cleanupReadArchive:(struct archive **)a0 writeArchive:(struct archive **)a1 temporaryDirectory:(id)a2;
+ (BOOL)_copyItemsFromTemporaryDirectory:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (BOOL)_readFile:(id)a0 toArchive:(struct archive **)a1 error:(id *)a2;
+ (unsigned long long)_readNextHeaderInArchive:(struct archive **)a0 toEntry:(struct archive_entry **)a1 error:(id *)a2;
+ (BOOL)_setFileDestinationPath:(id)a0 forEntry:(struct archive_entry **)a1;
+ (BOOL)_writeDataToDiskFromArchive:(struct archive **)a0 usingWriteArchive:(struct archive **)a1 error:(id *)a2;
+ (BOOL)_writeFinishEntryOnArchive:(struct archive **)a0 error:(id *)a1;
+ (BOOL)_writeHeaderToArchive:(struct archive **)a0 withEntry:(struct archive_entry **)a1 usingDestination:(id)a2 error:(id *)a3;
+ (BOOL)deflateArchive:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
