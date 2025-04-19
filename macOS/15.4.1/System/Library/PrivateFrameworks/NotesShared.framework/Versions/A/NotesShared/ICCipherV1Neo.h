@interface ICCipherV1Neo : NSObject

+ (id)decryptData:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)encryptData:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)keyForPassphrase:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 error:(id *)a3;
+ (id)unwrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)wrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
