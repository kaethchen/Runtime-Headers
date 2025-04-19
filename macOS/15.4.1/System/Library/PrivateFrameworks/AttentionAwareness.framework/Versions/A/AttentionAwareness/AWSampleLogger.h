@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWSampleLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerLogQueue;
    NSMutableDictionary *_clientLogData;
    NSMutableSet *_outstandingClientLogData;
    NSMutableSet *_addedClientLogData;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _samplingStartTime;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplesRequested;
    unsigned long long _pollsRequested;
    unsigned long long _samplesSucceeded;
}

+ (id)sharedLogger;
+ (void)client:(id)a0 attentionStateChange:(BOOL)a1;
+ (void)client:(id)a0 event:(id)a1;
+ (void)client:(id)a0 pollEventType:(unsigned long long)a1 event:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)startUpdate;
- (void)shouldSample:(BOOL)a0;
- (void)_outputPowerLog;
- (void)sampleSucceeded;
- (void)_logFeatureEnablement;
- (void)outputPowerLog;
- (void)powerLogName:(id)a0 event:(id)a1;
- (void)sampleStartedWithDeadline:(unsigned long long)a0;
- (void)streamingCompleteWithidentifier:(id)a0 duration:(unsigned long long)a1 ERActivated:(BOOL)a2;
- (void)updateDataForClient:(id)a0 deadline:(unsigned long long)a1;

@end
