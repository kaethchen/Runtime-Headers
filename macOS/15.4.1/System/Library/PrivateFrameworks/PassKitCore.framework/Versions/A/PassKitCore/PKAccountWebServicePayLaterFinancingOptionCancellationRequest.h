@class NSString, NSURL, NSError;

@interface PKAccountWebServicePayLaterFinancingOptionCancellationRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *optionIdentifier;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
