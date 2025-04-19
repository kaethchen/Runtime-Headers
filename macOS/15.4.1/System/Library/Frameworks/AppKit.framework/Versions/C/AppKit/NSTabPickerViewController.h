@class NSMapTable, NSVisualTabPickerRootViewController, NSTabBarItem, NSString, NSArray;
@protocol NSTabPickerDelegate;

@interface NSTabPickerViewController : NSViewController <NSVisualTabPickerDelegate> {
    NSArray *_exposeItems;
}

@property (retain) NSVisualTabPickerRootViewController *tabPickerController;
@property BOOL isShown;
@property (weak) NSTabBarItem *selectedItem;
@property (readonly) BOOL isClosing;
@property (weak) id<NSTabPickerDelegate> delegate;
@property (readonly) NSMapTable *windowSnapshots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateSnapshots;
- (id)_makeTabPickerSnapshotForWindow:(id)a0;
- (void)_makeTabPickerViewControllerWithTabBarSnapshot:(id)a0 includeNewButton:(BOOL)a1;
- (id)_tabPickerThumbnailViews;
- (id)_updateSnapshotForWindow:(id)a0;
- (void)createNewTabForVisualTabPickerController:(id)a0;
- (BOOL)creatingNewTabWillCloseVisualTabPickerController:(id)a0;
- (BOOL)entryOrExitAnimationInProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForVisualTabPickerController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForWindowContentAnimation;
- (void)handleMagnification:(id)a0;
- (BOOL)hasSnapshotForWindow:(id)a0;
- (void)hideTabPickerAnimated:(BOOL)a0;
- (BOOL)isClosing;
- (void)loadView;
- (void)selectItemAtIndex:(long long)a0;
- (void)selectedTabDidChange;
- (id)selectedTabViewItemForVisualTabPickerController:(id)a0;
- (void)showTabPickerAnimated:(BOOL)a0 includeNewButton:(BOOL)a1;
- (id)snapshotForWindow:(id)a0;
- (id)tabBarItemsForVisualTabPickerController:(id)a0;
- (void)tabPickerItemsDidChange;
- (void)viewDidLoad;
- (BOOL)visualTabPicker:(id)a0 highlightStateForTabItem:(id)a1;
- (id)visualTabPicker:(id)a0 imageForTabItem:(id)a1;
- (id)visualTabPicker:(id)a0 thumbnailViewForTabItem:(id)a1;
- (void)visualTabPickerController:(id)a0 closeTabBarItem:(id)a1;
- (void)visualTabPickerController:(id)a0 selectTab:(id)a1;
- (void)visualTabPickerControllerDidBeginHiding:(id)a0;
- (void)visualTabPickerControllerDidEndHiding:(id)a0;
- (void)visualTabPickerControllerWillClose:(id)a0;
- (void)willStartExitAnimationForVisualTabPickerController:(id)a0;

@end
