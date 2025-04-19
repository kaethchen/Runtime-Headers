@class NSArray;

@interface ATXDistractionEvents : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *allDeliveredNotifications;
@property (readonly, copy, nonatomic) NSArray *allInterruptingAppSessions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAllDeliveredNotifications:(id)a0 allInterruptingAppSessions:(id)a1;

@end
