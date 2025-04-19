@interface PPSGestureRow : PPGestureRow {
    long long _prepareChoicePopupOnce;
}

- (id)title;
- (void)refreshUI;
- (void)setup;
- (void)_prepareChoicePopup;

@end
