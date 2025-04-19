@class KHLayoutThumbnailManager, KHSelectionManager, NSMutableSet, UXViewController, KHEditorDisplayFilter;
@protocol KHEditorDelegate, KHEditorDataSource, KHMutableEditorDataSource;

@interface KHEditor : NSObject {
    BOOL _didAppear;
    NSMutableSet *_visibleDisplayModes;
    KHSelectionManager *_selectionManager;
}

@property (readonly, nonatomic) id<KHEditorDataSource> dataSource;
@property (readonly, nonatomic) id<KHMutableEditorDataSource> mutableDataSource;
@property (weak, nonatomic) id<KHEditorDelegate> delegate;
@property (readonly, nonatomic) KHSelectionManager *selectionManager;
@property (readonly, nonatomic) KHLayoutThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) UXViewController *presentingViewController;
@property (retain, nonatomic) KHEditorDisplayFilter *appliedFilter;
@property (nonatomic) long long displayMode;

+ (id)indexPathsForIndexes:(id)a0;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (long long)layoutOrientation;
- (id)menuForEvent:(id)a0;
- (void)print:(id)a0;
- (void)toggleInspector:(id)a0;
- (void)editorDidAppear;
- (unsigned long long)_maxSelectedLayoutIndex;
- (id)accessoryViewControllersForDisplayMode:(long long)a0;
- (id)backButtonAccessibilityLabelForDisplayMode:(long long)a0;
- (id)backButtonTitleForDisplayMode:(long long)a0;
- (id)dataSourceForDisplayMode:(long long)a0;
- (void)didAppearWithDisplayMode:(long long)a0;
- (void)didChangeDisplayMode:(long long)a0;
- (id)displayFiltersForDisplayMode:(long long)a0;
- (void)editorWillDisappear;
- (void)exportPayload:(id)a0;
- (Class)gridViewCellClass;
- (id)leadingBarButtonItemsForDisplayMode:(long long)a0;
- (Class)pagingViewCellClass;
- (BOOL)requestDeletionOfLayoutsAtIndexSet:(id)a0;
- (void)showSettings:(id)a0;
- (id)trailingBarButtonItemsForDisplayMode:(long long)a0;
- (void)updateAccessoryViewControllers:(id)a0 forDisplayMode:(long long)a1;
- (void)viewDidAppearForDisplayMode:(long long)a0;
- (void)viewWillDisappearForDisplayMode:(long long)a0;
- (id)visibleLayouts;

@end
