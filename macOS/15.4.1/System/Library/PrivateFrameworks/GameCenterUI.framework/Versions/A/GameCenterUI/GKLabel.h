@class NSString, GKTextStyle;

@interface GKLabel : NSTextField <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
}

@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) double actualFontShrinkageFactor;
@property (nonatomic) BOOL shouldEnforcePreferredWidth;
@property (readonly, nonatomic) BOOL usingAttributedText;
@property (nonatomic) BOOL shouldInhibitReplay;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) double minimumScaleFactor;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)applyTextStyle:(id)a0;
- (void)replayAndApplyStyleUnlessInhibited;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)a0;
- (struct CGSize { double x0; double x1; })shrinkFontToFitSize:(struct CGSize { double x0; double x1; })a0;
- (void)shrinkFontToFitWidth;

@end
