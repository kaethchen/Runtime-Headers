@class NSString, NSURL;

@interface PKAccountWebServicePayLaterFinancingPlanDisputeSendEmailRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *planIdentifier;
@property (copy, nonatomic) NSString *disputeIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
