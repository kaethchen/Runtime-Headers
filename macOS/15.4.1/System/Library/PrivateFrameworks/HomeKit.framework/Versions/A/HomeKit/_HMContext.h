@class HMDelegateCaller, HMFMessageDispatcher, HMXPCClient, NSObject, HMPendingRequests;
@protocol OS_dispatch_queue;

@interface _HMContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HMPendingRequests *pendingRequests;
@property (readonly, nonatomic) HMDelegateCaller *delegateCaller;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMXPCClient *xpcClient;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithXPCClientConfiguration:(id)a0;
- (id)initWithXPCClient:(id)a0 delegateCaller:(id)a1;
- (id)initWithXPCClient:(id)a0 delegateCaller:(id)a1 messageDispatcher:(id)a2 pendingRequests:(id)a3;

@end
