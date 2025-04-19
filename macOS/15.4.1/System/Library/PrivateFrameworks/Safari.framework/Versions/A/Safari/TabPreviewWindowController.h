@class TabPreviewViewController, RoundedWindow;
@protocol TabPreviewWindowControllerDelegate, TabBarViewItem;

@interface TabPreviewWindowController : NSObject {
    RoundedWindow *_tabPreviewWindow;
    TabPreviewViewController *_tabPreviewViewController;
    unsigned long long _pendingShowAnimations;
}

@property (weak, nonatomic) id<TabPreviewWindowControllerDelegate> delegate;
@property (readonly, nonatomic) id<TabBarViewItem> tabBarViewItem;

- (void).cxx_destruct;
- (void)closeWindow;
- (void)_positionPreviewWindowWithTabScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentWindow:(id)a1;
- (id)_tabPreviewWindow;
- (void)showWindowWithDataSource:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;

@end
