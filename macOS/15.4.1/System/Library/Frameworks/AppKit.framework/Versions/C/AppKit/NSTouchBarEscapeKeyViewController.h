@class NSTouchBarItem, NSTouchBarEscapeKeyView;

@interface NSTouchBarEscapeKeyViewController : NSViewController {
    NSTouchBarItem *_touchBarItem;
}

@property (retain) NSTouchBarItem *touchBarItem;
@property (retain) NSTouchBarEscapeKeyView *view;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;

+ (id)keyPathsForValuesAffectingPreferredSize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)refreshSubviews;
- (void)_noteTouchBarItemViewChanged;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;

@end
