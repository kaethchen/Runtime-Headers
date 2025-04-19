@interface ATXUnifiedModeStreamModeEventProvider : ATXModeTransitionModeEventProvider

- (id)init;
- (id)dateIntervalFromEvent:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (BOOL)isEventFromProvider:(id)a0;

@end
