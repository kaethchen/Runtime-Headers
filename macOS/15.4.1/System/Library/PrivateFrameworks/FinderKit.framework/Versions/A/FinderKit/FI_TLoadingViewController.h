@interface FI_TLoadingViewController : FI_TViewController {
    BOOL _hasVerticalScroller;
    long long _verticalScrollElasticity;
    BOOL _hasHorizontalScroller;
    long long _horizontalScrollElasticity;
}

- (id)nibName;
- (void)configForOverlay:(id)a0;
- (void)undoConfigForOverlay:(id)a0;

@end
