@interface BackupServer : NSObject

+ (id)sharedServer;

- (id)sessionStatus;
- (id)_copyConnectionForRootService:(const char *)a0 error:(out id *)a1;
- (BOOL)addAdvisoryForDatabaseFile:(id)a0 lockProxy:(BOOL)a1;
- (id)currentBackupPhase;
- (BOOL)isHealthCheckRunning;
- (id)mountDestinationForID:(id)a0 mountImage:(BOOL)a1 error:(id *)a2;
- (BOOL)removeAdvisoryForDatabaseFile:(id)a0;
- (BOOL)startBackup:(unsigned long long)a0 forDestinationID:(id)a1 options:(int)a2 error:(id *)a3;

@end
