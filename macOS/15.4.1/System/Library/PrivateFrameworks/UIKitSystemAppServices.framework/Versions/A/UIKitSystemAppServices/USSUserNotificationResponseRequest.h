@class UNNotificationResponse;

@interface USSUserNotificationResponseRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UNNotificationResponse *notificationResponse;

+ (id)requestForNotificationResponse:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNotificationResponse:(id)a0;

@end
