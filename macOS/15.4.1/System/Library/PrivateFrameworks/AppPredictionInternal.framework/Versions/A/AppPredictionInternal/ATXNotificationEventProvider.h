@class NSString, NSArray;
@protocol ATXStableContactRepresentationProviderProtocol;

@interface ATXNotificationEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSArray *_eventTypes;
    id<ATXStableContactRepresentationProviderProtocol> _stableContactRepresentationProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dateIntervalFromEvent:(id)a0;
- (id)initWithEventType:(long long)a0 contactStore:(id)a1;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)eventsFromPublisher;
- (id)initWithEventTypes:(id)a0 contactStore:(id)a1;
- (BOOL)isEventFromProvider:(id)a0;
- (BOOL)publisherIsCoreDuetWrapper;
- (double)secondsSinceReceiptForModeEvent:(id)a0;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(BOOL)a2;

@end
