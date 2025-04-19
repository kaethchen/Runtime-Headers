@class NSString;

@interface PKPeerPaymentRecurringPaymentsRequest : PKPeerPaymentWebServiceRequest {
    NSString *_accountIdentifier;
}

- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
