@class PXGEngineRecordingUpdateEndEventSerializable;

@interface PXGEngineRecordingUpdateEndEvent : PXGTungstenRecordingEvent {
    PXGEngineRecordingUpdateEndEventSerializable *_serializable;
}

+ (id)eventWithUpdated:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithUpdated:(BOOL)a0;
- (id)serializable;

@end
