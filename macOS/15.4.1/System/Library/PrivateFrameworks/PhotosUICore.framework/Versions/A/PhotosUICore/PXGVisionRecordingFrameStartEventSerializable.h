@interface PXGVisionRecordingFrameStartEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGPoint { double x; double y; } renderOrigin;
@property (nonatomic) double screenScale;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
