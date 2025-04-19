@interface CertificateUtility : NSObject

+ (BOOL)certificateChainUsesInsecureSignatureAlgorithms:(id)a0;
+ (BOOL)certificateUsesInsecureSignatureAlgorithm:(struct __SecCertificate { } *)a0;

@end
