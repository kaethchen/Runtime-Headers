@class NSString, KDLRemoteXPCConnection;

@interface KDLRemoteXPCClient : NSObject <KDLTransport> {
    KDLRemoteXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)currentKDLVersion;
- (unsigned int)listOffendingKexts:(id *)a0 forService:(long long)a1;
- (unsigned int)queryCurrentState:(unsigned long long *)a0 forService:(long long)a1;
- (unsigned int)updateKDLFromPath:(id)a0;

@end
