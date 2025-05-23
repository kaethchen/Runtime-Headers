@interface AMSAttestation : NSObject

+ (id)_attestationPListWithStyle:(unsigned long long)a0 primaryAttestation:(id)a1 extendedAttestation:(id)a2 error:(id *)a3;
+ (id)_generateCertificateChainStringsForAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)attestationHTTPBodyDataWithStyle:(unsigned long long)a0 regenerateKeys:(BOOL)a1 error:(id *)a2;
+ (id)attestationWithAccount:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)attestationWithOptions:(id)a0 error:(id *)a1;

@end
