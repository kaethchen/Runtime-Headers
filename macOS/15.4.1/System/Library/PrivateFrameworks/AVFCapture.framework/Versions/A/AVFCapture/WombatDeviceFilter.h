@class NSMutableSet;

@interface WombatDeviceFilter : NSObject {
    NSMutableSet *_tracking;
    NSMutableSet *_published;
}

+ (id)singleton;
+ (BOOL)_isFilteringWombatDevices;
+ (BOOL)_isShowingWombatDevices;

- (void)refreshConnectedDevices:(unsigned int *)a0 numberOfDevices:(unsigned int)a1;
- (BOOL)shouldShowDevice:(unsigned int)a0;

@end
