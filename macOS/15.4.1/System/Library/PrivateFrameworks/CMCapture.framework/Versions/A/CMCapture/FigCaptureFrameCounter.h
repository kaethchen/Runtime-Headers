@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface FigCaptureFrameCounter : NSObject {
    double _loggingInterval;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _started;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    long long _totalFramesCount;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _totalFirstFramePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _totalLastFramePTS;
    long long _intervalFramesCount;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _intervalFirstFramePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _intervalLastFramePTS;
}

@property (readonly, nonatomic) NSString *title;
@property (nonatomic) double loggingInterval;

+ (void)initialize;
+ (id)osStateData;

- (void)dealloc;
- (id)initWithTitle:(id)a0;
- (void)start;
- (void)stop;
- (id)summary;
- (void)incrementWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)_frameRateWithFramesCount:(long long)a0 firstFramePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 lastFramePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_logIntervalFrameRate;
- (id)_summaryIsolated;

@end
