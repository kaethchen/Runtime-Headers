@interface PXGMetalRecordingFrameStartEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) void /* unknown type, empty encoding */ renderOrigin;
@property (nonatomic) double screenScale;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
