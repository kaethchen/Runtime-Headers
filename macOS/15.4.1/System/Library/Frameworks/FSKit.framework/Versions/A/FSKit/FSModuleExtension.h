@class NSXPCListener, NSString, NSMutableDictionary, FSModuleConnector, FSContainerIdentifier, NSObject, NSMutableArray, LiveFSMachPort, FSResource;

@interface FSModuleExtension : _EXExtension <NSXPCListenerDelegate>

@property (readonly) BOOL isFSSubclass;
@property (readonly) BOOL isSimpleFSSubclass;
@property (readonly) BOOL isNormalFS;
@property (readonly) BOOL isSimpleFS;
@property (readonly) BOOL supportsSimpleMaintenanceOps;
@property (readonly) BOOL supportsServerOps;
@property (readonly) BOOL delegateConformantFS;
@property (retain) NSObject *strongDelegate;
@property (retain) FSContainerIdentifier *instanceID;
@property (readonly) NSString *bundleID;
@property (retain) NSMutableDictionary *taskSet;
@property (readonly) NSMutableArray *connectors;
@property (readonly) NSMutableDictionary *volumes;
@property (retain) FSResource *resource;
@property (weak) FSModuleConnector *fskitdCurrentConnection;
@property (retain) LiveFSMachPort *fsMachPort;
@property (readonly, retain, nonatomic) NSXPCListener *secondaryListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleExtensionForAppex:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (BOOL)fskitdIsClient:(id)a0;
- (id)getFSMachPort;
- (void)sendConfigureUserClient:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendIsVolumeUsed:(id)a0 bundle:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendWipeResource:(id)a0 replyHandler:(id /* block */)a1;

@end
