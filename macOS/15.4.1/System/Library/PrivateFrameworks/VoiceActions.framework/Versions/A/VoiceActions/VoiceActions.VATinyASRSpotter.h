@interface VoiceActions.VATinyASRSpotter : VoiceActions.VAKeywordSpotterBase {
    void /* unknown type, empty encoding */ tasrDelegate;
    void /* unknown type, empty encoding */ strategyProvider;
    void /* unknown type, empty encoding */ tasrConfig;
    void /* unknown type, empty encoding */ tasrModel;
    void /* unknown type, empty encoding */ vadModel;
    void /* unknown type, empty encoding */ mustWaitForFinalToStopInference;
    void /* unknown type, empty encoding */ usedPartialAsFinal;
    void /* unknown type, empty encoding */ timingInfo;
    void /* unknown type, empty encoding */ lastModelInputBeforeStartOfSpeech;
    void /* unknown type, empty encoding */ audioDebugBytesBeforeSpeech;
    void /* unknown type, empty encoding */ audioDebugBytesDuringSpeech;
    void /* unknown type, empty encoding */ fuzzyKeywordsWithSpaces;
    void /* unknown type, empty encoding */ loopStartTime;
    void /* unknown type, empty encoding */ blockInferenceRequestPending;
}

- (void).cxx_destruct;

@end
