@interface SUUtilities : NSObject

+ (unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0;
+ (unsigned long long)cacheDeletePurgeableSpace;
+ (void)cacheDeleteSetCacheable:(BOOL)a0;
+ (long long)compareVersion:(id)a0 againstVersion:(id)a1;
+ (id)createCacheDeleteInfoDictionaryWithUrgencyLevel:(int)a0 spaceToPurge:(long long)a1;
+ (BOOL)currentUserIsOnConsole;
+ (id)daemonCacheDirectoryAppendedWithPath:(id)a0;
+ (id)daemonTempDirectoryAppendedWithPath:(id)a0;
+ (BOOL)isBootDriveInternal;
+ (BOOL)systemIsAPFS;
+ (BOOL)systemIsMemberOfReadOnlySystemGroup;
+ (id)trimBugFixFromVersion:(id)a0;
+ (id)trimMinorFromVersion:(id)a0;
+ (unsigned int)uidFromCurrentAuditToken;
+ (id)usernameForCurrentAuditTokenWithOutUID:(unsigned int *)a0;

@end
