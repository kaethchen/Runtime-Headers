@class NSString, NSDictionary;

@interface SPSecureLocationsSubscriptionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long subscriptionMode;
@property (copy, nonatomic) NSString *clientApp;
@property (nonatomic) long long fetchMode;
@property (retain, nonatomic) NSDictionary *pushIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
