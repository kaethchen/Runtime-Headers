@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUFakeProgress : TSUBasicProgress {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _currentStage;
    unsigned long long _numberOfStages;
    BOOL _stopped;
}

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)advanceToStage:(unsigned long long)a0;
- (id)initWithMaxValue:(double)a0;
- (id)initWithMaxValue:(double)a0 numberOfStages:(unsigned long long)a1;
- (void)p_slowlyAdvanceToNextStage;

@end
