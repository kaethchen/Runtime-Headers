@class NSString, NSSet, NSArray;

@interface FKPaymentPass : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSArray *associatedStoreIdentifiers;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryPaymentApplicationPaymentType;
@property (copy, nonatomic) NSString *primaryPaymentApplicationDisplayName;
@property (copy, nonatomic) NSString *partnerOrgID;
@property (copy, nonatomic) NSSet *paymentApplications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
