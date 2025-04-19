@class NSSet, NSString, NSDate;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>

@property (readonly) id<HMDDoorbellChimeControllerContext> context;
@property (copy) NSSet *availableCharacteristics;
@property (retain) NSDate *lastUnidentifiedChimeDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)clientIdentifier;
- (void)configure;
- (id)logIdentifier;
- (void)_handleCharacteristicsValueUpdatedNotification:(id)a0;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)a0 attemptCloudPullIfNoPersonsFound:(BOOL)a1;
- (unsigned long long)_numHomePodsWithDoorbellChimeEnabled;
- (void)handleCharacteristicsValueUpdatedNotification:(id)a0;
- (void)handleUpdatedPersonIdentificationInformation;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (void)notifyAccessoriesViaCoordinationFreePathWithDelay:(double)a0 home:(id)a1 shouldPlayChime:(BOOL)a2 personIdentificationText:(id)a3 accessoriesToNotify:(id)a4 logEvent:(id)a5 accessoryUUID:(id)a6;

@end
