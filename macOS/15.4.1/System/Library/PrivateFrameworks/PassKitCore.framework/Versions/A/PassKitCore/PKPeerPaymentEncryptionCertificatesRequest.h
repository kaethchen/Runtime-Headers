@interface PKPeerPaymentEncryptionCertificatesRequest : PKPeerPaymentWebServiceRequest {
    unsigned long long _destination;
}

- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (id)initWithEncryptionCertificateDestination:(unsigned long long)a0;

@end
