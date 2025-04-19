@interface FloatArray : NSObject <NSCopying, NSMutableCopying> {
    float *_buffer;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const float *floats;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithCount:(unsigned long long)a0;
- (id)asData;
- (float)mean;
- (float)floatAtIndex:(unsigned long long)a0;
- (id)asArray;
- (id)initWithFloats:(const float *)a0 count:(unsigned long long)a1;
- (id)addingConstant:(float)a0;
- (unsigned long long)argMinimum;
- (id)initWithFloat:(float)a0 repeatCount:(unsigned long long)a1;
- (id)initWithFloatArray:(id)a0;
- (id)initWithZeros:(unsigned long long)a0;
- (BOOL)isEqualToFloatArray:(id)a0;
- (BOOL)isEqualToFloatArray:(id)a0 tolerance:(float)a1;
- (float)maximumDifferenceWithFloatArray:(id)a0;
- (id)subtracting:(id)a0;

@end
