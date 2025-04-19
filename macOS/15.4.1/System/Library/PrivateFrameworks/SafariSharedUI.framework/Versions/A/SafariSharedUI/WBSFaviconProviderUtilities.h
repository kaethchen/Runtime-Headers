@interface WBSFaviconProviderUtilities : NSObject

+ (long long)computeRelativeSize:(struct CGSize { double x0; double x1; })a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithURL:(id)a0 closetToPreferredSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isFaviconSize:(struct CGSize { double x0; double x1; })a0 morePreferrableThanFaviconSize:(struct CGSize { double x0; double x1; })a1 givenDesiredSize:(struct CGSize { double x0; double x1; })a2;

@end
