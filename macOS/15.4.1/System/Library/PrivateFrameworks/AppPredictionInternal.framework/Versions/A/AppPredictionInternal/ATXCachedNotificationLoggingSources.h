@class BMSource, ATXStableContactRepresentationDatastore, ATXUserNotificationBiomeStream;

@interface ATXCachedNotificationLoggingSources : NSObject

@property (readonly) ATXUserNotificationBiomeStream *userNotificationBiomeStream;
@property (readonly) BMSource *notificationUsageSource;
@property (readonly) ATXStableContactRepresentationDatastore *contactRepresentationDatastore;

- (id)init;
- (void).cxx_destruct;

@end
