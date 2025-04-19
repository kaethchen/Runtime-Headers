@class NSXPCListener, NSMutableDictionary, PKServicePersonality, NSArray, NSXPCListenerEndpoint, NSObject, NSString;
@protocol PKExternalProviders, PKServiceDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface PKService : NSObject <NSXPCListenerDelegate>

@property unsigned int extensionPointPlatform;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } personalityLock;
@property (readonly) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSMutableDictionary *personalities;
@property (retain) PKServicePersonality *solePersonality;
@property (retain) NSArray *subsystems;
@property BOOL shared;
@property BOOL isSystemService;
@property (retain) NSObject<OS_dispatch_source> *terminationTimer;
@property (retain) NSObject<OS_dispatch_source> *firstHostRequestTimer;
@property (readonly, nonatomic) id<PKExternalProviders> external;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (retain) id<PKServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)main;
+ (int)_defaultRun:(int)a0 arguments:(const char **)a1;
+ (id)defaultService;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)checkIn;
- (void)_prepareToRunUsingServiceListener:(BOOL)a0;
- (BOOL)_processDefaultSubsystemName:(id)a0;
- (void)beganUsingServicePersonality:(id)a0;
- (void)cancelTermination;
- (void)checkEnvironment:(id)a0;
- (id)configuredSubsystemList;
- (id)connectionForPlugInNamed:(id)a0;
- (id)defaultsForPlugInNamed:(id)a0;
- (id)discoverSubsystemNamed:(id)a0 options:(id)a1 required:(BOOL)a2;
- (void)discoverSubsystems;
- (id)embeddedPrincipalForPlugInNamed:(id)a0;
- (id)hostPrincipalForPlugInNamed:(id)a0;
- (id)initWithExternalProviders:(id)a0;
- (void)launchContainingApplicationForPlugInNamed:(id)a0;
- (void)mergeSubsystemList:(id)a0 from:(id)a1;
- (void)mergeSubsystems:(id)a0 from:(id)a1;
- (id)personalityNamed:(id)a0;
- (id)personalityNamed:(id)a0 forHostPid:(int)a1;
- (id)plugInPrincipalForPlugInNamed:(id)a0;
- (void)registerPersonality:(id)a0;
- (void)runUsingServiceListener:(BOOL)a0;
- (void)scheduleTermination:(double)a0;
- (BOOL)unregisterPersonality:(id)a0;

@end
