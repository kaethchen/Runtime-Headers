@class NSView, NSString, CALayer;

@interface NSTouchBarColorListPickerOpaqueContainerView : NSView <NSTouchBarColorListPickerContainerView> {
    CALayer *_underContentCoverView;
}

@property (retain) NSView *contentView;
@property BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_alternateContentAffineTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_contentAffineTransform;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;

@end
