@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (id)init;
- (void).cxx_destruct;
- (void)ping;
- (void)clearDataCache;
- (void)clearStatusSharedWithPeers;
- (void)createCacheDirAtPath:(id)a0;
- (void)setCacheLockState:(BOOL)a0;
- (void)shareStatusWithPeers;
- (void)triggerUpdateToEligibilityEngine;
- (void)update:(long long)a0 withCountryCode:(id)a1;
- (void)update:(long long)a0 withDict:(id)a1;
- (void)update:(long long)a0 withListOfCountryCodes:(id)a1;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (void)updatePeer:(id)a0 withInfo:(id)a1;

@end
