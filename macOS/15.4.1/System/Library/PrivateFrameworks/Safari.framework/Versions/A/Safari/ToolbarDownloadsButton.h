@class ToolbarDownloadsButtonProgressBar;

@interface ToolbarDownloadsButton : ToolbarButtonPlus {
    float _lastUpdatedProgress;
    ToolbarDownloadsButtonProgressBar *_progressBar;
}

+ (Class)cellClass;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToSuperview;
- (void)updateWithProgress:(float)a0;
- (void)_accessibilityDisplayOptionsDidChange;

@end
