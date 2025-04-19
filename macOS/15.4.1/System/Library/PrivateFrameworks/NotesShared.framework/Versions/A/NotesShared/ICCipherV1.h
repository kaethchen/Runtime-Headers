@interface ICCipherV1 : NSObject

+ (id)decryptData:(id)a0 withKey:(id)a1 tag:(id)a2 initializationVector:(id)a3 error:(id *)a4;
+ (id)encryptData:(id)a0 withKey:(id)a1 tag:(id *)a2 initializationVector:(id *)a3 error:(id *)a4;
+ (id)keyForPassphrase:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 error:(id *)a3;
+ (id)unwrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)wrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
