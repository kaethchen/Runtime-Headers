@class NSString, NSURL, PKFeatureApplicationInvitationDetails, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) NSURL *applyServiceURL;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) unsigned long long featureProduct;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (nonatomic) long long applicationType;
@property (nonatomic) long long updateUserInfoSubType;
@property (nonatomic) unsigned long long verificationType;
@property (nonatomic) long long channel;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *fundingSourceIdentifier;
@property (retain, nonatomic) PKFeatureApplicationInvitationDetails *invitationDetails;
@property (copy, nonatomic) NSString *preliminaryAssessmentIdentifier;
@property (copy, nonatomic) NSString *odiAssessment;
@property (nonatomic) long long associatedIntent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
