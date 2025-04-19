@class NSView, NSArray;

@interface MKFullDeveloperPlaceCardLoadingView : NSView {
    NSView *_backgroundView;
    NSView *_separatorView;
    NSArray *_platterViews;
    NSArray *_accessoryViews;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (id)init;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)setup;
- (id)_createContainerViewWithBackground:(BOOL)a0;
- (id)_createSeparatorView;

@end
