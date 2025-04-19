@class NSArray;

@interface ATXNotificationRankingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *userNotifications;
@property (readonly, nonatomic) BOOL useLLM;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserNotifications:(id)a0 useLLM:(BOOL)a1;

@end
