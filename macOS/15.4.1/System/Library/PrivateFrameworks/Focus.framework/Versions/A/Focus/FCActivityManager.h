@class NSHashTable, NSString, NSArray, NSURL, DNDModeSelectionService, DNDLifetimeDetailsProvider, DNDStateService, DNDModeAssertion, DNDStateUpdate, NSMutableDictionary;
@protocol FCActivityDescribing, FCActivityLifetimeDescribing;

@interface FCActivityManager : NSObject <DNDModeSelectionServiceListener, DNDLifetimeDetailsProviderDelegate> {
    DNDModeSelectionService *_modeSelectionService;
    DNDLifetimeDetailsProvider *_lifetimeDetailsProvider;
    DNDStateService *_stateService;
    NSHashTable *_observers;
    DNDModeAssertion *_activeModeAssertion;
    DNDStateUpdate *_activeStateUpdate;
    NSMutableDictionary *_allActivitiesByIdentifier;
    NSArray *_activeLifetimeDetailsCollection;
    id<FCActivityLifetimeDescribing> _lifetimeOfActiveActivity;
    BOOL _activeModeAssertionIsValid;
}

@property (class, readonly, copy, nonatomic) NSURL *activitiesSettingsURL;

@property (copy, nonatomic, setter=_setDefaultActivity:) id<FCActivityDescribing> defaultActivity;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long maximumActivityCountForUserInterface;
@property (readonly, copy, nonatomic) NSArray *availableActivities;
@property (readonly, copy, nonatomic) id<FCActivityDescribing> activeActivity;
@property (readonly, nonatomic, getter=isDefaultConfiguration) BOOL defaultConfiguration;
@property (readonly, copy, nonatomic) NSString *localizedTerminationDescriptionForActiveActivity;
@property (nonatomic, getter=isLifetimeDescriptionsUpdatingEnabled) BOOL lifetimeDescriptionsUpdatingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedActivityManager;
+ (id)newActivityManager;
+ (id)newActivityManagerWithIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_initWithIdentifier:(id)a0;
- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (void)modeSelectionService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)modeSelectionService:(id)a0 didReceiveModesUpdate:(id)a1;
- (void)modeSelectionService:(id)a0 didReceiveUpdatedActiveModeAssertion:(id)a1 stateUpdate:(id)a2;
- (void)lifetimeDetailsProvider:(id)a0 didUpdateAvailableLifetimeDetails:(id)a1;
- (id)_activeActivity;
- (id)_activityForModeIdentifier:(id)a0;
- (id)_activityForUniqueIdentifier:(id)a0;
- (id)_availableActivities;
- (void)_deactivateActivity:(id)a0 reason:(id)a1;
- (BOOL)_doesActivity:(id)a0 identifySameModeAsActivity:(id)a1;
- (void)_invalidateActiveModeAssertion;
- (BOOL)_isSyncedAssertion:(id)a0;
- (id)_lifetimeDetailsProvider;
- (id)_lifetimeForActiveActivity;
- (id)_lifetimeForLifetimeDetailsIdentifier:(id)a0 ofActivity:(id)a1;
- (id)_modeSelectionService;
- (void)_notifyObserversOfAvailableActivitiesChange;
- (void)_notifyObserversOfLifetimeChangeForActivity:(id)a0;
- (void)_setActiveActivity:(id)a0 withLifetime:(id)a1 reason:(id)a2;
- (void)_setAvailableActivities:(id)a0;
- (void)_setLifetimeForActiveActivity:(id)a0;
- (id)_stateService;
- (void)_updateActiveActivity:(id)a0;
- (void)_updateActiveModeAssertionIfNecessary;
- (void)_updateActivitiesWithModes:(id)a0;
- (void)_updateActivity:(id)a0 withLifetimeDescriptions:(id)a1;
- (void)_updateActivity:(id)a0 withLifetimeDetails:(id)a1;
- (void)_updateActivity:(id)a0 withLifetimeDetailsCollection:(id)a1;
- (void)_updateCreationDateOfActivity:(id)a0;
- (void)_updateLifetimeForActiveActivity;
- (void)_updateLifetimeForActiveActivityIfNecessary;
- (void)_updateLifetimesAlternativeDescription:(id)a0 forActivity:(id)a1;
- (void)_updateLifetimesAlternativeDescriptionForActivity:(id)a0;
- (void)_updateLifetimesAlternativeDescriptionsForAvailableActivities;
- (void)_updateWithActiveModeAssertionIfNecessary:(id)a0 stateUpdate:(id)a1;
- (id)activityWithIdentifier:(id)a0;
- (BOOL)isActivityLocalUserInitiated:(id)a0;
- (id)lifetimeOfActivity:(id)a0;
- (void)promotePlaceholderActivity:(id)a0;
- (id)promotedPlaceholderActivity:(id)a0;
- (void)setActiveActivity:(id)a0;
- (void)setActiveActivity:(id)a0 reason:(id)a1;
- (void)setActiveActivity:(id)a0 withLifetime:(id)a1 reason:(id)a2;
- (void)setActivity:(id)a0 active:(BOOL)a1 reason:(id)a2;
- (void)setActivity:(id)a0 active:(BOOL)a1 withLifetime:(id)a2 reason:(id)a3;
- (BOOL)shouldActivityShowStatusPill:(id)a0;

@end
