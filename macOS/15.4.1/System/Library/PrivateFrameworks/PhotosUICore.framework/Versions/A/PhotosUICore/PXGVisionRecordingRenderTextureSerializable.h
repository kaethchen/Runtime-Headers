@class NSArray, PXGMetalRecordingMetalSpriteTextureSerializable;

@interface PXGVisionRecordingRenderTextureSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) unsigned long long entity;
@property (retain, nonatomic) PXGMetalRecordingMetalSpriteTextureSerializable *texture;
@property (nonatomic) long long materialIdentifier;
@property (nonatomic) BOOL wantsMaterial;
@property (nonatomic) BOOL wantsMaterialUpdate;
@property (nonatomic) BOOL hasFallbackMaterial;
@property (nonatomic) long long reuseType;
@property (nonatomic) long long instanceCount;
@property (retain, nonatomic) NSArray *spriteIndices;
@property (nonatomic) BOOL removed;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
