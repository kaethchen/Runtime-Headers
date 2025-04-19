@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject {
    NSMutableDictionary *_entitlementCache;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) GEONavdClientInfo *clientInfo;
@property (nonatomic) BOOL expectingUpdates;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)updateConnection:(id)a0;

@end
