@class PXGMetalRecordingFrameStartEventSerializable;

@interface PXGMetalRecordingFrameStartEvent : PXGTungstenRecordingEvent {
    PXGMetalRecordingFrameStartEventSerializable *_serializable;
}

+ (id)eventWithViewSize:(SEL)a0 renderOrigin:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2;

- (void).cxx_destruct;
- (id)initWithViewSize:(SEL)a0 renderOrigin:(struct CGSize { double x0; double x1; })a1 screenScale:(double)a2;
- (id)serializable;

@end
