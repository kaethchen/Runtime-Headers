@class VKCImageAnalyzer, VKCImageAnalysis, NSTimer, AVPlayerLayer, AVPlayerController, AVObservationController;
@protocol AVVideoFrameVisualAnalyzerDelegate;

@interface AVVideoFrameVisualAnalyzer : NSObject {
    AVObservationController *_playerObservationController;
    int _currentAnalysisRequestID;
    double _lastCurrentTimeChangeTime;
    NSTimer *_timeObservingTimer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnalysisTime;
    VKCImageAnalysis *_lastAnalysis;
}

@property (retain, nonatomic) VKCImageAnalyzer *imageAnalyzer;
@property (nonatomic) BOOL actuallyEnabled;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id<AVVideoFrameVisualAnalyzerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long videoFrameAnalysisTypes;

+ (BOOL)analysis:(id)a0 containsVideoFrameAnalysisType:(unsigned long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPlayerController:(id)a0 playerLayer:(id)a1;

@end
