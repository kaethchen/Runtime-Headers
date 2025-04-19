@interface PXGVisionRecordingSkippedRenderEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) unsigned long long reason;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
