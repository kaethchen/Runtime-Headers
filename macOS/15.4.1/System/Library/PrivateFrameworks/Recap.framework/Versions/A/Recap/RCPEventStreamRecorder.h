@class RCPRecorderConfig;
@protocol RCPAnalyticsEventSender;

@interface RCPEventStreamRecorder : RCPEventStream {
    struct __IOHIDEvent { } *_startLocationEvent;
}

@property (nonatomic) long long state;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) struct __IOHIDEvent { } *startLocationEvent;
@property (retain, nonatomic) id<RCPAnalyticsEventSender> analyticsEventSender;
@property (readonly, nonatomic) RCPRecorderConfig *config;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;

+ (id)recorderWithConfiguration:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)enqueueEvent:(id)a0;
- (void)startRecording;
- (void)stopRecording;
- (void)_finalizePointerEvents;
- (void)finalizeEvents;

@end
