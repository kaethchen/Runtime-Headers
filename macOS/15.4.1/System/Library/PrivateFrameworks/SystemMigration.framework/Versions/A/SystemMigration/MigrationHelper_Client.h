@class NSString, NSXPCInterface, NSXPCConnection;

@interface MigrationHelper_Client : NSObject

@property unsigned int uid;
@property (retain) NSString *tracingUUID;
@property (retain) NSXPCConnection *helperConnection;
@property (retain) NSXPCInterface *helperInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectToHelper;
- (id)doImportWithParameters:(id)a0 desktopPictureURL:(id)a1;
- (BOOL)encryptDiskWithiCloudUser:(id)a0 iCloudPassword:(id)a1 localUser:(id)a2 localPassword:(id)a3 andBag:(id)a4 returningError:(id *)a5;
- (id)initWithUID:(unsigned int)a0 withMigrationEngineUUID:(id)a1 originatingApplication:(unsigned long long)a2;
- (void)setMigrationRequestUUID:(id)a0;
- (void)setOriginatingApplication:(unsigned long long)a0;

@end
