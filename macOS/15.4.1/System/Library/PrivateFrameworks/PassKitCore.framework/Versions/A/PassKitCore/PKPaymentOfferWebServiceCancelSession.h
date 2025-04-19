@class NSURL, NSSet, NSError;

@interface PKPaymentOfferWebServiceCancelSession : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSSet *sessionIdentifiers;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
