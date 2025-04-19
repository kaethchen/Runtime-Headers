@class HMDHome;

@interface HMDHomeObjectLookup : HMDObjectLookup

@property (weak) HMDHome *home;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)scanObjects;
- (id)logIdentifier;
- (id)initWithHome:(id)a0;
- (void)_scanActionSets;
- (void)_scanAccessoriesAndServices;
- (void)_scanMediaSystems;
- (void)_scanResidentDevices;
- (void)_scanRooms;
- (void)_scanServiceGroups;
- (void)_scanSettings:(id)a0;
- (void)_scanTriggers;
- (void)_scanUsers;
- (void)_scanZones;

@end
