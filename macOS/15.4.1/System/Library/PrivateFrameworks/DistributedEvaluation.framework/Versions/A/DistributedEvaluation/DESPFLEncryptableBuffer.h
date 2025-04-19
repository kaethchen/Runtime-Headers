@interface DESPFLEncryptableBuffer : NSObject

@property (readonly, nonatomic) float *mutableDataNumbers;
@property (readonly, nonatomic) unsigned long long count;

- (id)encryptedDataWithPublicKey:(id)a0 error:(id *)a1;
- (id)initWithEncryptor:(id)a0 count:(unsigned long long)a1;

@end
