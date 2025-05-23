@class NSString;

@interface _LTSpeechRecognitionTokensAlternative : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long confidence;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence;
@property (nonatomic) BOOL hasSpaceAfter;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
