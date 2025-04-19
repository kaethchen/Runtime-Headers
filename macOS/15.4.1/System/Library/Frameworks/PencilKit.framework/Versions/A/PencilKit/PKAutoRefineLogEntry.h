@class NSArray, NSDictionary, NSLocale;

@interface PKAutoRefineLogEntry : NSObject

@property (readonly) NSArray *refinedStrokes;
@property (readonly) NSArray *originalStrokes;
@property (readonly) NSArray *unchangedStrokes;
@property (readonly) NSLocale *locale;
@property (readonly) double duration;
@property (readonly) long long refinedWordCount;
@property (readonly) double tokenDeviation;
@property (readonly) double tokenTranslation;
@property (readonly) BOOL isAutoRefined;
@property (readonly) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (void)estimateMetricsWithTokenDeviation:(double)a0 tokenHeight:(double)a1;
- (id)initWithRefinedStrokes:(id)a0 originalStrokes:(id)a1 unchangedStrokes:(id)a2 locale:(id)a3 refinedWordCount:(long long)a4 duration:(double)a5 isAutoRefined:(BOOL)a6 debugInfo:(id)a7;

@end
