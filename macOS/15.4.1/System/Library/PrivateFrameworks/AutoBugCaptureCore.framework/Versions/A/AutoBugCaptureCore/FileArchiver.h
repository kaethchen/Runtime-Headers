@interface FileArchiver : NSObject {
    struct archive { } *_archive;
}

+ (id)archiveWithPath:(id)a0;
+ (id)archiveWithPath:(id)a0 destinationDir:(id)a1 nameMatches:(id)a2 maxAge:(double)a3 allowDirectories:(BOOL)a4;
+ (id)archiveWithPaths:(id)a0 destinationDir:(id)a1 deleteSource:(BOOL)a2;
+ (id)matchFilesInDirectory:(id)a0 filenamePredicate:(id)a1 newerThan:(id)a2 allowDirectories:(BOOL)a3;

- (int)closeArchive;
- (int)addDirectoryToArchive:(id)a0 withDirName:(id)a1;
- (int)addFileToArchive:(id)a0 withFileName:(id)a1;
- (id)initWithPath:(id)a0 shouldCompress:(BOOL)a1;
- (void)moveDirectoryToArchive:(id)a0 withDirName:(id)a1;

@end
