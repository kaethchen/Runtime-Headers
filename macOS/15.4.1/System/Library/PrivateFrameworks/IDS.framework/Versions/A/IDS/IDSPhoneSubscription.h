@class NSString;

@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long subscriptionSlot;
@property (retain, nonatomic) NSString *labelID;

+ (id)CTSIMSFromPhoneSubscriptions:(id)a0;
+ (id)phoneSubscriptionWithLabelID:(id)a0;
+ (id)phoneSubscriptionWithSIM:(id)a0;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)a0;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)a0 andLabelID:(id)a1;
+ (id)phoneSubscriptionsFromCTSIMs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionSlot:(long long)a0 labelID:(id)a1;
- (BOOL)isEqualToPhoneSubscription:(id)a0;
- (id)matchingSim;

@end
