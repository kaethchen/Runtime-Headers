@class NSString, NSObject;
@protocol HMDLibXPCServerDelegate, OS_xpc_object, OS_dispatch_queue, HMDLibXPCInterfacing;

@interface HMDLibXPCServer : HMFObject

@property (readonly, copy) NSString *name;
@property (readonly) id<HMDLibXPCInterfacing> libXPCInterface;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listenerConnection;
@property (weak) id<HMDLibXPCServerDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)start;
- (void)stop;
- (id)logIdentifier;
- (void)handleIncomingConnection:(id)a0;
- (id)initWithMachServiceName:(id)a0 queue:(id)a1 libXPCInterface:(id)a2;

@end
