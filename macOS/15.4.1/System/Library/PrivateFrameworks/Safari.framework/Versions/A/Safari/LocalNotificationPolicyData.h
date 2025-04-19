@class NSString;

@interface LocalNotificationPolicyData : UserNotificationPolicyData

@property (readonly, nonatomic) NSString *originString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOrigin:(id)a0 policy:(int)a1;
- (void)updatePermission:(int)a0;

@end
