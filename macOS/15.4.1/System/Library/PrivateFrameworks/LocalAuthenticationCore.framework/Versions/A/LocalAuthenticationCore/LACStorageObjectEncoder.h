@interface LACStorageObjectEncoder : NSObject

- (id)_convertACMExclaveBatchToDictionary:(struct { unsigned char x0; unsigned char x1; unsigned char x2; })a0;
- (id)_lastBioAuthDataToNumber:(id)a0;
- (id)encodeValue:(id)a0 forKey:(long long)a1 error:(id *)a2;

@end
