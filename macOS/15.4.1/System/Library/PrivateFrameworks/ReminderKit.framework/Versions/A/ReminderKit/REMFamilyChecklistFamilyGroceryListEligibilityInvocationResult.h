@class REMFamilyChecklistFamilyGroceryListEligibility;

@interface REMFamilyChecklistFamilyGroceryListEligibilityInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMFamilyChecklistFamilyGroceryListEligibility *familyGroceryListEligibility;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFamilyGroceryListEligibility:(id)a0;

@end
