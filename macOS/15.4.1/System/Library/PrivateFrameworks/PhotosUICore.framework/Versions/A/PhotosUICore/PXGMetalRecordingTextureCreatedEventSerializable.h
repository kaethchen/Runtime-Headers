@class PXGTextureConverterOptionsSerializable, PXGMetalRecordingMetalSpriteTextureSerializable;

@interface PXGMetalRecordingTextureCreatedEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (retain, nonatomic) PXGMetalRecordingMetalSpriteTextureSerializable *texture;
@property (retain, nonatomic) PXGTextureConverterOptionsSerializable *options;

- (void).cxx_destruct;
- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
