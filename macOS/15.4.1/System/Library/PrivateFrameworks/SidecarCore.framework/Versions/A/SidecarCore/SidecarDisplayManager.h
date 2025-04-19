@class NSArray, SidecarDisplayConfig, SidecarDevice;

@interface SidecarDisplayManager : NSObject <SidecarDisplayCore_Interface> {
    _Atomic unsigned long long _configGeneration;
    _Atomic unsigned long long _deviceGeneration;
    _Atomic unsigned long long _displayGeneration;
    SidecarDisplayConfig *_config;
    NSArray *_devices;
    SidecarDevice *_connectedDevice;
    NSArray *_recentUUIDS;
    NSArray *_recentDevices;
}

@property (class, readonly) SidecarDisplayManager *sharedManager;

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly, nonatomic) NSArray *recentDevices;

+ (id)model;
+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;
- (id)configForDevice:(id)a0;
- (void)connectToDevice:(id)a0 completion:(id /* block */)a1;
- (void)connectToDevice:(id)a0 withConfig:(id)a1 completion:(id /* block */)a2;
- (void)disconnectFromDevice:(id)a0 completion:(id /* block */)a1;
- (void)preferencesChanged;
- (void)preferencesChanged:(id)a0;

@end
