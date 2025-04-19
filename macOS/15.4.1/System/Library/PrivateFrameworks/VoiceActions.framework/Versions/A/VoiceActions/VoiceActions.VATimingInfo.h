@class NSString;

@interface VoiceActions.VATimingInfo : NSObject {
    void /* unknown type, empty encoding */ speechStartTime;
    void /* unknown type, empty encoding */ speechEndTime;
    void /* unknown type, empty encoding */ finalResultTime;
    void /* unknown type, empty encoding */ firstTokenTime;
    void /* unknown type, empty encoding */ keywordTime;
    void /* unknown type, empty encoding */ lastPartialTime;
    void /* unknown type, empty encoding */ speechStartFrame;
    void /* unknown type, empty encoding */ speechEndFrame;
    void /* unknown type, empty encoding */ partialAsFinalResultTime;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ loopStartTime;
    void /* unknown type, empty encoding */ timerTask;
    void /* unknown type, empty encoding */ waitTimeForFirstPartial;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
