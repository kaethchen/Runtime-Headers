@interface AXKAttributedStringParser : NSObject

+ (long long)_CTTextAlignmentToNSTextAlignment:(unsigned char)a0;
+ (id)_cleanupAttributedString:(id)a0;
+ (id)_colorAttribute:(id)a0 forAttributedString:(id)a1 atIndex:(unsigned long long)a2;
+ (BOOL)_containsBoldAttribute:(id)a0;
+ (BOOL)_containsItalicAttribute:(id)a0;
+ (unsigned int)_fontDescriptorTraitsFromAXFont:(id)a0;
+ (id)_parseAttributes:(id)a0 intoAttributedString:(id)a1 font:(id)a2 fontColor:(id)a3 backgroundColor:(id)a4 fontSize:(double)a5 shouldUseOriginalAlpha:(BOOL)a6;
+ (id)_updateFont:(id)a0 withTraits:(unsigned int)a1;
+ (id)backgroundColorForAttributedString:(id)a0 atIndex:(unsigned long long)a1;
+ (id)fontForAttributedString:(id)a0 atIndex:(unsigned long long)a1;
+ (id)foregroundColorForAttributedString:(id)a0 atIndex:(unsigned long long)a1;
+ (id)formatAttributedString:(id)a0 font:(id)a1 fontColor:(id)a2 backgroundColor:(id)a3 fontSize:(double)a4 shouldUseOriginalAlpha:(BOOL)a5;
+ (id)removeAttributesFromAttributedString:(id)a0 forRangesMatchingPattern:(id)a1;
+ (long long)textAlignmentForRange:(id)a0 textElement:(id)a1;
+ (id)trimNewlineFromAttriubtedString:(id)a0;

@end
