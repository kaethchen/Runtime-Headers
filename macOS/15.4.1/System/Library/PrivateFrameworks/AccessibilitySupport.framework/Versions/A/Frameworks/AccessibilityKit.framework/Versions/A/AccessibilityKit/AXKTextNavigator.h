@class AXFTextRange, NSString, AXFTextPosition, NSLocale;
@protocol AXKTextProviding;

@interface AXKTextNavigator : NSObject

@property (copy, nonatomic) NSString *currentWord;
@property (retain, nonatomic) AXFTextRange *currentWordRange;
@property (weak, nonatomic) id<AXKTextProviding> _textProvider;
@property (readonly, nonatomic) BOOL _isCurrentIndexAtStartOfWord;
@property (readonly, nonatomic) BOOL _isCurrentIndexAtEndOfWord;
@property (nonatomic) long long _wordTokenizerUnit;
@property (nonatomic) BOOL _hasCustomWordTokenizer;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) AXFTextPosition *currentPosition;
@property (readonly, copy, nonatomic) NSString *currentSentence;
@property (readonly, nonatomic) AXFTextRange *currentSentenceRange;
@property (readonly, copy, nonatomic) NSString *currentParagraph;
@property (readonly, nonatomic) AXFTextRange *currentParagraphRange;

+ (BOOL)_shouldExtendCandidateWord:(id)a0 withSuffix:(id)a1;

- (void).cxx_destruct;
- (id)_findFirstWordCandidateInSearchRange:(id)a0;
- (id)_findLastWordCandidateInSearchRange:(id)a0;
- (id)_findWordCandidateInSearchRange:(id)a0 atPosition:(id)a1;
- (long long)_maxSearchRangeOffsetForUnit:(long long)a0;
- (id)_rangeContainingPosition:(id)a0 unit:(long long)a1;
- (void)_setCurrentPosition:(id)a0;
- (void)_updateCurrentWord;
- (id)_wordTokenzierWithString:(id)a0;
- (id)initWithTextProvider:(id)a0;
- (id)initWithTextProvider:(id)a0 wordTokenzierUnit:(long long)a1;
- (BOOL)moveToNextWord;
- (BOOL)moveToPreviousWord;

@end
