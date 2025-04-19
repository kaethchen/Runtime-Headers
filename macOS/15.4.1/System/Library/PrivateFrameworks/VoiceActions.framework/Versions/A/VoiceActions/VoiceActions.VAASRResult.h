@class NSString;

@interface VoiceActions.VAASRResult : NSObject {
    void /* unknown type, empty encoding */ transcript;
    void /* unknown type, empty encoding */ usedPartialAsFinal;
    void /* unknown type, empty encoding */ isFinal;
    void /* unknown type, empty encoding */ isFinalTerminal;
    void /* unknown type, empty encoding */ isIgnored;
    void /* unknown type, empty encoding */ audioBuffer;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
