@class NSString;

@interface SecureSpeakerRecognitionPhraseConfig : NSObject {
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ satThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ satStrongAcceptThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ satStrongRejectThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ multiUserLowScoreThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ multiUserHighScoreThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ multiUserConfidentScoreThreshold;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ multiUserDeltaScoreThreshold;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 satThreshold:(float)a1 satStrongAcceptThreshold:(float)a2 satStrongRejectThreshold:(float)a3 multiUserLowScoreThreshold:(long long)a4 multiUserHighScoreThreshold:(long long)a5 multiUserConfidentScoreThreshold:(long long)a6 multiUserDeltaScoreThreshold:(long long)a7;

@end
