@class NSNumber, NSString, NSXPCConnection, NSObject, MTRXPCDeviceControllerParameters;
@protocol OS_dispatch_queue;

@interface MTRDeviceController_XPC : MTRDeviceController <MTRXPCClientProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationLock;
    NSNumber *_controllerNodeID;
    NSNumber *_compressedFabricID;
}

@property (retain) MTRXPCDeviceControllerParameters *xpcParameters;
@property double xpcRetryTimeInterval;
@property BOOL xpcConnectedOrConnecting;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedClasses;

- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)removeDevice:(id)a0;
- (BOOL)_setupXPCConnection;
- (oneway void)device:(id)a0 receivedAttributeReport:(id)a1;
- (id)controllerNodeID;
- (oneway void)device:(id)a0 receivedEventReport:(id)a1;
- (oneway void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (oneway void)deviceBecameActive:(id)a0;
- (oneway void)deviceCachePrimed:(id)a0;
- (oneway void)deviceConfigurationChanged:(id)a0;
- (id)initWithParameters:(id)a0 error:(id *)a1;
- (id)controllerXPCID;
- (id)_interfaceForClientProtocol;
- (id)_interfaceForServerProtocol;
- (void)_registerNodeID:(id)a0;
- (id)_setupDeviceForNodeID:(id)a0 prefetchedClusterData:(id)a1;
- (void)_startXPCConnectionRetry;
- (void)_unregisterNodeID:(id)a0;
- (void)_updateRegistrationInfo;
- (void)_xpcConnectionRetry;
- (id)compressedFabricID;
- (oneway void)controller:(id)a0 controllerConfigurationUpdated:(id)a1;
- (void)deleteNodeID:(id)a0;
- (oneway void)device:(id)a0 internalStateUpdated:(id)a1;
- (void)forgetDeviceWithNodeID:(id)a0;
- (id)nodesWithStoredData;
- (void)updateControllerConfiguration:(id)a0;

@end
