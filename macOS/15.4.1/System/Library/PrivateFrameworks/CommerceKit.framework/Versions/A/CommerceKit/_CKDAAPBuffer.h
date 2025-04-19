@class NSData;

@interface _CKDAAPBuffer : NSObject

@property (readonly, nonatomic) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (long long)appendHeader:(unsigned int)a0 size:(unsigned int)a1;
- (long long)appendUInt32:(unsigned int)a0 withCode:(unsigned int)a1;
- (long long)appendUInt64:(unsigned long long)a0 withCode:(unsigned int)a1;
- (long long)appendUInt8:(unsigned char)a0 withCode:(unsigned int)a1;
- (long long)appendUTF8String:(const char *)a0 length:(unsigned int)a1 withCode:(unsigned int)a2;

@end
