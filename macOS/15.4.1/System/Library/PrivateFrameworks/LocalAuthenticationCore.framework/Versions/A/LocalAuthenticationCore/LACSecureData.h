@interface LACSecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (id)secureDataWithData:(id)a0;
+ (id)secureDataWithString:(id)a0;
+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithString:(id)a0;
- (void)appendString:(id)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (void)appendData:(id)a0;
- (void)reset;
- (void)resize:(unsigned long long)a0;
- (id)nullTerminatedCopy;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
