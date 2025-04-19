@class NSString;

@interface _CNEmailAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 origin:(id)a2;
- (void)updatePropertyListRepresentation:(id)a0;

@end
