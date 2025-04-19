@class NSString, NSDate;

@interface PKPaymentSafariCredential : PKPaymentCredential

@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *cardNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) BOOL canCheckEligibility;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)longDescription;
- (long long)credentialType;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithSafariDictionary:(id)a0;
- (id)sanitizedPrimaryAccountNumber;

@end
