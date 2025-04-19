@interface EDPUtilities : NSObject

+ (id)createSignature:(id)a0 withCertChain:(id)a1 withTime:(id)a2 withRemoteHandler:(id /* block */)a3 withError:(id *)a4;
+ (id)getCertificateChain:(struct __SecIdentity { } *)a0 withError:(id *)a1;
+ (id)signDigest:(id)a0 algorithm:(unsigned int)a1 identity:(struct __SecIdentity { } *)a2 error:(id *)a3;
+ (id)validateSignature:(id)a0 requireTrust:(BOOL)a1 withError:(id *)a2;

@end
