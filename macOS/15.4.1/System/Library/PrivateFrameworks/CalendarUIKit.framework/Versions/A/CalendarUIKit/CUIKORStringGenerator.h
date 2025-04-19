@interface CUIKORStringGenerator : NSObject

+ (id)_attributedLocationWithState:(id)a0 locationImageName:(id)a1;
+ (id)_attributedStringWithSystemImageName:(id)a0 symbolAttributes:(id)a1 widthForSymbol:(double)a2 baseString:(id)a3;
+ (id)_attributedTimeWithState:(id)a0 options:(unsigned long long)a1 locationImageName:(id)a2;
+ (id)_attributedTitleWithState:(id)a0;
+ (id)_defaultAttributesForState:(id)a0;
+ (double)_defaultMinimumLineHeightForState:(id)a0;
+ (void)_indentWrappingLinesAndLinesOtherThanTheFirstWithBaseParagraphStyle:(id)a0 string:(id)a1 indentAmount:(double)a2;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (double)_naturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (double)_widthForWidestPossibleIconIncludingTrailingPadding:(id)a0 locationImageName:(id)a1;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (double)minNaturalTextHeightForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (double)naturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;

- (id)generateContentStringsWithState:(id)a0 options:(unsigned long long)a1;
- (id)generateTrailingStringWithState:(id)a0;
- (id)generateTravelTimeStringWithState:(id)a0;

@end
