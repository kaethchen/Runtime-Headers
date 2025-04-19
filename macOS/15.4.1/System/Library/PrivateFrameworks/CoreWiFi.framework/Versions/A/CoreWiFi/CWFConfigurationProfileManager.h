@class NSMutableSet, CPProfileManager;

@interface CWFConfigurationProfileManager : NSObject {
    CPProfileManager *_profileManager;
    NSMutableSet *_mdmManagedProfileUUIDs;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)__updateCachedMDMManagedProfileUUIDs:(id)a0;
- (BOOL)isDeviceSupervised;
- (BOOL)isNetworkManagedByMDM:(id)a0;

@end
