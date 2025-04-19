@class NSView, NSMutableDictionary, NSColor;

@interface ICTableContentView : NSView

@property (retain, nonatomic) NSMutableDictionary *horizontalStrokes;
@property (retain, nonatomic) NSMutableDictionary *verticalStrokes;
@property (retain, nonatomic) NSView *topBorder;
@property (retain, nonatomic) NSView *bottomBorder;
@property (retain, nonatomic) NSView *leftBorder;
@property (retain, nonatomic) NSView *rightBorder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exclusionRect;
@property (copy, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) double innerBorderWidth;
@property (readonly, nonatomic) NSColor *innerBorderColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateLayer;
- (void)updateLayout;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateColors;
- (id)outerBorderColor;
- (void)sharedInit;
- (id)addSubstrokeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toStroke:(id)a1;
- (void)setVerticalLinePosition:(id)a0 forKey:(id)a1;
- (double)alignedPosition:(double)a0;
- (id)createStroke;
- (double)outerBorderWidth;
- (void)recursivelyUpdateLayer:(id)a0 toColor:(struct CGColor { } *)a1 ignoreIfClear:(BOOL)a2;
- (void)setHorizontalLinePosition:(id)a0 forKey:(id)a1;
- (BOOL)splitStroke:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)unsplitStroke:(id)a0;

@end
