@class NSString;

@interface AXFComposedCharacter : NSObject

@property (copy, nonatomic) NSString *_originalCombinedCharacter;
@property (nonatomic) unsigned long long _originalCombinedCharacterLength;
@property (nonatomic) int *_original;
@property (nonatomic) unsigned long long _originalLength;
@property (nonatomic) int *_normalizationFormD;
@property (nonatomic) unsigned long long _normalizationFormDLength;
@property (nonatomic) int *_normalizationFormKC;
@property (nonatomic) unsigned long long _normalizationFormKCLength;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)originalString;
- (id)initWithCharacter:(int)a0;
- (void)_buildNormalizationFormDIfNeeded;
- (void)_buildNormalizationFormKCIfNeeded;
- (BOOL)_normalizationFormDContainsUpperCase;
- (BOOL)_normalizationFormKCContainsUpperCase;
- (int)charAtIndexOfFormD:(unsigned long long)a0;
- (int)charAtIndexOfFormKC:(unsigned long long)a0;
- (int)charAtIndexOfOriginalForm:(unsigned long long)a0;
- (BOOL)containsUpperCase;
- (id)copyUnicodeDescriptionString;
- (unsigned long long)formDLength;
- (unsigned long long)formKCLength;
- (id)initWithComposedCharacter:(id)a0;
- (id)initWithComposedCharacterUnchecked:(id)a0;
- (BOOL)isEqualToUChar32:(int)a0;
- (id)literalDescription;
- (unsigned long long)originalLength;

@end
