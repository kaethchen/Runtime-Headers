@class ATXUserNotification, ATXEntityContextRequestOptionalSignals;

@interface ATXNotificationContextRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotification *userNotification;
@property (readonly, nonatomic) ATXEntityContextRequestOptionalSignals *contextRequestSignals;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserNotification:(id)a0 additionalContextSignals:(id)a1;

@end
