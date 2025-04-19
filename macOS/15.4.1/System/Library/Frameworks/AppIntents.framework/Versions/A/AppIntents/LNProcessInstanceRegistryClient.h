@class NSXPCConnection;

@interface LNProcessInstanceRegistryClient : NSObject

@property (class, readonly, nonatomic) LNProcessInstanceRegistryClient *sharedInstance;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void).cxx_destruct;
- (id)registerWithError:(id *)a0;

@end
