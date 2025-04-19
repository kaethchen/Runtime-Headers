@class NSView;
@protocol NSPortalViewImplementation;

@interface NSPortalView : NSView {
    NSView *_sourceView;
    NSView<NSPortalViewImplementation> *_portalView;
}

@property (retain) NSView *sourceView;

+ (BOOL)automaticallyNotifiesObserversOfSourceView;

- (void)dealloc;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
