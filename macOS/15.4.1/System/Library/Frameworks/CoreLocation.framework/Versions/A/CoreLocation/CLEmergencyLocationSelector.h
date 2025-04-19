@class NSString, CLAssertion, CLLocationManager;
@protocol CLEmergencyLocationSelectorDelegate;

@interface CLEmergencyLocationSelector : NSObject <CLLocationManagerDelegate>

@property (nonatomic) void *fInstance;
@property (nonatomic) CLLocationManager *fLocManager;
@property (weak, nonatomic) id<CLEmergencyLocationSelectorDelegate> fDelegate;
@property (nonatomic) CLAssertion *fCleeaAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 bundle:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)stopSession;

@end
