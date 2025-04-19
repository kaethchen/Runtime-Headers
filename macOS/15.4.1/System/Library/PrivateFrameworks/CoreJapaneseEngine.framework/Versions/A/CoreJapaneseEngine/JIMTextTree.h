@class NSString, NSMutableString, NSMutableArray;

@interface JIMTextTree : NSObject <NSCopying>

@property (retain) NSMutableArray *inputTextArray;
@property (retain) NSMutableArray *surfaceTextArray;
@property long long romajiInsertionPoint;
@property (retain) NSMutableString *cachedString;
@property (retain) NSMutableString *cachedRegularWidthRomajiString;
@property (retain) NSString *cachedNormalizedRomajiString;
@property BOOL noRebuild;
@property BOOL generatedByKanaTyping;
@property BOOL hasCompleteChars;
@property BOOL hasIncompleteChars;
@property BOOL hasIncompleteEnd;
@property (readonly) JIMTextTree *normalizedCopy;
@property (readonly, copy) NSString *string;
@property (readonly, copy) NSString *stringWithRegularWidthRomajiFragment;
@property (readonly, copy) NSString *romajiString;
@property (readonly, copy) NSString *normalizedRomajiString;
@property (readonly, copy) NSString *rawString;
@property (nonatomic) long long insertionPoint;
@property (readonly) BOOL hasKanaLetters;
@property (readonly) unsigned long long transliterationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)deleteCharacter;
- (void)appendTextTree:(id)a0;
- (void)_clearStringCaches;
- (id)_inputStringForTag:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)_insertRomajiArrayToArray:(id)a0 atIndex:(long long)a1 fromString:(id)a2 transliteration:(unsigned long long)a3 completeFlag:(BOOL)a4;
- (void)_rebuildSurfaceTextArray:(BOOL)a0;
- (unsigned long long)_romajiIndexAt:(long long)a0 forOperation:(unsigned long long)a1;
- (void)cleanUpTail;
- (void)deleteAllCharacters;
- (void)deleteAllCharactersAndFlushCache;
- (id)initWithString:(id)a0 withTransliteration:(unsigned long long)a1;
- (id)initWithTextTree:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTextTree:(id)a0 romajiRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertCharacter:(id)a0 rawCharacter:(id)a1 withTransliteration:(unsigned long long)a2;
- (id)rawStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharacterAtIndex:(unsigned long long)a0 withCharacter:(id)a1 rawCharacter:(id)a2 transliteration:(unsigned long long)a3;
- (id)romajiStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)stringWithRegularWidthRomajiFragmentForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)transliterateSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 to:(unsigned long long)a1;
- (void)transliterateTo:(unsigned long long)a0;
- (unsigned long long)transliterationTypeAtIndex:(unsigned long long)a0;

@end
