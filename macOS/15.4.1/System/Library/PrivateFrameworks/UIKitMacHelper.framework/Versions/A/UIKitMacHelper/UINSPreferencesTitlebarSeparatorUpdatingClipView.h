@interface UINSPreferencesTitlebarSeparatorUpdatingClipView : NSClipView {
    long long _originalTitlebarSeparatorStyle;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_didChangeBoundsNotification:(id)a0;
- (void)_updateTitlebarSeparatorStyleForWindow:(id)a0;

@end
