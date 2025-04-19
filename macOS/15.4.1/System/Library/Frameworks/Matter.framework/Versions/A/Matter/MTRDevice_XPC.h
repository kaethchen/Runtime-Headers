@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDevice_XPC : MTRDevice <MTRXPCClientProtocol_MTRDevice> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, getter=_internalState, setter=_setInternalState:) NSDictionary *_internalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)state;
- (id)queue;
- (void)setQueue:(id)a0;
- (id)productID;
- (id)vendorID;
- (oneway void)device:(id)a0 receivedAttributeReport:(id)a1;
- (oneway void)device:(id)a0 receivedEventReport:(id)a1;
- (oneway void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (oneway void)deviceBecameActive:(id)a0;
- (oneway void)deviceCachePrimed:(id)a0;
- (oneway void)deviceConfigurationChanged:(id)a0;
- (void)downloadLogOfType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 expectedValueInterval:(id)a4 timedWriteTimeout:(id)a5;
- (void)_delegateAdded:(id)a0;
- (void)_delegateRemoved:(id)a0;
- (BOOL)_ensureValidValuesForKeys:(id)a0 inInternalState:(id)a1 valueRequired:(BOOL)a2;
- (void)_invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 serverSideProcessingTimeout:(id)a7 queue:(id)a8 completion:(id /* block */)a9;
- (void)_updateInternalState:(id)a0;
- (oneway void)device:(id)a0 internalStateUpdated:(id)a1;
- (BOOL)deviceCachePrimed;
- (id)estimatedStartTime;
- (id)estimatedSubscriptionLatency;
- (id)initWithNodeID:(id)a0 controller:(id)a1;
- (void)invokeCommands:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (unsigned int)networkCommissioningFeatures;
- (id)readAttributePaths:(id)a0;

@end
