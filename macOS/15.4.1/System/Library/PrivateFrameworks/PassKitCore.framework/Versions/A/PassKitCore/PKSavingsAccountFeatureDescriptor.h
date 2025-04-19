@class NSArray, NSString;

@interface PKSavingsAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long fundingSourceTypes;
@property (nonatomic) unsigned long long transferFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *transferTermsIdentifier;
@property (nonatomic) unsigned long long contactMethod;
@property (nonatomic) BOOL showCreditRewardsHubBalance;
@property (nonatomic) BOOL showCreditDashboardBalance;
@property (nonatomic) BOOL showSettingsBalance;
@property (nonatomic) BOOL hideCreditRewardsHubSignage;
@property (nonatomic) BOOL hideAuthenticationInterstitial;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToSavingsAccountFeatureDescriptor:(id)a0;

@end
