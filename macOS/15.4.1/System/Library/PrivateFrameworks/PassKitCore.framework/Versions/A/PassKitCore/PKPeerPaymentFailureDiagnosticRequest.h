@class PKPeerPaymentFailureDiagnostic;

@interface PKPeerPaymentFailureDiagnosticRequest : PKPeerPaymentWebServiceRequest {
    PKPeerPaymentFailureDiagnostic *_failureDiagnostic;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithFailureDiagnostic:(id)a0;

@end
