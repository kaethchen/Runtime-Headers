@class NSLayoutConstraint, NSMapTable, NSHashTable;

@interface AFUIPanelWindow : NSWindow {
    NSMapTable *_childWindowsToOcclusionDetectionViews;
    NSHashTable *_occludedDetectionViews;
    NSMapTable *_occlusionDetectionViewsToValidationTokens;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly, nonatomic) BOOL isAnyChildWindowOccluded;

- (void).cxx_destruct;
- (void)setContentView:(id)a0;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)_occlusionDetectionViewDidBecomeOccluded:(id)a0;
- (void)_occlusionDetectionViewDidBecomeUnoccluded:(id)a0;

@end
