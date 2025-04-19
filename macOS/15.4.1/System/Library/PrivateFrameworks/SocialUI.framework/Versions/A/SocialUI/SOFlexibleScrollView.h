@interface SOFlexibleScrollView : NSScrollView

@property (nonatomic) struct CGSize { double width; double height; } lastRecordedDocumentSize;
@property (nonatomic) BOOL hasHorizontalIntrinsicSize;
@property (nonatomic) BOOL hasVerticalIntrinsicSize;

+ (BOOL)requiresConstraintBasedLayout;

- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reflectScrolledClipView:(id)a0;
- (void)setDocumentView:(id)a0;

@end
