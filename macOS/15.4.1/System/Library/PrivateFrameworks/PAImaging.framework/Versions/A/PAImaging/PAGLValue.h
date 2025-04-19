@interface PAGLValue : NSObject

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned int size;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) void *bytes;

+ (id)valueWithFloat:(float)a0;
+ (id)valueWithBytes:(const void *)a0 type:(unsigned int)a1;
+ (id)valueWithInt:(int)a0;
+ (id)valueWithMat3x2:(struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; })a0;
+ (id)valueWithMat4:(struct { struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x1; struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x2; struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; } x3; })a0;
+ (id)valueWithSampler1D:(int)a0;
+ (id)valueWithSampler2DRect:(int)a0;
+ (id)valueWithSampler3D:(int)a0;
+ (id)valueWithVec2:(struct { float x0; float x1; })a0;
+ (id)valueWithVec3:(struct { float x0; float x1; float x2; })a0;
+ (id)valueWithVec4:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x0; })a0;

- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned int)a0 count:(unsigned int)a1;
- (unsigned long long)_sizeForGLType:(unsigned int)a0;
- (void)setBytes:(const void *)a0 offset:(unsigned int)a1 count:(unsigned int)a2;

@end
