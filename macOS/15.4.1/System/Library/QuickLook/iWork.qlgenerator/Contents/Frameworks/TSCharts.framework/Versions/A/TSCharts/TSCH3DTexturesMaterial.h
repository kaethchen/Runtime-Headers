@class NSArray, TSCH3DVector;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}

@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } color;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)textures;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)tilings;
- (id)variableTexture;
- (void)addTexture:(id)a0 tiling:(id)a1;
- (id)firstTexture;
- (id)firstTiling;
- (unsigned long long)textureCount;
- (id)textureEnumerator;

@end
