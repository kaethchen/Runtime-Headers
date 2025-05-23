@class NSString, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting>

@property (readonly, nonatomic) BOOL shouldRefreshAvailability;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, copy, nonatomic) NSDictionary *eventDictionary;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSError *availabilityError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isSingleton;
+ (BOOL)mustBeAvailableForDisplay;
+ (BOOL)refreshesAvailabilityOnApplicationResume;
+ (BOOL)alwaysMakeAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (BOOL)_isAvailable;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)refreshAvailabilityWithForcedNotification;
- (void)refreshAvailabilityWithNotification;
- (void)refreshAvailabilityWithNotification:(BOOL)a0;
- (id)_availabilityError;
- (void)invalidateAvailability;
- (void)notifyResourcesAboutAvailabilityChange;
- (void)refreshAvailability;
- (void)refreshAvailabilityIfNeeded;
- (BOOL)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(BOOL)a0;
- (void)updateAvailability:(BOOL)a0 withError:(id)a1;
- (void)updateAvailability:(BOOL)a0 withError:(id)a1 completionHandler:(id /* block */)a2;

@end
