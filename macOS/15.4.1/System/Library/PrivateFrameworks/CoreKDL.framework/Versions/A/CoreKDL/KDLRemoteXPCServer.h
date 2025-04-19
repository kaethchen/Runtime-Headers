@class KDLDaemon, KDLRemoteXPCConnection;

@interface KDLRemoteXPCServer : NSObject {
    KDLRemoteXPCConnection *_xpcConnection;
}

@property (retain) KDLDaemon *daemon;

- (id)init;
- (void).cxx_destruct;
- (id)handleMessage:(id)a0;
- (unsigned int)currentVersion:(id *)a0;
- (unsigned int)listOffendingKexts:(id *)a0 forService:(id)a1;
- (unsigned int)queryCurrentState:(id *)a0 forService:(id)a1;
- (unsigned int)updateKDL:(id)a0;

@end
