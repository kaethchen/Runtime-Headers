@class NSTextField, AXElementNamesItemStrokeView, NSString, NSVisualEffectView;

@interface SO_AXElementNamesItemView : NSView

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeArea;
@property (retain, nonatomic) NSVisualEffectView *backgroundView;
@property (retain, nonatomic) NSTextField *labelView;
@property (retain, nonatomic) AXElementNamesItemStrokeView *strokeView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelBodyFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelTotalFrame;
@property (nonatomic) struct CGPoint { double x; double y; } arrowTipLocation;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementFrame;
@property (nonatomic) long long positioningMode;
@property (readonly, nonatomic) BOOL labelPositionIsValid;
@property (readonly, nonatomic) BOOL hasExtendedArrow;
@property (nonatomic) BOOL isSpacer;

- (void).cxx_destruct;
- (void)layout;
- (double)_cornerRadius;
- (id)_maskImage;
- (id)_maskPath;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateBodyFrameForPositionMode;
- (double)_arrowHeight;
- (BOOL)_arrowPointsDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_collisionFrameForArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementFrameAdjustedSafeArea;
- (void)_updateFromLabelContainerFrame;
- (BOOL)_usesArrow;
- (BOOL)_usesExtendedArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validateLabelBodyFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addQuadCurveToBezierPath:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)collidesWithView:(id)a0;
- (id)initWithName:(id)a0 elementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 availableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 styleProvider:(id)a3 isSpacer:(BOOL)a4;

@end
