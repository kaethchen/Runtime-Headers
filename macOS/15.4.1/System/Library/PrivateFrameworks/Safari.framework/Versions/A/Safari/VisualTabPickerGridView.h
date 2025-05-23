@class NSString, VisualTabPickerLayoutEngine, CALayer, FlippedView, VisualTabPickerViewController, NSMutableArray, VisualTabPickerGridViewTransitionCoordinator, NSMapTable;
@protocol VisualTabPickerTransitioning, VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate;

@interface VisualTabPickerGridView : NSView <VisualTabPickerTileContainerDataSource, VisualTabPickerTileContainerDelegate, VisualTabPickerLayoutEngineInputProvider, VisualTabPickerGridViewTransitionCoordinatorDataSource> {
    FlippedView *_gridContainerView;
    NSMutableArray *_tileContainerViews;
    NSMutableArray *_tabViewItems;
    VisualTabPickerLayoutEngine *_layoutEngine;
    BOOL _didStartEntryAnimation;
    NSMapTable *_webViewThumbnailViewReuseDictionary;
    VisualTabPickerGridViewTransitionCoordinator *_transitionCoordinator;
    BOOL _shouldScaleDownUnfocusedTiles;
}

@property (weak, nonatomic) id<VisualTabPickerGridViewDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerGridViewDelegate> delegate;
@property (weak, nonatomic) VisualTabPickerViewController *visualTabPickerViewController;
@property (readonly, nonatomic) BOOL gridAnimationInProgress;
@property (readonly, nonatomic) id<VisualTabPickerTransitioning> transitionCoordinator;
@property (readonly, nonatomic) CALayer *tileContainerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_unhideAllTiles;
- (void)_reloadGridView;
- (void)_addCreateNewTabContainerView;
- (void)_computeArrayOfTabItemsPerContainer;
- (void)_hideTilesNotVisibleDuringExitAnimation;
- (unsigned long long)_indexForContainerView:(id)a0;
- (unsigned long long)_indexOfContainerForTabViewItem:(id)a0;
- (unsigned long long)_numberOfTilesInGridView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfVisibleTiles;
- (void)_resetGridView;
- (void)_setUpContainerViews;
- (void)_setUpGridContainer;
- (BOOL)_shouldDisplayNewTabContainer;
- (void)_startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_willStartExitAnimation;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)addTabViewItem:(id)a0 atIndex:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSelectedTile;
- (double)gridViewContentHeight;
- (void)hideCloseButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerViewController:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)reloadGridView;
- (void)reloadTabViewItem:(id)a0;
- (void)removeTabViewItem:(id)a0;
- (void)startGridAnimation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)updateGridViewLayout;
- (void)willUpdateTransitionDestination;
- (void)_addContainerViewAtIndex:(unsigned long long)a0 isVisible:(BOOL)a1 isFocused:(BOOL)a2;
- (id)_containerViewForTabItem:(id)a0;
- (id)_destinationTileContainerView;
- (void)_didToggleMuteButtonForTabViewItem:(id)a0;
- (long long)_muteButtonStateForMutableMediaState:(unsigned long long)a0 audioMuted:(BOOL)a1 mediaCaptureMuted:(BOOL)a2;
- (long long)_muteButtonStateForVisualTabViewItem:(id)a0;
- (void)_scaleUpAllTiles;
- (BOOL)_shouldShowMuteButtonForTabViewItem:(id)a0;
- (id)_siteIconForTabViewItem:(id)a0;
- (id)_tabViewItemForContainerView:(id)a0;
- (id)_tileViewForTabViewItem:(id)a0 lowResolution:(BOOL)a1;
- (double)_toolbarHeight;
- (void)_updateScaleFactorForAllTiles;
- (void)_updateVisibilityOfTileContainerViews;
- (void)_visualTabPickerTileContainerViewDidRequestNewTab;
- (void)_visualTabPickerTileContainerViewDidSelectTabViewItem:(id)a0;
- (void)_visualTabPickerViewDidCloseTabViewItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForLayoutEngine:(id)a0;
- (BOOL)containerIsInsetForLayoutEngine:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentLayoutFrameForGridViewTransitionWithCoordinator:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })destinationTileFrameForGridViewTransitionWithCoordinator:(id)a0;
- (id)destinationTileTransitionCoordinatorForGridViewTransitionWithCoordinator:(id)a0;
- (void)didFinishEntryAnimation;
- (void)gridViewTransitionCoordinatorWillUpdateDestinationTile:(id)a0;
- (id)hitTestWithWindowCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id)layerForGridViewTransitionWithCoordinator:(id)a0;
- (BOOL)layoutEngineShouldLayOutRightToLeft:(id)a0;
- (long long)muteButtonStateForVisualTabPickerTileContainerView:(id)a0;
- (unsigned long long)numberOfTilesForLayoutEngine:(id)a0;
- (void)reloadGridViewClearingReuseCache:(BOOL)a0;
- (void)scaleDownUnfocusedTiles;
- (id)siteIconForVisualTabPickerTileContainerView:(id)a0;
- (double)tileHeightToWidthRatioForLayoutEngine:(id)a0;
- (id)tileViewForVisualTabPickerTileContainerView:(id)a0 lowResolution:(BOOL)a1;
- (id)titleForVisualTabPickerTileContainerView:(id)a0;
- (void)updateIconForTab:(id)a0;
- (void)updateMuteButtonForTab:(id)a0;
- (void)visibleBoundsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForVisualTabPickerTileContainerView:(id)a0;
- (BOOL)visualTabPickerTileContainerViewCanClose:(id)a0;
- (void)visualTabPickerTileContainerViewDidClose:(id)a0;
- (void)visualTabPickerTileContainerViewDidRequestNewTab:(id)a0;
- (void)visualTabPickerTileContainerViewDidSelect:(id)a0;
- (void)visualTabPickerTileContainerViewDidToggleMuteButton:(id)a0;
- (BOOL)visualTabPickerTileContainerViewShouldBeScaledDown:(id)a0;
- (BOOL)visualTabPickerTileContainerViewShouldShowMuteButton:(id)a0;

@end
