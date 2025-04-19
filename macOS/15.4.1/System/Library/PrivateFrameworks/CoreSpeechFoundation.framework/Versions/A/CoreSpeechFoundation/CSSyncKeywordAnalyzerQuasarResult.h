@interface CSSyncKeywordAnalyzerQuasarResult : NSObject

@property (nonatomic) double triggerConfidence;
@property (nonatomic) BOOL isValidResult;

- (id)description;
- (id)initWithConfidence:(double)a0;
- (id)initWithDefaultConfidence;

@end
