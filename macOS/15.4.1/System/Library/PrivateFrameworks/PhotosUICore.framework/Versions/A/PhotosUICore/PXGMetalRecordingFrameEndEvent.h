@class PXGMetalRecordingFrameEndEventSerializable;

@interface PXGMetalRecordingFrameEndEvent : PXGTungstenRecordingEvent {
    PXGMetalRecordingFrameEndEventSerializable *_serializable;
}

+ (id)event;

- (id)init;
- (void).cxx_destruct;
- (id)serializable;

@end
