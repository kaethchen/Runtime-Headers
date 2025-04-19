@class NSString, NSArray;

@interface LNAppNotificationEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *entityType;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSArray *instanceIdentifiers;

+ (id)eventWithType:(long long)a0 bundleIdentifier:(id)a1 entityType:(id)a2 instanceIdentifiers:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 bundleIdentifier:(id)a1 entityType:(id)a2 instanceIdentifiers:(id)a3;

@end
