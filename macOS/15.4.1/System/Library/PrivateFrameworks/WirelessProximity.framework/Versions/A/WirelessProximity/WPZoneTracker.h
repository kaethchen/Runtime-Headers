@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)registerForZoneChangesMatching:(id)a0;
- (id)clientAsString;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)exitedZone:(id)a0;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)getCurrentTrackedZones;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)a0;

@end
