@class NSTimeZone, NSString, PKSavingsAccountSummary, NSURL, NSDate, PKSavingsAccountStepUpDetails;

@interface PKSavingsAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;
@property (retain, nonatomic) NSTimeZone *productTimeZone;
@property (nonatomic) BOOL moreInfoRequired;
@property (nonatomic) BOOL fccStepUpRequired;
@property (retain, nonatomic) PKSavingsAccountStepUpDetails *fccStepUpDetails;
@property (nonatomic) BOOL termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSURL *privacyPolicyURL;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSURL *contactWebsite;
@property (copy, nonatomic) NSString *contactNumber;
@property (retain, nonatomic) PKSavingsAccountSummary *accountSummary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
