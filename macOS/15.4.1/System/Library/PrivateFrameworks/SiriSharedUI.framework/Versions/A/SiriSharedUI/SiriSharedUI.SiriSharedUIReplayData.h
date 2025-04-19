@interface SiriSharedUI.SiriSharedUIReplayData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ speechRecognized;
    void /* unknown type, empty encoding */ addViews;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
