@class HMDMediaOutputDevice;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMDMediaOutputDevice *outputDevice;
@property (getter=isAssociated) BOOL associated;

+ (BOOL)canAirPortExpressSupportMediaAccessory:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0;
- (long long)associationOptions;
- (BOOL)matchesWACDeviceID:(id)a0;

@end
