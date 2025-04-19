@interface VoiceActions.VAFlexibleKeywordSpotter : VoiceActions.VAKeywordSpotterBase {
    void /* unknown type, empty encoding */ verifierModel;
    void /* unknown type, empty encoding */ encoderModel;
    void /* unknown type, empty encoding */ strategyProvider;
    void /* unknown type, empty encoding */ previousKeywordTime;
    void /* unknown type, empty encoding */ keywordCallbackDelays;
    void /* unknown type, empty encoding */ keywordCallbackDelayMax;
    void /* unknown type, empty encoding */ keywordCallbackDelayMin;
    void /* unknown type, empty encoding */ keywordCallbackDelayAvg;
    void /* unknown type, empty encoding */ encodingSet;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
