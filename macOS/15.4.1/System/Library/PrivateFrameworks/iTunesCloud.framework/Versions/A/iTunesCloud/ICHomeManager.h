@class NSString, NSUUID, HMHomeManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICHomeManager : NSObject <HMHomeManagerDelegatePrivate, HMAccessoryDelegatePrivate> {
    HMHomeManager *_homeManager;
    NSUUID *_currentAccessoryIdentifier;
    BOOL _homeManagerIsReady;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cachedProperties;
}

@property (class, readonly, nonatomic) ICHomeManager *sharedManager;

@property (readonly, copy, nonatomic) NSString *homeOwnerAltDSID;
@property (readonly, copy, nonatomic) NSString *preferredMediaUserAltDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateProperties;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)accessory:(id)a0 didUpdateSettings:(id)a1;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)homeManagerDidRemoveCurrentAccessory:(id)a0;
- (id)_currentHomeOwnerAltDSID;
- (id)_currentPreferredMediaUserAltDSID;
- (void)_loadPropertiesFromCache;
- (void)_postPropertiesChangedNotification;
- (void)_savePropertiesToCache;

@end
