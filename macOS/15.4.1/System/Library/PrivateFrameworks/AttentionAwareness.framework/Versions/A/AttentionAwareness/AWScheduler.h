@class NSString, AWAttentionSampler, NSMutableDictionary, AWAttentionStreamer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
    NSMutableDictionary *_streamingClients;
    NSMutableDictionary *_interruptedStreamingClients;
    AWAttentionStreamer *_attentionStreamer;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
    BOOL _useAVFoundation;
}

@property (weak, nonatomic) id<AWSchedulerObserver> observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowFaceDetect;
@property (readonly, nonatomic) BOOL allowHIDEvents;
@property (readonly, nonatomic) BOOL allowMotionDetect;
@property (readonly, nonatomic) BOOL unitTestMode;
@property (readonly, nonatomic) BOOL isDeviceStationary;
@property (readonly, nonatomic) BOOL isDeviceOnLockScreen;

+ (id)sharedScheduler;
+ (id)sharedMotionDetectScheduler;
+ (id)sharedUnitTestScheduler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)addClient:(id)a0;
- (void)handleNotification:(unsigned long long)a0;
- (id)addStreamingClient:(id)a0 withIdentifier:(id)a1;
- (void)armEvents;
- (double)calculateTimeDelta:(unsigned long long)a0 endTime:(unsigned long long)a1 timebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a2;
- (BOOL)canActiveOperationBeEnded;
- (BOOL)canRunMotionDetect;
- (id)cancelFaceDetectStream:(id)a0 withIdentifier:(id)a1;
- (void)carPlayStateChanging:(BOOL)a0;
- (void)lockScreenStateChanging:(BOOL)a0;
- (void)motionActivityChanging:(BOOL)a0;
- (unsigned long long)nextSamplingTimeForSamplingInterval:(unsigned long long)a0;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2 senderID:(unsigned long long)a3 displayUUID:(id)a4;
- (void)reevaluate;
- (void)removeInvalidClients;
- (void)removeInvalidClientsWithConnection:(id)a0;
- (void)removeStreamingClientwithIdentifier:(id)a0;
- (id)resetInterruptedStreamingClientWithIdentifier:(id)a0;
- (void)screenStateChanging:(BOOL)a0;
- (void)setClientAsInterrupted:(id)a0 forKey:(id)a1;
- (void)setSmartCoverClosed:(BOOL)a0;
- (BOOL)shouldActivateAttentionDetectForStreaming;
- (BOOL)shouldActivateAttentionDetectionForSampling;
- (BOOL)shouldActivateEyeReliefForStreaming;
- (BOOL)shouldActivateMotionDetectForSampling;
- (BOOL)shouldActivatePersonDetectionForSampling;
- (BOOL)shouldActivatePersonDetectionForStreaming;
- (id)streamFaceDetectEvents;
- (id)streamFaceDetectEventsWithOptions:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;

@end
