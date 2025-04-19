@class NSString;

@interface CALNDefaultTriggeredEventNotificationMapItemURLProvider : NSObject <CALNTriggeredEventNotificationMapItemURLProvider>

@property (class, readonly, nonatomic) CALNDefaultTriggeredEventNotificationMapItemURLProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_directionsModeForHypothesis:(id)a0 routing:(id)a1;
+ (id)_directionsModeForLocationRoutingMode:(long long)a0;
+ (id)_directionsModeForRouting:(id)a0;
+ (id)_directionsModeForTransportType:(int)a0;
+ (id)_eventLocationFromStructuredLocation:(id)a0;
+ (id)_mapItemNameFromEventLocation:(id)a0;
+ (id)_mapItemURLForEventLocation:(id)a0 hypothesis:(id)a1;
+ (id)_mapItemURLLaunchOptionsForDirectionsMode:(id)a0 isFromTimeToLeaveNotification:(BOOL)a1;
+ (id)_mapItemURLLaunchOptionsForHypothesis:(id)a0 routing:(id)a1;

- (id)mapItemURLForOptionalEventLocation:(id)a0 hypothesis:(id)a1;

@end
