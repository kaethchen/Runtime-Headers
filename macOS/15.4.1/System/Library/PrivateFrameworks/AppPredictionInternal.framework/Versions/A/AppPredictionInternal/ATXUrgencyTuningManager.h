@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;

@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)activeSuggestions;
- (id)urgencyTuningSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;

@end
