@class NSString, CLRegion, CLLocation, HMDLocation;

@interface HMDUserActivityStateType4Detector : HMDUserActivityStateDetector <HMDLocationDelegate>

@property (retain, nonatomic) CLLocation *homeLocation;
@property (readonly, nonatomic) HMDLocation *location;
@property (nonatomic) long long locationAuthorization;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CLRegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)contributorType;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (unsigned long long)_userType4StateFromRegionState:(long long)a0;
- (void)_handleHomeLocationChangedNotification:(id)a0;
- (void)_handleLocationAuthorizationChangedNotification:(id)a0;
- (void)_registerForMessages;
- (void)_updateLocationAuthorization:(long long)a0 withReason:(unsigned long long)a1 notifyDelegate:(BOOL)a2;
- (void)_updateState:(unsigned long long)a0 withReason:(unsigned long long)a1 notifyDelegate:(BOOL)a2;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)deregisterForRegionUpdates;
- (void)didDetermineState:(long long)a0 forRegion:(id)a1;
- (id)initWithDataSource:(id)a0 location:(id)a1;
- (void)registerForRegionUpdates;

@end
