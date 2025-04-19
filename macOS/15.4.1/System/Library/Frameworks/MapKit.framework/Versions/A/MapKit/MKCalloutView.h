@class MKAnnotationView;

@interface MKCalloutView : NSView

@property (readonly, weak, nonatomic) MKAnnotationView *annotationView;
@property (readonly, nonatomic) long long anchorPosition;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) BOOL hasPendingVisibility;
@property (readonly, nonatomic, getter=isLeftAnchored) BOOL leftAnchored;
@property (nonatomic) BOOL parallaxEnabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)annotationViewFrameDidChange;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;

@end
