@class PXGViewRecordingFrameStartEventSerializable;

@interface PXGViewRecordingFrameStartEvent : PXGTungstenRecordingEvent {
    PXGViewRecordingFrameStartEventSerializable *_serializable;
}

+ (id)eventWithViewSize:(struct CGSize { double x0; double x1; })a0 renderOrigin:(struct CGPoint { double x0; double x1; })a1 screenScale:(double)a2;

- (void).cxx_destruct;
- (id)initWithViewSize:(struct CGSize { double x0; double x1; })a0 renderOrigin:(struct CGPoint { double x0; double x1; })a1 screenScale:(double)a2;
- (id)serializable;

@end
