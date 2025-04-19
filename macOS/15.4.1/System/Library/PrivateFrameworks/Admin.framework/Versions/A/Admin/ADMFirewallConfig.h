@class NSData, NSXPCConnection;

@interface ADMFirewallConfig : NSObject

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSData *authorizationData;
@property (readonly) BOOL requiresAuthorization;

+ (id)sharedFirewallConfig;

- (id)dataForChange:(id)a0 userInfo:(id)a1 options:(unsigned long long)a2;
- (BOOL)changeAllowed:(id)a0;
- (void)notifyChange:(id)a0 userInfo:(id)a1 options:(unsigned long long)a2;

@end
