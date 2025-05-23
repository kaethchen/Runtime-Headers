@interface GLKTextureInfo : NSObject <NSCopying> {
    BOOL lossyCompressedSource;
}

@property (readonly) unsigned int name;
@property (readonly) unsigned int target;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) unsigned int depth;
@property (readonly) int alphaState;
@property (readonly) int textureOrigin;
@property (readonly) BOOL containsMipmaps;
@property (readonly) unsigned int mimapLevelCount;
@property (readonly) unsigned int arrayLength;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithTextureTXR:(id)a0 textureName:(unsigned int)a1;
- (id)initWithTexture:(id)a0 textureName:(unsigned int)a1;
- (BOOL)lossyCompressedSource;

@end
