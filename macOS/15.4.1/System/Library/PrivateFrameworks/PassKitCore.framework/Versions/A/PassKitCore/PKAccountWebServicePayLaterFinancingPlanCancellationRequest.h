@class NSString, NSURL;

@interface PKAccountWebServicePayLaterFinancingPlanCancellationRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (copy, nonatomic) NSString *cancellationReasonIdentifier;
@property (copy, nonatomic) NSString *cancellationReasonDescription;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
