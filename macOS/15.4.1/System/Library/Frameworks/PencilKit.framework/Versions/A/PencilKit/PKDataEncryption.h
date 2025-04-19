@interface PKDataEncryption : NSObject

+ (id)decryptData:(id)a0 key:(id)a1;
+ (id)decryptFile:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)encryptData:(id)a0 key:(id)a1;
+ (BOOL)encryptData:(id)a0 to:(id)a1 key:(id)a2 error:(id *)a3;

@end
