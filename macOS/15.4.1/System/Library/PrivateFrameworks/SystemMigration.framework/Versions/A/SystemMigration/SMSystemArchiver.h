@interface SMSystemArchiver : NSObject

+ (long long)archiveDataVolume:(id)a0 usingPather:(id)a1 andFirmlinkData:(id)a2 error:(id *)a3;
+ (void)archiveLogsFromArchivedSystem:(id)a0 toTarget:(id)a1;
+ (long long)archivePreviousContentsFrom:(id)a0 error:(id *)a1;
+ (long long)archivePreviousSystemFrom:(id)a0 usingPather:(id)a1 andFirmlinkData:(id)a2 error:(id *)a3;
+ (BOOL)clearProblemSymlinksFromDataVolume:(id)a0 error:(id *)a1;
+ (BOOL)moveFilesAtPaths:(id)a0 toPreservationFolderAtPath:(id)a1 withError:(id *)a2;
+ (id)pathsToArchiveInPreviousSystem:(id)a0 withPather:(id)a1 andFirmlinkData:(id)a2;
+ (BOOL)reapPreviousSystemOnDataVolume:(id)a0 withPather:(id)a1 andProgress:(id /* block */)a2 error:(id *)a3;
+ (void)removeFlag:(int)a0 fromPath:(id)a1;
+ (void)saveReaperPaths:(id)a0 paths:(id)a1;
+ (id)validPathsForPreservation:(id)a0 onMountpoint:(id)a1 ignoreFiles:(id)a2 keepFiles:(id)a3;

@end
