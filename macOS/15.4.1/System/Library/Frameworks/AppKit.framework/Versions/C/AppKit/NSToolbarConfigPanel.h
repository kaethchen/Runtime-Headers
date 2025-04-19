@class NSTextField, NSString, NSSegmentedControl, NSToolbarSnapshotWindow, NSToolbarPaletteScrollView, NSPopUpButton, NSToolbar, NSLayoutConstraint, NSToolbarImageRepView, NSCollectionView, NSButton;

@interface NSToolbarConfigPanel : NSPanel <NSCollectionViewDataSource, NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate> {
    NSToolbar *_editedToolbar;
    double _widthOfWidgets;
    double _individualItemsMaxHeight;
    NSToolbar *_individualItemsToolbar;
    NSTextField *_individualItemsText;
    NSCollectionView *_individualItemsCollectionView;
    NSToolbarPaletteScrollView *_individualItemsScrollView;
    NSToolbar *_defaultItemsToolbar;
    NSTextField *_defaultItemsText;
    NSToolbarImageRepView *_defaultToolbarImageRep;
    NSTextField *_displayModeLabel;
    NSPopUpButton *_displayModePopUp;
    NSButton *_useSmallIconsCheckBox;
    NSSegmentedControl *_displayModeSegmentedControl;
    NSToolbarSnapshotWindow *_snapshotWindow;
    BOOL _waitingForToolbarsToLoad;
    BOOL _defaultSetImageRepLoaded;
    NSLayoutConstraint *_individualItemsScrollViewHeightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nibName;
+ (id)toolbarConfigPanelForToolbar:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupCollectionViewConstraints;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)_configureContentViewsAndInformEditedToolbar;
- (id)_createOffscreenDefaultImageRepSetWindowWithDefaultToolbar;
- (void)_editedToolbarChangedItemWithIdentifier:(id)a0;
- (void)_loadDefaultSetImageRep;
- (void)_loadIndividualItemsCollectionView;
- (void)_loadingToolbarsTimedOut;
- (int)_setBackingStoreResolution:(double)a0;
- (void)_setDefaultToolbarItemSetFromMenuItem:(id)a0;
- (void)_setupAllowedDisplayModes;
- (BOOL)_shouldDeemphasizeItemInPalette:(id)a0;
- (double)_spaceNeededForPaletteLabelsOfItem:(id)a0 preferredWidth:(double)a1;
- (void)_syncToChangedToolbar:(id)a0 itemInserted:(id)a1;
- (void)_syncToChangedToolbar:(id)a0 itemMoved:(id)a1;
- (void)_syncToChangedToolbar:(id)a0 itemRemoved:(id)a1;
- (void)_syncToChangedToolbar:(id)a0 toolbarModeChanged:(id)a1;
- (void)_syncToChangedToolbar:(id)a0 toolbarReplacedAllItems:(id)a1;
- (void)_touchBarDisplayModeChanged:(id)a0;
- (void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)a0;
- (void)beginObservingLoadingToolbars;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 maxSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 minSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (id)editedToolbar;
- (void)endObservingLoadingToolbarsIfNecessary;
- (void)loadData;
- (id)makeTouchBar;
- (void)prepareDefaultSetToolbar;
- (void)prepareIndividualItemsToolbar;
- (BOOL)preventsApplicationTerminationWhenModal;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (unsigned long long)sheetBehavior;
- (void)windowDidChangeEffectiveAppearance;

@end
