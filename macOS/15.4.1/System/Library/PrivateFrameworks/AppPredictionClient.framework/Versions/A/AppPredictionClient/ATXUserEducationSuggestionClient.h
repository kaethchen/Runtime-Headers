@class ATXUserEducationSuggestionConnector, NSHashTable;

@interface ATXUserEducationSuggestionClient : NSObject {
    NSHashTable *_observers;
    ATXUserEducationSuggestionConnector *_connector;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)logUserEducationSuggestionFeedback:(id)a0;
- (void)notifyObserversOfSuggestionEvent:(id)a0;

@end
