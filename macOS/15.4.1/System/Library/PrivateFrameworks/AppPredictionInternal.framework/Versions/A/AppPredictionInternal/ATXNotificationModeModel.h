@class CNContactStore, ATXNotificationModeEntityModelWeights;

@interface ATXNotificationModeModel : NSObject {
    unsigned long long _mode;
    ATXNotificationModeEntityModelWeights *_notificationModeEntityModelWeights;
    CNContactStore *_contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)modeEntityScoreFromEngagementFeatures:(id)a0 dismissalFeatures:(id)a1 hiddenFeatures:(id)a2 clearedFeatures:(id)a3 expiredFeatures:(id)a4 scoredApp:(id)a5 scoredContact:(id)a6;
- (void)addSubFeaturesToFeatureDict:(id)a0 subFeatures:(id)a1 prefix:(id)a2;
- (id)initWithMode:(unsigned long long)a0 contactStore:(id)a1;
- (double)scoreFromEngagementFeatures:(id)a0 dismissalFeatures:(id)a1 hiddenFeatures:(id)a2 clearedFeatures:(id)a3 expiredFeatures:(id)a4 scoredApp:(id)a5 scoredContact:(id)a6;
- (id)scoredEntitiesWithScoredAppEntities:(id)a0 scoredContactEntities:(id)a1;

@end
