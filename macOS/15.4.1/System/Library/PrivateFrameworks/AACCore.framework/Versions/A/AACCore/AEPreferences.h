@class NSMapTable, AEPreference;
@protocol AEPreferencePrimitives, AESystemNotificationPrimitives, AEObservation;

@interface AEPreferences : NSObject

@property (readonly, nonatomic) id<AEPreferencePrimitives> preferencePrimitives;
@property (readonly, nonatomic) id<AESystemNotificationPrimitives> systemNotificationPrimitives;
@property (readonly, nonatomic) id<AEObservation> notificationObservation;
@property (readonly, nonatomic) NSMapTable *cachedPreferencesByKey;
@property (readonly, nonatomic) AEPreference *restrictMedia;
@property (readonly, nonatomic) AEPreference *scrubPasteboard;
@property (readonly, nonatomic) AEPreference *restrictNetworkAccess;
@property (readonly, nonatomic) AEPreference *stopAirPlayBeforehand;
@property (readonly, nonatomic) AEPreference *disableDictation;
@property (readonly, nonatomic) AEPreference *disableSiri;
@property (readonly, nonatomic) AEPreference *failOnDeactivation;
@property (readonly, nonatomic) AEPreference *networkPolicyExemptExecutablePaths;
@property (readonly, nonatomic) AEPreference *enterSandbox;
@property (readonly, nonatomic) AEPreference *presentShields;
@property (readonly, nonatomic) AEPreference *disableContinuity;
@property (readonly, nonatomic) AEPreference *restrictFrontmostApp;
@property (readonly, nonatomic) AEPreference *restrictContentCapture;
@property (readonly, nonatomic) AEPreference *disableTrackpadLookup;
@property (readonly, nonatomic) AEPreference *captureDisplays;
@property (readonly, nonatomic) AEPreference *elevateWindows;
@property (readonly, nonatomic) AEPreference *disableQuickNote;
@property (readonly, nonatomic) AEPreference *enforceSingleAppMode;
@property (readonly, nonatomic) AEPreference *showPromptsAndBanners;
@property (readonly, nonatomic) AEPreference *forceScreenMirroring;
@property (readonly, nonatomic) AEPreference *allowRemotelyKillingAgent;
@property (readonly, nonatomic) AEPreference *setCustomHomeScreenLayout;
@property (readonly, nonatomic) AEPreference *expirationTime;

+ (id)defaultPreferences;
+ (id)preferencesWithPreferencePrimitives:(id)a0 systemNotificationPrimitives:(id)a1 queue:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)createAssessmentFile;
- (id)initWithPreferencePrimitives:(id)a0 systemNotificationPrimitives:(id)a1 queue:(id)a2;
- (id)preferenceForKey:(id)a0 defaultArrayValue:(id)a1;
- (id)preferenceForKey:(id)a0 defaultNumberValue:(id)a1;
- (void)preferencesDidUpdate;

@end
