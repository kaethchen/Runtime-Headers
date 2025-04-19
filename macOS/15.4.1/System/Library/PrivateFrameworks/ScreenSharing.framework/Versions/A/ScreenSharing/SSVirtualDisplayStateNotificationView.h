@class NSImageView;

@interface SSVirtualDisplayStateNotificationView : NSImageView

@property (retain) NSImageView *lockView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)layoutForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFrameAndRedraw;

@end
