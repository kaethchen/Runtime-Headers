@class NSMutableDictionary;

@interface ATXFakeModeEntityScorer : NSObject <ATXModeEntityScorerProtocol> {
    double _defaultAppScore;
    double _defaultContactScore;
    NSMutableDictionary *_entityToScoreMapping;
    NSMutableDictionary *_entityToScoreMappingForDenyList;
}

+ (unsigned long long)atxModeFromString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1;
- (id)rankedAppsForDenyListForMode:(unsigned long long)a0;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedAppsForNotificationsForMode:(unsigned long long)a0;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedContactsForNotificationsForMode:(unsigned long long)a0;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1;
- (void)scoreUserNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)setDefaultScoreForAllApps:(double)a0;
- (void)setDefaultScoreForAllContacts:(double)a0;
- (void)setScoreForBundleId:(id)a0 score:(double)a1;
- (void)setScoreForContactId:(id)a0 score:(double)a1;
- (void)setScoreForEntity:(id)a0 score:(double)a1;

@end
