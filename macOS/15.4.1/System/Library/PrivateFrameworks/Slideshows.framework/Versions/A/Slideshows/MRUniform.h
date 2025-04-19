@interface MRUniform : MUPoolObject {
    float m[16];
    long long i;
    long long length;
}

+ (BOOL)clearVars;
+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;

- (id)initWithFloat:(double)a0;
- (id)initWithVec3:(double)a0 :(double)a1 :(double)a2;
- (id)initWithI:(long long)a0;
- (id)initWithMat4:(float[16])a0;
- (id)initWithMat4ForMat3:(float[16])a0;
- (id)initWithVec2:(double)a0 :(double)a1;
- (id)initWithVec4:(double)a0 :(double)a1 :(double)a2 :(double)a3;

@end
