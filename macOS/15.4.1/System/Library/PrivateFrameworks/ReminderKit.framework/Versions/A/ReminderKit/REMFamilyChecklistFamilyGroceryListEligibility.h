@interface REMFamilyChecklistFamilyGroceryListEligibility : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEligible;
@property (readonly, nonatomic) long long ineligibilityReasons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsEligible:(BOOL)a0 ineligibilityReasons:(long long)a1;

@end
