@interface ABStringTokenizer : NSObject

+ (id)rangesOfWordUnitTokensInString:(id)a0;
+ (id)tokenizeString:(id)a0;
+ (id)adjustRanges:(id)a0 toIncludeNonBreakingCharactersInString:(id)a1;
+ (BOOL)isCharacterNonBreaking:(unsigned short)a0;
+ (id)rangesOfWordTokensInString:(id)a0;

@end
