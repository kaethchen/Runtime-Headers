@class NSString;

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    NSString *_notificationName;
    int _notificationToken;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)notificationName;
- (id)initWithNotificationName:(const char *)a0;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;

@end
