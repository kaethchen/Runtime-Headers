@interface MCTextConversion : NSObject

+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)a0;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)a0;
+ (long long)ligatureFromString:(id)a0;
+ (id)shadowFromTextFormat:(id)a0;
+ (id)stretchForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (id)stringAttributesWithAttributedString:(id)a0;
+ (id)stringFromLigature:(long long)a0;
+ (id)stringFromTextAlignment:(long long)a0;
+ (id)styleForFontDisplayName:(id)a0 andFamilyName:(id)a1;
+ (long long)textAlignmentFromString:(id)a0;
+ (id)textFormatFromShadow:(id)a0;
+ (id)textFormatFromUnderlineStyle:(unsigned long long)a0;
+ (id)textFormatWithCTAttributesForText:(id)a0 attributes:(id)a1;
+ (id)textFormatWithNSAttributesForText:(id)a0 attributes:(id)a1;
+ (unsigned long long)underlineStyleFromTextFormat:(id)a0;
+ (id)weightForFontDisplayName:(id)a0 andFamilyName:(id)a1;

@end
