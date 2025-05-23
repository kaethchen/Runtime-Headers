@class NSMutableData;

@interface _DPBigEndianDataEncoder : NSObject

@property (readonly, nonatomic) NSMutableData *buffer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)appendData:(id)a0;
- (void)writeFloat32:(float)a0;
- (void)writeFloat64:(double)a0;
- (void)writeUInt16:(unsigned short)a0;
- (void)writeUInt32:(unsigned int)a0;
- (void)writeInt16:(short)a0;
- (void)writeInt32:(int)a0;
- (void)writeInt64:(long long)a0;
- (void)writeUChar:(unsigned char)a0;
- (BOOL)writeUInt24:(unsigned int)a0;
- (void)writeUInt64:(unsigned long long)a0;

@end
