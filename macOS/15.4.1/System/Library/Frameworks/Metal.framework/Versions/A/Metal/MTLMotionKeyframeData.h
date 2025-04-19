@protocol MTLBuffer;

@interface MTLMotionKeyframeData : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) unsigned long long offset;

+ (id)data;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
