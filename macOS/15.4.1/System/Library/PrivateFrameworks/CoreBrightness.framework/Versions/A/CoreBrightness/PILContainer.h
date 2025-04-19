@class NSString, CBPILParams, CBALSServiceClient, NSMutableArray, PILStateMonitor;

@interface PILContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    CBPILParams *_params;
    CBALSServiceClient *_alsServiceClient;
    PILStateMonitor *_pilStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (id)initWithParameters:(id)a0;
- (id)copyIdentifiers;
- (void)tearDownModules;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (id)newStatusInfo;
- (void)registerForPILNotifications;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (void)setupALSServices;
- (void)setupModules;
- (void)unregisterForPILNotifications;
- (void)updateBrightness;

@end
