@class NSUUID, HKHealthStore, NSString;

@interface HKDatabaseAccessibilityAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSString *ownerIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)markInvalid;
- (void)configureAssertion:(id)a0;
- (id)initWithOwnerIdentifier:(id)a0 uuidString:(id)a1;

@end
