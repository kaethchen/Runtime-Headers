@class NSLocale;

@interface _LTTextLanguageDetectorScorerItem : NSObject

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long wordCount;

- (void).cxx_destruct;
- (double)score;
- (id)initWithLocale:(id)a0 confidence:(double)a1 wordCount:(long long)a2;

@end
