@class NSNumber;

@interface SMDMigrateFrom_XPCClientConnection : SMDXPCClientConnection <SMDMigrateFromProtocol>

@property (retain) NSNumber *trustedPasscode;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)acceptTrustedPassCode;
- (void)canGenerateValidTXTRecordForSourcePath:(id)a0 reply:(id /* block */)a1;
- (void)canStartMigration:(id /* block */)a0;
- (void)rejectTrustedPassCode;
- (void)startServingRemoteMacsUsingSourcePath:(id)a0 andSecretPassword:(id)a1 reply:(id /* block */)a2;
- (void)stopServingRemoteMacs;

@end
