@interface MKFullDeveloperPlaceCardSelectionAccessoryView : MKViewSwitchingSelectionAccessoryView {
    BOOL _isStandAlonePlaceCard;
    BOOL _hideInlineMap;
}

- (id)initAsAccessory;
- (id)_createErrorView;
- (id)_createLoadingView;
- (id)_createMapItemViewController:(id)a0;
- (id)initAsStandAloneHidingInlineMap:(BOOL)a0;

@end
