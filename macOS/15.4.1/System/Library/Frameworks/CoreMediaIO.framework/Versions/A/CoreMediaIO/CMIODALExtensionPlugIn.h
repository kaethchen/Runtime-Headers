@class NSArray, NSDictionary, NSString, NSMutableDictionary, CMIOExtensionSessionProvider, NSMutableSet;

@interface CMIODALExtensionPlugIn : NSObject <CMIOExtensionSessionProviderDelegate> {
    void *_plugIn;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
    NSArray *_devices;
    NSMutableDictionary *_devicesMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    NSDictionary *_properties;
    BOOL _devicesAndPropertiesHaveBeenInitialized;
    NSString *_description;
    NSMutableSet *_unpublishedDevices;
}

@property (retain) NSArray *devices;
@property (retain) NSDictionary *properties;
@property (readonly, retain) CMIOExtensionSessionProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyProviderBundleID;
- (id)initWithPlugIn:(void *)a0 endpoint:(id)a1;
- (void)provider:(id)a0 availableDevicesChanged:(id)a1;
- (void)provider:(id)a0 didFailWithError:(id)a1;
- (void)provider:(id)a0 initializeDevices:(id)a1 properties:(id)a2;
- (void)provider:(id)a0 propertiesChanged:(id)a1;
- (void)providerHasBeenInvalidated:(id)a0;
- (void)unsuspendCurrentDevicesIfRequired;
- (void)updateStateWithDevicesArrived:(id)a0 devicesRemoved:(id)a1;

@end
