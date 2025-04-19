@class NSMutableDictionary, NSArray, NSString, NSMutableSet, DADiscoveryConfiguration, NSObject, DAAppContext;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DADiscovery : NSObject <CUXPCCodable> {
    BOOL _activateCalled;
    NSMutableSet *_extensions;
    NSMutableDictionary *_deviceMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_policySessions;
}

@property (nonatomic) double activateTimeInterval;
@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) DADiscoveryConfiguration *configuration;
@property (retain, nonatomic) NSArray *configurations;
@property (nonatomic) BOOL direct;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (retain, nonatomic) DAAppContext *appContext;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy) NSArray *discoveredDevices;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL runningExtension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_invalidated;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_activateXPCCompleted:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (void)_xpcReceivedMessage:(id)a0;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateDirect;
- (void)invalidateWithReason:(unsigned long long)a0;
- (void)_reportEvent:(id)a0;
- (void)finishMigration;
- (void)_activateExtension:(id)a0;
- (void)_findExtensionPoint:(id)a0 bundleID:(id)a1 entitlement:(id)a2 completion:(id /* block */)a3;
- (void)_getAuthorizedDevicesCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportASKEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_startExtensions:(id)a0 bundleID:(id)a1 entitlement:(id)a2 completion:(id /* block */)a3;
- (void)_stopExtensons;
- (void)_updateNEPolicy:(id)a0 remove:(BOOL)a1;
- (id)_uuidFromExtension:(id)a0;
- (void)_xpcReceivedDAEvent:(id)a0;
- (void)_xpcReceivedDeviceEvent:(id)a0;
- (void)getAuthorizedDevices:(id /* block */)a0;
- (id)initWithConfigurations:(id)a0 error:(id *)a1;
- (void)migrateDevices;
- (void)modifyDeviceWithIdentifier:(id)a0 settings:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportDeviceChanged:(id)a0 appID:(id)a1;
- (void)respondToBluetoothPairingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDeviceAppAccessInfo:(id)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (void)setState:(long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (void)setState:(long long)a0 device:(id)a1 simulateApp:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
