@class CBFrameInfoProvider, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CBFrameStats : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CBFrameInfoProvider *_frameInfoProvider;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _rtplcFrameDelayedNitsTable;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _rtplcFrameDelayedAPCETable;
    struct PeakAPCE { float current; float cap; float timeTaperConstant; float windowSize; float windowStart; NSObject<OS_dispatch_source> *recoveryTimer; float recoveryMultiplier; float recoveryWindowSize; } _peakAPCE;
    struct RTPLCCapApplied { BOOL previous; float count; float triggerCount; } _rtplcCapApplied;
    float _previousFramePresentationTime;
    NSObject<OS_os_log> *_logHandle;
    NSMutableArray *_frameArray;
    float _lastFrameAPCE;
    BOOL _frameInfoLoggingEnabled;
}

@property double movingAverageDuration;
@property (readonly) float scaleFactor;
@property (readonly) unsigned long long tripLength;
@property (readonly) float currentTripStartTime;
@property (readonly) float tripMaxAPCE;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopMonitoring;
- (void)enableFrameInfoLogging:(BOOL)a0;
- (float)getMovingAverage;
- (float)getPeakAPCE;
- (float)getPeakAPCECap;
- (id)initWithQueue:(id)a0 frameInfoProvider:(id)a1 andWindowServerDisplay:(id)a2;
- (void)processFrameInfo:(struct { unsigned long long x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; float x7; })a0;
- (BOOL)shouldPop;
- (void)startMonitoring:(id /* block */)a0;

@end
