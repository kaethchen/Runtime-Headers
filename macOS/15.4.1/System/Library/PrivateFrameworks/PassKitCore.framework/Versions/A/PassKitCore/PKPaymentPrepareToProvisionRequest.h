@class NSArray;

@interface PKPaymentPrepareToProvisionRequest : PKPaymentWebServiceRequest {
    NSArray *_credentials;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithCredentials:(id)a0;

@end
