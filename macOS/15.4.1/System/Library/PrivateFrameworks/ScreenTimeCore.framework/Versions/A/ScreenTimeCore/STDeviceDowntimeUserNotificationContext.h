@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *localizedUserNotificationBodyKey;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinations;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)notificationBundleIdentifier;
- (void)setEndDateComponents:(id)a0 referenceDate:(id)a1;
- (void)setEndDateComponents:(id)a0 referenceDate:(id)a1 locale:(id)a2;

@end
