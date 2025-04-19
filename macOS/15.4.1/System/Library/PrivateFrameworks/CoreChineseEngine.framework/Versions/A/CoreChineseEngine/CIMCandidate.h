@class NSString, NSArray;

@interface CIMCandidate : IMKCandidate

@property (copy) NSString *surface;
@property (copy) NSString *reading;
@property (copy) NSString *displayReading;
@property (readonly, getter=isExtensionCandidate) BOOL extensionCandidate;
@property (getter=isInlineCandidate) BOOL inlineCandidate;
@property (readonly, getter=isUserWordCandidate) BOOL userWordCandidate;
@property (readonly, getter=isLearningDictionaryCandidate) BOOL learningDictionaryCandidate;
@property (readonly, getter=isEmojiCandidate) BOOL emojiCandidate;
@property (readonly, getter=isCompletionCandidate) BOOL complectionCandidate;
@property (readonly, getter=isCompositionCandidate) BOOL compositionCandidate;
@property (readonly, getter=isPredictionCandidate) BOOL predictionCandidate;
@property (readonly, getter=isFacemarkCandidate) BOOL facemarkCandidate;
@property (readonly, getter=isFuzzyCandidate) BOOL fuzzyCandidate;
@property (readonly) NSString *fuzzyReading;
@property (readonly, getter=isBilingualCandidate) BOOL bilingualCandidate;
@property (readonly, getter=isWubiConvertedByPinyin) BOOL wubiConvertedByPinyin;
@property (readonly, getter=isPrefixMatched) BOOL prefixMatched;
@property unsigned long long scriptType;
@property BOOL usesPointerAsUniqueKey;
@property (copy, nonatomic) NSArray *supplementalItemIdentifiers;
@property (nonatomic) unsigned short supplementalItemPrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)text;
- (id)axHelpString;
- (id)initWithSurface:(id)a0 reading:(id)a1;
- (id)initWithSurface:(id)a0 reading:(id)a1 displayReading:(id)a2;

@end
