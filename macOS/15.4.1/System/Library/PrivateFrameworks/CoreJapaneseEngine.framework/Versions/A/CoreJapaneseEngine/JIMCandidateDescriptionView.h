@interface JIMCandidateDescriptionView : NSView

@property (nonatomic) struct CGSize { double width; double height; } requiredSize;

+ (id)descriptionViewWithString:(id)a0 filterButtonTarget:(id)a1 filterButtonAction:(SEL)a2;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
