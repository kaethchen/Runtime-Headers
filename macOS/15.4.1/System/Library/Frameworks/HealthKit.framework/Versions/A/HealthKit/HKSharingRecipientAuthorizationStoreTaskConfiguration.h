@class HKSharingRecipientIdentifier;

@interface HKSharingRecipientAuthorizationStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
