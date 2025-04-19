@class PXGEngineRecordingUpdateStartEventSerializable;

@interface PXGEngineRecordingUpdateStartEvent : PXGTungstenRecordingEvent {
    PXGEngineRecordingUpdateStartEventSerializable *_serializable;
}

+ (id)eventWithTargetTimestamp:(double)a0 needsUpdate:(unsigned long long)a1 pendingUpdateEntities:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithTargetTimestamp:(double)a0 needsUpdate:(unsigned long long)a1 pendingUpdateEntities:(unsigned long long)a2;
- (id)serializable;

@end
