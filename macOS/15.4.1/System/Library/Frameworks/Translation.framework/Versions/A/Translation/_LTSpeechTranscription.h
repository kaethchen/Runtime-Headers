@class NSString, NSLocale;

@interface _LTSpeechTranscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) double confidence;
@property (nonatomic) double minConfidence;
@property (nonatomic) double maxConfidence;
@property (copy, nonatomic) NSString *formattedString;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence;
@property (copy, nonatomic) NSString *sanitizedFormattedString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFormattedString:(id)a0 locale:(id)a1 confidence:(double)a2 minConfidence:(double)a3 maxConfidence:(double)a4;

@end
