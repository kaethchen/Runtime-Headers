@class PXGChangeDetails;

@interface PXGEngineRecordingChangeDetailsEvent : PXGTungstenRecordingEvent {
    PXGChangeDetails *_changeDetails;
}

+ (id)eventWithChangeDetails:(id)a0;

- (void).cxx_destruct;
- (id)initWithChangeDetails:(id)a0;
- (id)serializable;

@end
