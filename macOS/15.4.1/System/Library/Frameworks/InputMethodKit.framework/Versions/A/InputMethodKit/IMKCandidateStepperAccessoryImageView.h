@class NSImage, NSString;

@interface IMKCandidateStepperAccessoryImageView : IMKUIView

@property (readonly, retain, nonatomic) NSImage *arrowImage;
@property (copy, nonatomic) NSString *arrowImageName;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;

@end
