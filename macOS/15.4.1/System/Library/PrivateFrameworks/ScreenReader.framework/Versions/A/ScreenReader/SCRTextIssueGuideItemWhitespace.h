@class NSString;

@interface SCRTextIssueGuideItemWhitespace : SCRTextIssueGuideItem

@property (readonly, nonatomic) NSString *_countString;

+ (id)_countStringForIssue:(id)a0 asSymbols:(id)a1;
+ (id)_countStringForComposedCharacterString:(id)a0 repeatCount:(unsigned long long)a1 matchingCharacterSet:(id)a2;
+ (id)_sentenceExcerptStringForIssue:(id)a0 result:(id)a1 substitutionString:(id)a2;

- (void).cxx_destruct;
- (void)addDisplayTitleToRequest:(id)a0;
- (id)initWithIssue:(id)a0 parentGuide:(id)a1 target:(id)a2 action:(id)a3;

@end
