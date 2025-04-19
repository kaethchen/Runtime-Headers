@class CLTimer, NSString, CLSilo, NSData, NSMutableSet, CLLocationManager, CLLocationManagerStateTracker;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject {
    struct __CLClient { } *fClient;
    CLLocationManagerStateTracker *fState;
    double fDesiredAccuracy;
    struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; double ellipsoidalAltitude; BOOL fromSimulationController; } fLocation;
    NSString *fLocationEventType;
    CLTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    int fHeadingOrientation;
    id /* block */ fPlaceInferenceHandler;
    unsigned long long fFidelityPolicy;
    CLTimer *fPlaceInferenceTimer;
    NSMutableSet *fIdentifiableClients;
    CLSilo *fSilo;
}

@property (retain) NSString *clientKeyForIdentityValidation;
@property (retain) NSData *monitorLedgerAccessKey;
@property (readonly, nonatomic) NSMutableSet *rangedRegions;
@property (readonly, nonatomic) NSMutableSet *rangedConstraints;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (weak, nonatomic) CLLocationManager *manager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (int)PausesLocationUpdatesAutomatically;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)cancelLocationRequest;
- (id)initWithInfo:(id)a0 bundleIdentifier:(id)a1 bundlePath:(id)a2 delegate:(id)a3 silo:(id)a4;
- (void)performCourtesyPromptIfNeeded;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)a0;
- (void)setPausesLocationUpdatesAutomatically:(int)a0;
- (void)setShowsBackgroundLocationIndicator:(BOOL)a0;
- (BOOL)showsBackgroundLocationIndicator;
- (void)stopUpdatingLocationAutoPaused;

@end
