@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)scanObjects;
- (id)initWithHomeManager:(id)a0;
- (void)_scanCloudZones;
- (void)_scanAccounts;
- (void)_scanHomes;

@end
