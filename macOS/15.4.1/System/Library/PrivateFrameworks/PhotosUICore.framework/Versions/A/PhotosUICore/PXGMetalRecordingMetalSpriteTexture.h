@class NSNumber, NSIndexSet;

@interface PXGMetalRecordingMetalSpriteTexture : NSObject

@property (readonly, nonatomic) NSNumber *textureAddress;
@property (readonly, nonatomic) BOOL isAtlas;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long mipmapLevelCount;
@property (readonly, nonatomic) NSIndexSet *spriteIndexes;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (id)serializable;

@end
