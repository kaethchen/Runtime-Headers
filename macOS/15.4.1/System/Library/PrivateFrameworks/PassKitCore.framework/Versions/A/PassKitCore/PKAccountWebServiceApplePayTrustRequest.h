@class PKApplePayTrustSignature;
@protocol PKAccountWebServiceApplePayTrustProtocol;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {
    id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
}

@property (retain, nonatomic) PKApplePayTrustSignature *signature;

- (void).cxx_destruct;
- (Class)responseClass;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (id)endpointComponents;
- (id)initWithApplePayTrustProtocol:(id)a0;

@end
