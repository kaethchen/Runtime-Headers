@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, SSConnectionProxyDelegate;

@interface SSMachServiceConnectionProxy : NSObject <SSConnectionProxy>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSSet *allowedIncomingCommands;
@property (weak, nonatomic) id<SSConnectionProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)send:(id)a0;
- (void)handleConnectionEvent:(id)a0;

@end
