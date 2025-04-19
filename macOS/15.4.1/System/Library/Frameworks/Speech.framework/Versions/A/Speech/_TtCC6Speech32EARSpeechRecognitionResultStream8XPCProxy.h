@interface _TtCC6Speech32EARSpeechRecognitionResultStream8XPCProxy : NSObject <_SFXPCEARSpeechRecognitionResultStream> {
    void /* unknown type, empty encoding */ enqueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)speechRecognizerDidFinishRecognitionWithError:(id)a0;
- (void)speechRecognizerDidProcessAudioDuration:(double)a0;
- (void)speechRecognizerDidProduceEndpointFeaturesWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 processedAudioDurationInMilliseconds:(long long)a5 acousticEndpointerScore:(double)a6;
- (void)speechRecognizerDidProduceLoggableMultiUserPackages:(id)a0;
- (void)speechRecognizerDidProduceLoggablePackage:(id)a0;
- (void)speechRecognizerDidRecognizeFinalResultCandidatePackage:(id)a0;
- (void)speechRecognizerDidRecognizeFinalResultMultiUserPackages:(id)a0;
- (void)speechRecognizerDidRecognizeFinalResultPackage:(id)a0;
- (void)speechRecognizerDidRecognizePartialResult:(id)a0;
- (void)speechRecognizerDidRecognizeVoiceCommandCandidatePackage:(id)a0;
- (void)speechRecognizerDidReportStatus:(unsigned long long)a0;

@end
