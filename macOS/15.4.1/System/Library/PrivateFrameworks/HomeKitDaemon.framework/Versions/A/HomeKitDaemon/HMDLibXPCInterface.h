@class NSString;

@interface HMDLibXPCInterface : HMFObject <HMDLibXPCInterfacing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateXPCConnection:(id)a0;
- (void)cancelXPCConnection:(id)a0;
- (id)copyXPCEntitlementValueForConnection:(id)a0 entitlement:(id)a1;
- (id)createXPCMachServiceWithName:(id)a0 queue:(id)a1 flags:(unsigned long long)a2;
- (void)setXPCEventHandlerForConnection:(id)a0 handler:(id /* block */)a1;
- (void)setXPCTargetQueueForConnection:(id)a0 queue:(id)a1;
- (void)suspendXPCConnection:(id)a0;
- (struct _xpc_type_s { } *)typeForXPCObject:(id)a0;

@end
