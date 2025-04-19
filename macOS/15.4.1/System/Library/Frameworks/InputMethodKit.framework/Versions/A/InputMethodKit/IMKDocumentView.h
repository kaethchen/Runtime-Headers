@interface IMKDocumentView : NSView

@property (nonatomic) struct CGPoint { double x; double y; } highestPoints;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) BOOL hasRubberbandEffect;
@property (nonatomic) double scrollingIncrements;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
