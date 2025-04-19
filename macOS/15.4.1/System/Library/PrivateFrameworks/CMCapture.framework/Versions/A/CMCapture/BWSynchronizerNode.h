@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
    struct OpaqueCMClock { } *_hostTimeClock;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)masterClock;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (struct OpaqueCMClock { } *)sourceClock;
- (id)initWithMediaType:(unsigned int)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
