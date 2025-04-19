@interface TextToSpeechVoiceBankingUI.CoreSynthesisVoicePickableFetcher : NSObject <TTSAXResourceManagerObserver> {
    void /* unknown type, empty encoding */ _pickableStreams;
    void /* unknown type, empty encoding */ assetService;
    void /* unknown type, empty encoding */ currentIdMap;
    void /* unknown type, empty encoding */ filterBlock;
    void /* unknown type, empty encoding */ currentVoices;
    void /* unknown type, empty encoding */ requiredTraits;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ siriVoicePolicy;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadProgressForVoiceId:(id)a0 progress:(float)a1 storageSize:(long long)a2 requiredDiskSpace:(BOOL)a3;
- (void)finishedDeletingResource:(id)a0;
- (void)finishedDownloadingResource:(id)a0 wasCancelled:(BOOL)a1;

@end
