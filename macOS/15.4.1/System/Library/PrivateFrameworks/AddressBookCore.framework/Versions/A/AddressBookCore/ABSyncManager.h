@class NSString;

@interface ABSyncManager : NSObject

@property (class, readonly) ABSyncManager *sharedSyncManager;
@property (class, readonly) NSString *toolPath;

+ (id)clientID;
+ (id)defaultClientID;
+ (id)os_log;
+ (id)debugPath;
+ (id)productionPath;
+ (id)toolName;

- (BOOL)isSyncScheduled;
- (void)scheduleTrickleSyncWithRequest:(id)a0;
- (void)_abSyncProcessDied:(id)a0;
- (BOOL)canExecProcesses;
- (void)inProcess_scheduleTrickleSyncWithRequest:(id)a0;
- (void)outOfProcess_scheduleTrickleSyncWithRequest:(id)a0;
- (void)removeExisitingSyncSchedule;
- (void)scheduleTrickleSync;
- (void)scheduleTrickleSyncRetry:(unsigned long long)a0;

@end
