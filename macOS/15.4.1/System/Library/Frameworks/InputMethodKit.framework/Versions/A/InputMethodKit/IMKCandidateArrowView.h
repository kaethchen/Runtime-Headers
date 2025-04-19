@class NSImage;

@interface IMKCandidateArrowView : IMKUIView

@property (nonatomic) SEL action;
@property (readonly, retain, nonatomic) NSImage *arrowImageUp;
@property (readonly, retain, nonatomic) NSImage *arrowImageDown;
@property (nonatomic) BOOL pointsUpwards;
@property (nonatomic) id target;
@property (nonatomic) BOOL visible;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 properties:(id)a1;

@end
