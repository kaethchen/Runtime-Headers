@interface ICCipherV2 : NSObject

+ (id)decryptData:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)deserializedData:(id)a0 initializationVector:(id *)a1 tag:(id *)a2;
+ (id)encryptData:(id)a0 withKey:(id)a1 additionalAuthenticatedData:(id)a2 error:(id *)a3;
+ (id)serializedData:(id)a0 initializationVector:(id)a1 tag:(id)a2;
+ (long long)standardWrappedKeyLength;
+ (id)unwrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)wrapKey:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
