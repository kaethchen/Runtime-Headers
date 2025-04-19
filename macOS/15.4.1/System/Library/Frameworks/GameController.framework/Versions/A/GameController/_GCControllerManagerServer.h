@class NSString, NSArray, NSFileHandle, NSSet, NSMutableDictionary, GCSSettingsStore, NSURL, NSObject, NSMutableSet, GCHIDEventSystemClient, NSMapTable, GCXPCEventPublisher;
@protocol OS_dispatch_queue, GCUserDefaults, _GCDeviceConfigurationRegistry;

@interface _GCControllerManagerServer : NSObject <_GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCPhysicalDeviceRegistry, _GCLogicalDeviceRegistry, _GCDeviceRegistry, _GCDeviceConfigurationRegistry> {
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ipcRegistryLock;
    NSMapTable *_ipcObjectRegistry;
    NSMutableDictionary *_allDeviceManagers;
    NSMutableDictionary *_physicalDeviceManagers;
    NSMutableDictionary *_logicalDeviceManagers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationsLock;
    NSMutableSet *_configurations;
    id<GCUserDefaults> _defaults;
    NSArray *_copilotSettings;
    GCSSettingsStore *_settingsStore;
    NSMutableSet *_copilotConfigurations;
    NSMutableDictionary *_allDevices;
    NSMutableDictionary *_physicalDevices;
    NSMutableDictionary *_logicalDevices;
    NSMutableSet *_activeConfigurations;
    GCHIDEventSystemClient *_hidEventSystemClient;
    NSMutableSet *_hidServices;
    NSMutableDictionary *_hidServiceOwners;
    NSMutableDictionary *_pendingDriverConnections;
    NSMutableDictionary *_pendingFilterConnections;
    NSString *_lastGeneratedName;
    NSFileHandle *_lastGeneratedDirectoryHandle;
    NSURL *_lastGeneratedURL;
    GCXPCEventPublisher *_xpcControllersEventPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSSet *activeControllerDevices;
@property (copy) NSSet *pidsWithKeyboardAndMouseSupport;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue;
@property (readonly) id<_GCDeviceConfigurationRegistry> deviceConfigurationRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)updateConfiguration:(id)a0;
- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (BOOL)hasConfigurationWithIdentifier:(id)a0;
- (id)IPCObjectWithIdentifier:(id)a0;
- (void)_onqueue_registerLogicalDevice:(id)a0;
- (BOOL)acceptIncomingDriverConnection:(id)a0;
- (void)deviceManager:(id)a0 deviceDidConnect:(id)a1;
- (id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)a0;
- (id)_hidqueue_popPendingFilterConnectionsForRegistryID:(id)a0;
- (void)_hidqueue_pushPendingDriverConnection:(id)a0 forRegistryID:(id)a1;
- (void)_hidqueue_pushPendingFilterConnection:(id)a0 forRegistryID:(id)a1;
- (void)_onqueue_refreshControllers;
- (void)_onqueue_refreshLogicalDevices;
- (void)_onqueue_registerPhysicalDevice:(id)a0;
- (void)_onqueue_signalGameControllerFocusModeEvent;
- (void)_onqueue_unregisterLogicalDevice:(id)a0;
- (void)_onqueue_unregisterPhysicalDevice:(id)a0;
- (BOOL)addConfiguration:(id)a0 replaceExisting:(BOOL)a1;
- (id)configurationWithIdentifier:(id)a0;
- (void)deviceManager:(id)a0 deviceDidDisconnect:(id)a1;
- (void)driverCheckIn;
- (BOOL)getLastGeneratedName:(id *)a0 directoryHandle:(id *)a1 url:(id *)a2;
- (id)initWithControllerProfiles:(id)a0;
- (id)lastGeneratedURL;
- (id)logicalDevices;
- (id)matchingHIDServiceAttributes;
- (void)onHIDServiceAdded:(id)a0;
- (void)onHIDServiceRemoved:(id)a0;
- (void)refreshActiveConfigurations;
- (void)refreshActiveConfigurationsWithCompletion:(id /* block */)a0;
- (void)registerIPCObject:(id)a0;
- (id)serviceClientForIPCService:(id)a0;
- (void)setLastGeneratedName:(id)a0 directoryHandle:(id)a1 url:(id)a2;
- (void)setupHIDMonitor:(BOOL)a0;
- (void)teardownHIDMonitor;

@end
