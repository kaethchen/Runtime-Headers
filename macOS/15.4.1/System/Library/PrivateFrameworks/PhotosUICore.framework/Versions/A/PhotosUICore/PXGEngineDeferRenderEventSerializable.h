@interface PXGEngineDeferRenderEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) BOOL shouldDeferRenderUntilNextFrame;
@property (nonatomic) BOOL delegateAllowsRender;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
