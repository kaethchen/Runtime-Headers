@class PXGEngine;

@interface PXGTungstenEngineRecordingSession : PXGTungstenRecordingSession {
    PXGEngine *_engine;
}

- (void).cxx_destruct;
- (void)stop;
- (id)initWithEngine:(id)a0 directoryURL:(id)a1;

@end
