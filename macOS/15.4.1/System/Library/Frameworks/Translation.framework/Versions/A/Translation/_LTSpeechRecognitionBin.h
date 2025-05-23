@class NSArray;

@interface _LTSpeechRecognitionBin : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *alternatives;
@property (nonatomic) unsigned long long bestAlternativeIndex;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
