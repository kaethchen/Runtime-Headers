@class NSString, NTPBNotificationItem;
@protocol FCHeadlineProviding;

@interface FCNotificationPayload : NSObject <NSCopying>

@property (readonly, nonatomic) NTPBNotificationItem *notificationItem;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) NSString *bodyText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNotificationItem:(id)a0 headline:(id)a1 bodyText:(id)a2;

@end
