@interface KHDBBase64Codec : NSObject

+ (const char *)decoder;
+ (const char *)alphabet;
+ (id)encodeData:(id)a0;
+ (id)decodeString:(id)a0;
+ (BOOL)appendPadding;
+ (BOOL)checkTerminators:(long long)a0 expected:(long long)a1;
+ (BOOL)decodeString:(id)a0 with:(id /* block */)a1;
+ (id)decodeUuid:(id)a0;
+ (id)encodeBytes:(const void *)a0 withLength:(unsigned long long)a1;
+ (id)encodeUuid:(id)a0;
+ (long long)encodedUuidLength;

- (id)init;

@end
