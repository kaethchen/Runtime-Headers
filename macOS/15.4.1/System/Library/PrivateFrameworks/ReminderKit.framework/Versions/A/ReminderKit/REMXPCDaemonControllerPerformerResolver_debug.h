@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_debug : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (id)name;
- (void).cxx_destruct;
- (id)initWithStoreContainerToken:(id)a0;
- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
