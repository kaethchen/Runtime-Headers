@class NSString, PKPeerPaymentAccount, NSArray, PKDynamicProvisioningPageLearnMoreContent;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSArray *requiredFieldsByPage;
@property (readonly, nonatomic) NSArray *acceptableDocuments;
@property (readonly, nonatomic) BOOL useDeviceValidation;
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;
@property (nonatomic) long long verificationContext;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
