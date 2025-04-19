@interface SiriSharedUIStandardScrollView : NSScrollView

@property (nonatomic) BOOL scrollEnabled;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (id)init;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGSize { double x0; double x1; })contentSize;
- (BOOL)isFlipped;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)scrollWheel:(id)a0;
- (void)setClipsToBounds:(BOOL)a0;
- (BOOL)wantsLayer;
- (void)addContentView:(id)a0;
- (id)contentViews;
- (BOOL)isSemanticContentAttributeRightToLeft;

@end
