@interface PXSearchDisplayUtility : NSObject

+ (BOOL)layoutDirectionIsRTL;
+ (BOOL)shouldUseAccessibilityLayout;
+ (BOOL)attributedStringFontNeedsUpdate:(id)a0 currentFont:(id)a1;
+ (double)automaticRowHeight;
+ (id)defaultStringAttributes;
+ (id)highlightedAttributedStringForString:(id)a0 highlightedSubstring:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3;
+ (id)listStringJoiningSearchTerms:(id)a0;
+ (id)localizedListStringFromSearchTokenNames:(id)a0 searchText:(id)a1 includeQuotationDelimitersForSearchText:(BOOL)a2;
+ (id)wordEmbeddingPathColor;
+ (id)wordEmbeddingTextColor;

@end
