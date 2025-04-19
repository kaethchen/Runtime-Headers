@class NSFont;

@interface CUIKORFontUtils : NSObject

@property (class, readonly, nonatomic) NSFont *defaultOccurrenceSecondaryTextFont;

+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (id)_primaryTextFontCache;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (id)defaultOccurrencePrimaryTextFontForSizeClass:(long long)a0;
+ (id)defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)a0;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;

@end
