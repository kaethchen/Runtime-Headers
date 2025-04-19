@class PKPeerPaymentEncryptionCertificate;

@interface PKPeerPaymentEncryptionCertificatesResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentEncryptionCertificate *certificate;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
