@class PXGViewRecordingViewSerializable;

@interface PXGViewRecordingViewEvent : PXGTungstenRecordingEvent {
    PXGViewRecordingViewSerializable *_serializable;
}

+ (id)eventWithSpriteTexture:(id)a0 payload:(id)a1 spriteIndex:(unsigned int)a2 needsParenting:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithSpriteTexture:(id)a0 payload:(id)a1 spriteIndex:(unsigned int)a2 needsParenting:(BOOL)a3;
- (id)serializable;

@end
