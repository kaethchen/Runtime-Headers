@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXSendToDigestManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)_proposeSendToDigestForNotification:(id)a0 bundleData:(id)a1;
- (id)activeSuggestions;
- (BOOL)bundleIdEligibleForSendToDigestSuggestions:(id)a0;
- (id)currentSuggestionsGivenCandiateNotifications:(id)a0;

@end
