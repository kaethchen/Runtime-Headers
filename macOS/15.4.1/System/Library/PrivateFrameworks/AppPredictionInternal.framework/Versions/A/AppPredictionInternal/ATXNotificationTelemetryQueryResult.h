@class ATXUserNotificationResolution, NSUUID, NSString, NSDate;

@interface ATXNotificationTelemetryQueryResult : NSObject

@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSDate *receiveTimestamp;
@property (nonatomic) long long deliveryMethod;
@property (nonatomic) long long urgency;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL isMessage;
@property (retain, nonatomic) NSString *destinationReason;
@property (retain, nonatomic) NSString *originalDestination;
@property (retain, nonatomic) NSString *finalDestination;
@property (retain, nonatomic) NSString *receiveModeIdentifier;
@property (retain, nonatomic) ATXUserNotificationResolution *resolution;
@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long titleLength;
@property (nonatomic) unsigned long long subtitleLength;
@property (nonatomic) BOOL isSummarized;
@property (nonatomic) unsigned long long summaryLength;
@property (nonatomic) BOOL isPartOfStack;
@property (nonatomic) BOOL isStackSummary;
@property (nonatomic) BOOL isDeliveredInPrioritySection;
@property (nonatomic) unsigned long long numberOfNotificationsInStack;
@property (nonatomic) unsigned long long notificationPriorityStatus;
@property (nonatomic) unsigned long long notificationSummaryStatus;
@property (nonatomic) BOOL isPriorityNotificationEnabled;
@property (nonatomic) BOOL isNotificationSummaryEnabled;
@property (retain, nonatomic) NSDate *nextAppLaunchTimestamp;

- (void).cxx_destruct;

@end
