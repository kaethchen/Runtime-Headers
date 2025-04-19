@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long destinations;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) UNNotificationContent *content;
@property (readonly, copy) UNNotificationTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2;
+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;
+ (id)requestWithIdentifier:(id)a0 pushPayload:(id)a1 bundleIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;
- (unsigned long long)_notificationDestinationsForInterruptionLevel:(unsigned long long)a0 inputDestinations:(unsigned long long)a1;
- (void)addSecurityScope:(id)a0;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (void)removeSecurityScope;

@end
