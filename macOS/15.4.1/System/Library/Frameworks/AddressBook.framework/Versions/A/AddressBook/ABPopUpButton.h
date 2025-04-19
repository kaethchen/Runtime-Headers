@class NSString;
@protocol ABPopUpButtonDelegate;

@interface ABPopUpButton : NSPopUpButton <NSAccessibilityStaticText>

@property (weak, nonatomic) id<ABPopUpButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)accessibilityValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)firstBaselineOffsetFromTop;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)resignFirstResponder;
- (BOOL)needsCardViewBorderDrawing;

@end
