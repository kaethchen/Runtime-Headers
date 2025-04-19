@class NSString, NSArray, ATXNotificationResolutionAccumulator;

@interface ATXDynamicBreakthroughFeaturesCorrelator : NSObject {
    NSString *_megadomeEntityIDFromLastNotification;
    NSArray *_megadomeRelationshipsFromLastNotification;
    ATXNotificationResolutionAccumulator *_resolutionAccumulator;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_contactRelationshipsFromNotification:(id)a0 contactStore:(id)a1 withRelationships:(id)a2;
- (double)appCategoryScoreForNotification:(id)a0 inCurrentMode:(unsigned long long)a1;
- (double)appModeAffinityScoreForNotification:(id)a0 inCurrentMode:(unsigned long long)a1;
- (id)collectDynamicBreakthroughFeaturesForNotification:(id)a0 contactStore:(id)a1 withContactRelationships:(id)a2;
- (double)contactModeAffinityScoreForNotification:(id)a0 inCurrentMode:(unsigned long long)a1;
- (int)currentLocationSemanticForGivenDate:(id)a0;
- (double)notificationModeAffinityScoreForNotification:(id)a0 inCurrentMode:(unsigned long long)a1;
- (void)refreshMegadomeRelationshipsIfNeeded:(id)a0;

@end
