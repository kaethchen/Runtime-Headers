@interface _HKSharedSummaryTransactionQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL committedTransactions;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
