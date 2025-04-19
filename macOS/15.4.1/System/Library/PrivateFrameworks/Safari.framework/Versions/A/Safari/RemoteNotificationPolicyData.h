@class NSString, NSArray;

@interface RemoteNotificationPolicyData : UserNotificationPolicyData

@property (readonly, nonatomic) NSString *websiteIdentifier;
@property (readonly, nonatomic) NSString *deviceToken;
@property (readonly, nonatomic) NSArray *allowedDomains;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithWebsiteIdentifier:(id)a0 displayName:(id)a1 icon:(id)a2 policy:(int)a3 deviceToken:(id)a4 allowedDomains:(id)a5;
- (void)updatePermission:(int)a0;

@end
