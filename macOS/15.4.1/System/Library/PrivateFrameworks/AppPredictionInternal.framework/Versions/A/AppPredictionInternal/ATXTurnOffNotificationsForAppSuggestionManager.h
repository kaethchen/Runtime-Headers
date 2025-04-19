@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (id)activeSuggestions;

@end
