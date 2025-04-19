@class PXGEngineDeferRenderEventSerializable;

@interface PXGEngineDeferRenderEvent : PXGTungstenRecordingEvent {
    PXGEngineDeferRenderEventSerializable *_serializable;
}

+ (id)eventWithShouldDeferRenderUntilNextFrame:(BOOL)a0 delegateAllowsRender:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithShouldDeferRenderUntilNextFrame:(BOOL)a0 delegateAllowsRender:(BOOL)a1;
- (id)serializable;

@end
