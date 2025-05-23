@class NSString, NSXPCConnection, CSEndpointerMetrics, NSObject;
@protocol CSEndpointAnalyzerImpl, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate> {
    id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
    id<CSEndpointAnalyzerImplDelegate> _endpointerImplDelegate;
    id<CSEndpointAnalyzerImpl> _activeEndpointer;
}

@property (retain, nonatomic) NSXPCConnection *endpointerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue;
@property (retain, nonatomic) id remoteObjectProxy;
@property (retain, nonatomic) CSEndpointerMetrics *cachedMetrics;
@property (retain, nonatomic) NSString *requestId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEndWaitTime:(double)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)_createClientConnection;
- (void)_deliverHardEndpointDetectedAtTime:(double)a0 withMetrics:(id)a1;
- (id)_getRemoteServiceProxyObject;
- (id)_getSerialQueueWithName:(id)a0 targetQueue:(id)a1;
- (id)activeEndpointer;
- (id)cachedEndpointerMetrics;
- (void)didDetectHardEndpointAtTime:(double)a0 withMetrics:(id)a1;
- (void)didDetectStartpointAtTime:(double)a0;
- (void)didDetectTwoShotAtTime:(double)a0;
- (unsigned long long)endPointAnalyzerType;
- (id)endpointerDelegate;
- (id)endpointerImplDelegate;
- (id)endpointerModelVersion;
- (double)postVoiceTriggerSilence;
- (void)processASRFeatures:(id)a0 fromServer:(BOOL)a1;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)recordingStoppedForReason:(long long)a0;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;
- (void)setActiveChannel:(unsigned long long)a0;
- (void)setActiveEndpointer:(id)a0;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)a0;
- (void)setEndpointerDelegate:(id)a0;
- (void)setEndpointerImplDelegate:(id)a0;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)setStartWaitTime:(double)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (void)updateEndpointerThreshold:(float)a0;

@end
