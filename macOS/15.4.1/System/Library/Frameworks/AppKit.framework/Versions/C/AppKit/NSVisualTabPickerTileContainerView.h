@class NSTextField, NSString, NSView, NSVisualTabPickerGridView, NSMutableArray;
@protocol NSVisualTabPickerTileContainerDataSource, NSVisualTabPickerTileContainerDelegate;

@interface NSVisualTabPickerTileContainerView : NSView <NSVisualTabPickerNewTabViewDelegate, NSVisualTabPickerThumbnailDataSource, NSVisualTabPickerThumbnailDelegate> {
    NSMutableArray *_thumbnailViews;
    NSView *_3DContainerView;
    NSTextField *_title;
    BOOL _didSetTileConstraints;
}

@property (weak, nonatomic) id<NSVisualTabPickerTileContainerDataSource> dataSource;
@property (weak, nonatomic) id<NSVisualTabPickerTileContainerDelegate> delegate;
@property (weak, nonatomic) NSVisualTabPickerGridView *visualTabPickerGridView;
@property (nonatomic) long long tileContainerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGPoint { double x0; double x1; })offsetBetweenStackedThumbnails;
+ (double)thumbnailYOffset;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)layout;
- (void)_setUpTitleView;
- (void)addTileAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerTileFrame;
- (void)_createNewTabContainerView;
- (void)_createTileAtIndex:(unsigned long long)a0;
- (id)_createTitleTextField;
- (void)_setUp3DContainerForTiles;
- (void)_setUpTiles;
- (void)_showCloseButtonAndExposeBorderIfNeededWithMouseLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_startStackFoldingAnimation:(long long)a0 animationDuration:(double)a1 indexOfSelectedTile:(unsigned long long)a2;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_tile3DTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tileFrameForTileWithIndex:(unsigned long long)a0;
- (void)_updateTilesLayout;
- (void)animateSidebarForThumbnailAtIndex:(unsigned long long)a0 image:(id)a1 width:(double)a2 gridAnimation:(long long)a3;
- (void)animateToolbarForThumbnailAtIndex:(unsigned long long)a0 image:(id)a1 height:(double)a2 gridAnimation:(long long)a3;
- (BOOL)canCloseTabInNSVisualTabPickerThumbnailView:(id)a0;
- (void)cleanupAnimationsForThumbnailAtIndex:(unsigned long long)a0;
- (void)didCloseVisualTabPickerThumbnailView:(id)a0;
- (void)didRequestNewTabForNSVisualTabPickerNewTabView:(id)a0;
- (void)didSelectVisualTabPickerThumbnailView:(id)a0;
- (void)entryAnimationHasFinished;
- (void)hideCloseButtons;
- (BOOL)highlightStateForVisualTabPickerTileThumbnailView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)imageForVisualTabPickerTileThumbnailView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visualTabPickerGridView:(id)a1 containerType:(long long)a2;
- (id)makeBackingLayer;
- (void)mouseMoved:(id)a0;
- (unsigned long long)numberOfTilesInContainer;
- (void)reloadTileAtIndex:(unsigned long long)a0;
- (void)removeTileAtIndex:(unsigned long long)a0;
- (void)selectedTabDidChange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startTiltAnimation:(long long)a0 animationDuration:(double)a1 indexOfSelectedTile:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailContainerFrameForThumbnailAtIndex:(unsigned long long)a0;
- (id)titleForNSVisualTabPickerThumbnailView:(id)a0;
- (id)viewForVisualTabPickerTileThumbnailView:(id)a0;
- (void)willStartAnimationExitAtIndex:(unsigned long long)a0;
- (void)willStartExitAnimation;

@end
