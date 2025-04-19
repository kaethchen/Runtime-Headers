@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contentType;

+ (id)storeItemWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)matchDictionaryWithSubscriptionStatus:(id)a0;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)a0;

@end
