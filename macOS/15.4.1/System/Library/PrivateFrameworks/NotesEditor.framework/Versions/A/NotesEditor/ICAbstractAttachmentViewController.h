@class NSColor, ICSearchResultRegexMatchFinder;

@interface ICAbstractAttachmentViewController : NSViewController

@property (readonly, nonatomic) BOOL isInResponderChain;
@property (readonly) BOOL forManualRendering;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (void)prepareForPrinting;
- (void)zoomFactorOrInsetsDidChange;

@end
