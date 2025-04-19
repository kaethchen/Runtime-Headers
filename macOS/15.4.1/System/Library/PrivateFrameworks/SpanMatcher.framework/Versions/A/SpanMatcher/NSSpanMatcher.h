@class NSMetaphone, CTFuzzyIndex;

@interface NSSpanMatcher : NSObject {
    CTFuzzyIndex *_index;
    NSMetaphone *_meta;
    int _editDistance;
    int _ignoredWordLength;
    int _ignoredWordLengthForEditDistance;
}

@property unsigned long long options;
@property long long wordsMatched;

- (void).cxx_destruct;
- (void)setMode:(int)a0;
- (id)initWithPath:(id)a0 options:(unsigned long long)a1;
- (int)getMode;
- (void)index:(id)a0 withData:(id)a1;
- (id)query:(id)a0;

@end
