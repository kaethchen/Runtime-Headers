@class PXGViewRecordingFrameEndEventSerializable;

@interface PXGViewRecordingFrameEndEvent : PXGTungstenRecordingEvent {
    PXGViewRecordingFrameEndEventSerializable *_serializable;
}

+ (id)event;

- (id)init;
- (void).cxx_destruct;
- (id)serializable;

@end
