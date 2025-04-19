@class NSSet;

@interface CHSWidgetRelevanceServiceEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSSet *keys;
@property (readonly, nonatomic) NSSet *extensionIdentities;

+ (id)addOrUpdateEventWithRelevanceKeys:(id)a0;
+ (id)reloadEvent;
+ (id)removeEventWithExtensionIdentities:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
