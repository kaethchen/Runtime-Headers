@class BMBiomeScheduler, BPSSink, ATXUserEducationSuggestionConnector, ATXUserEducationSuggestionExploreFaces, ATXNotificationManagementMAConstants, NSUserDefaults;

@interface ATXUserEducationSuggestionExploreFacesServer : ATXUserEducationSuggestionBaseServer {
    ATXUserEducationSuggestionConnector *_connector;
    ATXNotificationManagementMAConstants *_constants;
    ATXUserEducationSuggestionExploreFaces *_suggestion;
    NSUserDefaults *_defaults;
    BMBiomeScheduler *_backlightEventScheduler;
    BPSSink *_backlightEventSink;
}

- (void).cxx_destruct;
- (id)suggestion;
- (long long)gracePeriod;
- (long long)minHour;
- (void)scheduleNextTry;
- (long long)maxHour;
- (void)backlightEventHandler:(id)a0;
- (id)backlightEventSink;
- (void)cancelBacklightEventSubscription;
- (id)initWithConnector:(id)a0;
- (BOOL)isSubscribedForBacklightEvents;
- (long long)numBacklightOffEventsBeforeDismissSuggestion;
- (void)sendSuggestionWithEventType:(unsigned long long)a0;
- (void)setIsSubscribedForBacklightEvents:(BOOL)a0;
- (BOOL)shouldNeverShowSuggestionAgain;
- (void)startUpSubscriberToBacklightBiomeStreamForTheFirstTime;
- (void)startUpSubscriberToBacklightBiomeStreamIfSubscribed;
- (long long)tryAgainIntervalSeconds;
- (void)tryToSendSuggestion;

@end
