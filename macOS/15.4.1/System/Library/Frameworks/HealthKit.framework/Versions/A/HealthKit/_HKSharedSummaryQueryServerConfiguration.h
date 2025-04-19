@class HKSharedSummaryTransaction, NSString, NSSet;

@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKSharedSummaryTransaction *transaction;
@property (copy, nonatomic) NSString *package;
@property (copy, nonatomic) NSSet *includedIdentifiers;
@property (copy, nonatomic) NSSet *includedObjectTypes;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
