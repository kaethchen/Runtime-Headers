@interface PXGMetalRecordingMetalSpriteTextureSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) unsigned long long texture;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isAtlas;
@property (nonatomic) unsigned long long pixelFormat;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
