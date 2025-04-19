@interface LogDumpUtility : NSObject

+ (id)createLogDumpListSortedByTimestamp:(id)a0;
+ (long long)fileCleanupDispatchQueuePriority;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (void)removeLogDumpsInDirectory:(id)a0 olderThan:(id)a1;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (BOOL)shouldCleanupFiles;

@end
