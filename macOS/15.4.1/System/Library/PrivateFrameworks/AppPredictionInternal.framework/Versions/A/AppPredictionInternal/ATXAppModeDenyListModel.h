@class ATXAppInterruptionsEventProvider, ATXModeAffinityModelsConstants, MLModel, ATXAppNotificationEngagementEventProvider, ATXGlobalInterruptingAppModel, ATXModeEntityStore, ATXNotificationAndSuggestionDatastore;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXAppModeDenyListModel : NSObject {
    unsigned long long _mode;
    MLModel *_appModeModel;
    ATXModeEntityStore *_modeEntityStore;
    ATXGlobalInterruptingAppModel *_globalInterruptingAppModel;
    ATXNotificationAndSuggestionDatastore *_notificationDatastore;
    ATXAppNotificationEngagementEventProvider *_appNotificationEngagementEventProvider;
    ATXAppInterruptionsEventProvider *_appInterruptionsEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    ATXModeAffinityModelsConstants *_modeAffinityModelsConstants;
}

- (void).cxx_destruct;
- (id)modelName;
- (id)scoredEntities;
- (void)addAppInterruptingSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)a0;
- (void)addGlobalModeInterruptingPriorsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toAppSpecificFeatures:(id)a1;
- (id)featuresToModel:(id)a0;
- (id)initWithMode:(unsigned long long)a0 modeEntityStore:(id)a1 globalInterruptingAppModel:(id)a2;
- (id)loadAppModeCoreMLModel;
- (double)scoreFromAppFeatures:(id)a0;
- (id)scoredAppModeEntityWithAppFeatures:(id)a0 bundleId:(id)a1;

@end
