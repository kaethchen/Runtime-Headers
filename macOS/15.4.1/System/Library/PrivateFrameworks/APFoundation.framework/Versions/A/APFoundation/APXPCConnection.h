@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void).cxx_destruct;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)remoteObjectProxy;
- (BOOL)hasEntitlement:(id)a0;
- (id)auditTokenString;

@end
