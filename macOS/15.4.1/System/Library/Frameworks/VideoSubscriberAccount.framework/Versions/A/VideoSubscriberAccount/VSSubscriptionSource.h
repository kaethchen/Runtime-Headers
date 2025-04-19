@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *identifier;

+ (id)subscriptionSourceForWebsiteWithURL:(id)a0;
+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)a0;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
