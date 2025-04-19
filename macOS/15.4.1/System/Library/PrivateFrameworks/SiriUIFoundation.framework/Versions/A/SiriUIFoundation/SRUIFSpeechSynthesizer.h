@class SiriTTSDaemonSession, NSMutableDictionary, AFQueue, NSString, NSObject, NSMutableArray, AFVoiceInfo;
@protocol SRUIFSpeechSynthesizerClientStateManagerDelegate, SRUIFSpeechSynthesizerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface SRUIFSpeechSynthesizer : NSObject <AFQueueDelegate, SRUIFSpeechSynthesisTaskDelegate, SRUIFSpeechSynthesizing> {
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingTasksQueue;
    NSObject<OS_dispatch_queue> *_pendingTasksQueue;
    NSObject<OS_dispatch_group> *_pendingTasksGroup;
}

@property (readonly, nonatomic, getter=_taskQueue) AFQueue *taskQueue;
@property (readonly, nonatomic, getter=_activeTasks) NSMutableArray *activeTasks;
@property (readonly, nonatomic, getter=_delayedTasks) NSMutableDictionary *delayedTasks;
@property (retain, nonatomic) SiriTTSDaemonSession *ttsSession;
@property (weak, nonatomic) id<SRUIFSpeechSynthesizerClientStateManagerDelegate> clientStateManagerDelegate;
@property (nonatomic) unsigned int audioSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SRUIFSpeechSynthesizerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (BOOL)isSpeaking;
- (void)setOutputVoice:(id)a0;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (void)prewarmIfNeeded;
- (void)duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)enqueueSpeechSynthesisRequest:(id)a0;
- (void)isSynthesisQueueEmpty:(id /* block */)a0;
- (void)skipCurrentSynthesis;
- (id)_activeTaskWithTTSRequest:(id)a0;
- (void)_cancelByCancellingActiveTasksOnly:(BOOL)a0;
- (void)_duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)_enqueueText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 preferredVoice:(id)a4 language:(id)a5 gender:(id)a6 isPhonetic:(BOOL)a7 provisionally:(BOOL)a8 eligibleAfterDuration:(double)a9 delayed:(BOOL)a10 canUseServerTTS:(BOOL)a11 preparationIdentifier:(id)a12 shouldCache:(BOOL)a13 completion:(id /* block */)a14 analyticsContext:(id)a15 speakableContextInfo:(id)a16;
- (id)_filterVoices:(id)a0 gender:(id)a1;
- (void)_findVoiceForLanguage:(id)a0 gender:(id)a1 completion:(id /* block */)a2;
- (long long)_genderForString:(id)a0;
- (void)_handleAudioData:(id)a0 completion:(id /* block */)a1;
- (void)_handleText:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isSynthesisQueueEmpty;
- (void)_processProvisionalTasks;
- (void)_processTaskQueue;
- (long long)_speechFootPrintForVoice:(id)a0;
- (void)didFinishAudioTask:(id)a0 withError:(id)a1;
- (void)didFinishSpeakTask:(id)a0 withError:(id)a1;
- (void)didStartAudioTask:(id)a0;
- (void)didStartSpeakTask:(id)a0;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 sessionId:(id)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 completion:(id /* block */)a5;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 completion:(id /* block */)a3;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 language:(id)a3 gender:(id)a4 isPhonetic:(BOOL)a5 provisionally:(BOOL)a6 eligibleAfterDuration:(double)a7 delayed:(BOOL)a8 canUseServerTTS:(BOOL)a9 preparationIdentifier:(id)a10 completion:(id /* block */)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 preferredVoice:(id)a3 language:(id)a4 gender:(id)a5 isPhonetic:(BOOL)a6 provisionally:(BOOL)a7 eligibleAfterDuration:(double)a8 delayed:(BOOL)a9 canUseServerTTS:(BOOL)a10 preparationIdentifier:(id)a11 completion:(id /* block */)a12 analyticsContext:(id)a13 speakableContextInfo:(id)a14;
- (void)invalidateOnMainThread;
- (void)processDelayedItem:(id)a0;
- (void)speakTask:(id)a0 didGenerateMetrics:(id)a1;
- (void)speakTask:(id)a0 didGenerateWordTimingInfo:(id)a1;
- (void)taskEligibilityDidChange:(id)a0;

@end
