@interface CoreEmbeddedSpeechAnalyzer : NSObject <CoreEmbeddedSpeechRecognizerProvider> {
    void /* unknown type, empty encoding */ operationDequeuerTask;
    void /* unknown type, empty encoding */ _instanceUUID;
    void /* unknown type, empty encoding */ _taskPriority;
    void /* unknown type, empty encoding */ _operationEnqueuer;
    void /* unknown type, empty encoding */ _audioEnqueuer;
    void /* unknown type, empty encoding */ preheatingTask;
    void /* unknown type, empty encoding */ geoLMRegionIDUpdateTask;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ transcriber;
    void /* unknown type, empty encoding */ enablesVoiceCommands;
    void /* unknown type, empty encoding */ modelVersion;
    void /* unknown type, empty encoding */ acousticModelVersion;
    void /* unknown type, empty encoding */ speechProfileUsed;
    void /* unknown type, empty encoding */ speechProfileConfig;
    void /* unknown type, empty encoding */ userIdMask;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ samplingRate;
    void /* unknown type, empty encoding */ timeUntilRecognitionStartInMs;
    void /* unknown type, empty encoding */ bufferedAudioDataLength;
    void /* unknown type, empty encoding */ bufferedAudioPackets;
    void /* unknown type, empty encoding */ bufferedRequestEagerResultData;
    void /* unknown type, empty encoding */ bufferedAudioEnded;
    void /* unknown type, empty encoding */ audioDurationMs;
    void /* unknown type, empty encoding */ processedAudioDuration;
    void /* unknown type, empty encoding */ didFinish;
    void /* unknown type, empty encoding */ recognitionBeginTime;
    void /* unknown type, empty encoding */ recognitionEndTime;
    void /* unknown type, empty encoding */ messageAppBiomeRecord;
    void /* unknown type, empty encoding */ evaluationRecord;
    void /* unknown type, empty encoding */ analyzerOutputHandlerTask;
    void /* unknown type, empty encoding */ hasRecognizedAnything;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

+ (void)resetCache;
+ (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
+ (void)sendVisualContextAndCorrectionsInfo:(id)a0 interactionIdentifier:(id)a1;
+ (void)forceCooldownIfIdle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)pauseRecognition;
- (void)stopAudioDecoding;
- (void)updateVoiceCommandContextWithPrefixText:(id)a0 postfixText:(id)a1 selectedText:(id)a2 disambiguationActive:(id)a3 cursorInVisibleText:(id)a4 favorCommandSuppression:(id)a5 abortCommandSuppression:(id)a6 undoEvent:(id)a7;
- (void)resumeRecognitionWithPrefixText:(id)a0 postfixText:(id)a1 selectedText:(id)a2;
- (void)finishAudio;
- (void)addAudioPacket:(id)a0;
- (void)addAudioPacket:(id)a0 packetRecordedTime:(id)a1 packetReadyUpstreamTime:(id)a2;
- (id)initWithDelegate:(id)a0 instanceUUID:(char *)a1;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)a0 preheatSource:(id)a1 modelOverrideURL:(id)a2;
- (void)requestEagerResult;
- (void)startMissingAssetDownload;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandlerWithInfo:(id /* block */)a1;

@end
