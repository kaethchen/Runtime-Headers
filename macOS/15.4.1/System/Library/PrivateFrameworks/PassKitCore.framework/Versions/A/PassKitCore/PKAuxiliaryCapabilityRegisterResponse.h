@class NSArray;

@interface PKAuxiliaryCapabilityRegisterResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (retain, nonatomic) NSArray *deviceSignatureCertificateChain;
@property (retain, nonatomic) NSArray *deviceDecryptionCertificateChain;
@property (retain, nonatomic) NSArray *serverDecryptionCertificateChain;
@property (retain, nonatomic) NSArray *serverSignatureCertificateChain;

+ (BOOL)jsonDataOptional;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_retrieveCertificateChainFromJSONObject:(id)a0 withParameterName:(id)a1;

@end
