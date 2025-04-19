@interface SoundAnalysis.DecoderByNSCoding : NSCoder {
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ decodedByteBuffers;
}

@property (nonatomic, readonly) BOOL allowsKeyedCoding;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(long long *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })decodeCMTimeForKey:(id)a0;
- (struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; })decodeCMTimeMappingForKey:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })decodeCMTimeRangeForKey:(id)a0;

@end
