@class NSString, NSURL, PKApplyVerificationInformation;

@interface PKApplyWebServiceVerificationSubmissionRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKApplyVerificationInformation *verificationInfo;
@property (nonatomic) unsigned long long verificationType;
@property (copy, nonatomic) NSString *odiAssessment;
@property (nonatomic) long long channel;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
