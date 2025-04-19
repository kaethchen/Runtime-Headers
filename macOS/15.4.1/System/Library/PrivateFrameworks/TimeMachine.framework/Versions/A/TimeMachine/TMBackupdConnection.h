@protocol TMPrivilegedXPCProtocol;

@interface TMBackupdConnection : NSObject

@property (class, readonly) id<TMPrivilegedXPCProtocol> backupProxy;
@property (class, readonly) BOOL isUsingTestProxy;

+ (id)testBackupProxy;
+ (BOOL)connectToBackupd:(id *)a0 connectionBlock:(id /* block */)a1;
+ (BOOL)connectToBackupd:(id *)a0 timeout:(unsigned long long)a1 connectionBlock:(id /* block */)a2;
+ (BOOL)connectToBackupd:(id *)a0 timeout:(unsigned long long)a1 invalidator:(id)a2 connectionBlock:(id /* block */)a3;
+ (void)setTestBackupProxy:(id)a0;

@end
