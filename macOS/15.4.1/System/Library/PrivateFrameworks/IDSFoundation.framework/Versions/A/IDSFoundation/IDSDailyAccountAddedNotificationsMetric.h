@class NSNumber, NSDictionary, NSString;

@interface IDSDailyAccountAddedNotificationsMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSNumber *dailyNotificationsPosted;
@property (readonly, nonatomic) NSNumber *dailyDuplicateNotificationsPosted;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNotificationsPostedToday:(id)a0 duplicateNotificationPostedToday:(id)a1;

@end
