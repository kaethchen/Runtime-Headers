@class NSUUID;

@interface HKSharedSummaryTransactionBuilderTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSUUID *transactionUUID;
@property (nonatomic) BOOL allowCommitted;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
