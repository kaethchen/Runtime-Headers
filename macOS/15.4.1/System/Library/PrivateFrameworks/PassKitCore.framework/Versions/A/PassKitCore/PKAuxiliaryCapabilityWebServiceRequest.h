@class PKSecureElementPass;

@interface PKAuxiliaryCapabilityWebServiceRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKSecureElementPass *pass;

- (id)init;
- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)initWithPass:(id)a0;

@end
