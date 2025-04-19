@class NSPersonNameComponents;

@interface _CNNameComponentsDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (id)initWithNameComponents:(id)a0 origin:(id)a1;
- (void)updatePropertyListRepresentation:(id)a0;

@end
