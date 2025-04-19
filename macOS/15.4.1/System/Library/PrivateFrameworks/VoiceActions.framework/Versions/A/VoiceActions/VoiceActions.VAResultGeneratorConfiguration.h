@class NSString;

@interface VoiceActions.VAResultGeneratorConfiguration : NSObject {
    void /* unknown type, empty encoding */ preSilenceCheckEnabled;
    void /* unknown type, empty encoding */ postSilenceCheckEnabled;
    void /* unknown type, empty encoding */ duringSpeechCheckEnabled;
    void /* unknown type, empty encoding */ receptiveFieldLength;
    void /* unknown type, empty encoding */ receptiveFieldStride;
    void /* unknown type, empty encoding */ overlapThreshold;
    void /* unknown type, empty encoding */ averagingWindowSize;
    void /* unknown type, empty encoding */ preSilenceLookback;
    void /* unknown type, empty encoding */ preSilenceExpected;
    void /* unknown type, empty encoding */ preSilenceProbability;
    void /* unknown type, empty encoding */ duringCommandExpectedSpeechRatio;
    void /* unknown type, empty encoding */ duringCommandSpeechProbability;
    void /* unknown type, empty encoding */ postSilenceLookforward;
    void /* unknown type, empty encoding */ postSilenceExpected;
    void /* unknown type, empty encoding */ postSilenceProbability;
    void /* unknown type, empty encoding */ takeMaxScore;
    void /* unknown type, empty encoding */ waitFrames;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
