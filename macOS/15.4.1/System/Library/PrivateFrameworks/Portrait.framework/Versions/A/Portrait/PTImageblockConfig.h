@interface PTImageblockConfig : NSObject

@property (readonly, nonatomic) void /* unknown type, empty encoding */ scissorRectOffset;
@property (readonly, nonatomic) struct ImageBlkOutputOffset { void /* unknown type, empty encoding */ sourceOffset; void /* unknown type, empty encoding */ destOffset; } outOffset;
@property (readonly, nonatomic) unsigned long long imageblockSize;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threads;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGroup;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })adjustScissorRectToImageBlocks:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;

- (id)initWithTexture:(id)a0;
- (id)initWithPTTexture:(id)a0;
- (id)initWithPTTexture:(SEL)a0 outRect:(id)a1;
- (id)initWithPTTexture:(id)a0 scissorRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (id)initWithTextureSize:(id)a0 scissorRect:(SEL)a1 outRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2;

@end
