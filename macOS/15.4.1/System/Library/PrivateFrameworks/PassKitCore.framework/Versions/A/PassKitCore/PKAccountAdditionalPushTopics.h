@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *extendedAccount;
@property (copy, nonatomic) NSString *payments;
@property (copy, nonatomic) NSString *users;
@property (copy, nonatomic) NSString *sharedAccountCloudStore;
@property (copy, nonatomic) NSString *applications;
@property (copy, nonatomic) NSString *financingPlans;
@property (copy, nonatomic) NSString *physicalCards;
@property (copy, nonatomic) NSString *virtualCards;
@property (copy, nonatomic) NSString *servicingToken;
@property (copy, nonatomic) NSString *fundingSources;
@property (copy, nonatomic) NSString *creditRecoveryPaymentPlans;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
