@class NSArray, PXGMetalRecordingMetalSpriteTextureSerializable;

@interface PXGMetalRecordingRenderEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (retain, nonatomic) PXGMetalRecordingMetalSpriteTextureSerializable *texture;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } bufferRange;
@property (nonatomic) float zPosition;
@property (nonatomic) unsigned char contentsGravity;
@property (nonatomic) BOOL isOpaque;
@property (retain, nonatomic) NSArray *spriteIndices;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
