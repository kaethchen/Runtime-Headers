@interface IMKUICandidateSizeCache : NSObject

+ (struct CGSize { double x0; double x1; })cachedSizeForCandidate:(id)a0 fontSize:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })individualCJKCharacterSizeForFontSize:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })individualEmojiCharacterSizeForFontSize:(unsigned long long)a0;

@end
